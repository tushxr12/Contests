//Solved in contest by this :
class Solution {
public:
    string generateTag(string caption) {
        int n = caption.size();
        string ans = "#";
        // ans += tolower(caption[0]);
        bool c = false;
        for(int i = 0;i < n;i++){
            if(c && caption[i] != ' '){
                ans += toupper(caption[i]);
                c = false;
                continue;
            }
            if(caption[i] == ' ' && i != 0){
                c = true;
            }
            else if(caption[i] != ' '){
                ans += tolower(caption[i]);
                c = false;
            }   
        }
        // ans[1] = toupper(ans[1]);
        return min(ans, ans.substr(0,100));
    }
};
