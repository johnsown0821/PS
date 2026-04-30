class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int k;
        vector<int> ans(2*n);
        for(int i=0; i<n; i++) {
            k=nums[i];
            ans[i]=k;
            ans[i+n]=k;
        }
        return ans;
    }
};