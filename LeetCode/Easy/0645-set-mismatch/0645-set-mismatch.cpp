class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> visit(nums.size());
        int sum=0;
        int a;
        for(int i=0; i<nums.size(); i++) {
            if(visit[nums[i]-1]==1)
                a=nums[i];
            visit[nums[i]-1]=1;
            sum += nums[i];
        }

        vector<int> res(2);
        res[0]=a;
        res[1]=(nums.size()*(nums.size()+1))/2 - sum + a;
        return res;
    }
};