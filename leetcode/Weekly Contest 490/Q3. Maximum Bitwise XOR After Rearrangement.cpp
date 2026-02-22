class Solution {
public:
    string maximumXor(string s, string t) {
        int sOnes = 0, sZeroes = 0, tOnes = 0, tZeroes = 0;
        int n = s.size();
        for(auto i : s){
            if(i == '1')
                sOnes++;
            else
                sZeroes++;
        }

        for(auto i : t){
            if(i == '1')
                tOnes++;
            else
                tZeroes++;
        }

        if((sZeroes == 0 && tZeroes == 0) || (sOnes == 0 && tOnes == 0)){
            string ans = "";
            for(int i = 0;i < n;i++){
                ans += "0";
            }
            return ans;
        }
      
        string ans = "";
        for(int i = 0;i < n;i++){
            if(s[i] == '0'){
                if(tOnes > 0){
                    ans += "1";
                    tOnes--;
                }
                else if(tZeroes > 0){
                    ans += "0";
                    tZeroes--;
                }
            }
            else
            {
                if(tZeroes > 0){
                    ans += "0";
                    tZeroes--;
                }
                else if(tOnes > 0){
                    ans += "1";
                    tOnes--;
                }
            }
        }
        cout<<"Rearrangement : "<<ans<<"\n";
        string finalAns = "";
        for(int i = 0;i < n;i++){
            finalAns += to_string((ans[i] - '0') ^ (s[i]  - '0'));
        }
        return finalAns;
    }
};
