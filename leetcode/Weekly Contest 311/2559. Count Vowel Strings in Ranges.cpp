class Solution {
private:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    bool isVowelString(string word)
    {
        int n = word.size();
        if(isVowel(word[0]) && isVowel(word[n-1]))
            return true;
        return false;
    }

public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int n = words.size();
        vector<int> pref(n,0);

        pref[0] = isVowelString(words[0]);
        for(int i = 1;i <n;i++)
        {
            pref[i] = pref[i - 1] + isVowelString(words[i]);
        }

        cout<<"Printing prefix : ";
        for(auto i : pref)
            cout<<i<<" ";
        cout<<"\n";

        for(auto i : queries){
            auto a = i[0];
            auto b = i[1];
            cout<<"a "<<a<<"\n b "<<b<<"\n";
            ans.push_back(pref[b] - ((a > 0) ? pref[a - 1] : 0));
        }
        return ans;
    }
};
