class Solution
{
public:
    void convert(string &num1, string &num2, string &num3)
    {
        int n1 = num1.size(), n2 = num2.size(), n3 = num3.size();
        int diff1 = abs(n1 - 4);
        int diff2 = abs(n2 - 4);
        int diff3 = abs(n3 - 4);
        while (diff1 != 0)
        {
            num1 = '0' + num1;
            diff1--;
        }

        while (diff2 != 0)
        {
            num2 = '0' + num2;
            diff2--;
        }

        while (diff3 != 0)
        {
            num3 = '0' + num3;
            diff3--;
        }
    }

    int generateKey(int num1, int num2, int num3)
    {
        string s1 = to_string(num1), s2 = to_string(num2), s3 = to_string(num3);
        convert(s1, s2, s3);
        string ans = "";
        for (int i = 0; i < 4; i++)
        {
            ans += (min({s1[i], s2[i], s3[i]}));
        }
        // cout<<"Print ans "<<ans<<"\n";
        int val = stoi(ans);
        return val;
    }
};