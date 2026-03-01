class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u')
            return true;
        return false;
    }
    string trimTrailingVowels(string s) {
        int n = s.size();
        for(int i = n - 1;i >= 0;i--){
            if(isVowel(s[i])){
                s.pop_back();
            }else{
                break;
            }
        }
        return s;
    }
};
