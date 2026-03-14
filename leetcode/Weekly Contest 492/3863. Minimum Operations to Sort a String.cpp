class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string sortedString = s;
        sort(begin(sortedString), end(sortedString));

        bool all = true;
        for(int i = 0;i < n;i++)
            if(s[i] != sortedString[i]){
                all = false;
                break;
            }
        
        if(all)
            return 0;
        
        if(s[0] == sortedString[0] || s[n-1] == sortedString[n-1])
            return 1;
        
        if(n == 2){
            return -1;
        }

        int a = -1,b = -1;
        for(int i = 0;i < n;i++){
            if(a == -1 && s[i] == sortedString[0]){
                a = i;
            }
            if(s[i] == sortedString[n-1])
                b = i;
        }

        if(b == 0 && a == n - 1)
            return 3;
        return 2;
    }
};
