class Solution {
private:
    bool isVowel(char &c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
    int countVowels(string &s)
    {
        int cnt = 0;
        for(auto i : s)
            if(isVowel(i))
                cnt++;
        return cnt;
    }
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;

        string firstWord = "";
        int i = 0;

        while(i < n && s[i] != ' '){
            firstWord += s[i];
            i++;
        }
        cout<<"Printing i : "<<i<<endl;
        i++;
        int vowelsInFirstWord = countVowels(firstWord);
        firstWord += " ";
        ans += firstWord;
        for(;i < n;i++){
            string currWord = "";

            while(i < n && s[i] != ' '){
                currWord += s[i++];
            }

            int vc = countVowels(currWord);
            if(vc == vowelsInFirstWord){
                reverse(begin(currWord), end(currWord));
            }
            currWord += " ";
            ans += currWord;
        }
        ans.pop_back();
        return ans;
    }
};
