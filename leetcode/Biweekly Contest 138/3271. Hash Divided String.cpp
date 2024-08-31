class Solution
{
public:
    string convert(string s, map<char, int> &mpp)
    {
        string ans = "";
        int n = 0;
        for (auto i : s)
            n += mpp[i];
        n %= 26;
        map<int, char> mpp2;
        char ch = 'a';
        for (int i = 0; i <= 25; i++)
        {
            mpp2.insert({i, ch});
            ch++;
        }
        // cout<<"\nPrinting Map\n;";
        // for(auto i : mpp2)
        //     cout<<i.first <<" "<<i.second<<" ";
        // cout<<"\nMap printed\n";
        ans += mpp2[n];
        return ans;
    }
    string stringHash(string s, int k)
    {
        int n = s.size();
        int substrs = n / k;
        map<char, int> mpp;
        char ch = 'a';
        for (int i = 0; i <= 25; i++)
        {
            mpp.insert({ch, i});
            ch++;
        }
        // cout<<"\nPrinting Map\n;";
        // for(auto i : mpp)
        //     cout<<i.first <<" "<<i.second<<" ";
        // cout<<"\nMap printed\n";
        int index = 0;
        int length = s.size();
        string ans = "";
        string str = "";
        while (length--)
        {
            str += s[index]; // ab
            index++;
            if (str.size() % k == 0)
            {
                cout << str << "\n";
                ans += convert(str, mpp);
                str = "";
            }
        }

        return ans;
    }
};