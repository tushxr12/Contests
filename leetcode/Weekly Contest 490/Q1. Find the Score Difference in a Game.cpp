class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n = nums.size();
        int firstPlayerScore = 0, secondPlayerScore = 0;
        bool firstPlayerActive = true;

        for(int i = 0;i < n;i++){
            if((nums[i] % 2 != 0)){
                cout<<"i val : "<<i<<"\n";
                firstPlayerActive = !firstPlayerActive;
            }


            if((i+1)% 6 == 0){
                firstPlayerActive = !firstPlayerActive;
            }

            if(firstPlayerActive){
                cout<<"First player active at i : "<<i<<"\n";
                firstPlayerScore += nums[i];
            }
            else
            {
                cout<<"Second player active at i : "<<i<<"\n";
                secondPlayerScore += nums[i];
            }
        }

        cout<<"\nFirst Player score : "<<firstPlayerScore<<" Second player score : "<<secondPlayerScore<<"\n";
        return (firstPlayerScore - secondPlayerScore);
    }
};
