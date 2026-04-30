class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxim=0;
        int temp=0;
        for(int i : nums) {
            if(i==1)
                temp++;
            else {
                if(temp>maxim)
                    maxim=temp;
                temp=0;
            }
        }
        if(temp>maxim)
            maxim=temp;

        return maxim;
    }
};