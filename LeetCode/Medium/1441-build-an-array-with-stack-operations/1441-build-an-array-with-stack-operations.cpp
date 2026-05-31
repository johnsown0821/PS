class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int count=0;
        int i=1;
        while (count < target.size()) {
            if (i != target[count]) {
                res.push_back("Push");
                res.push_back("Pop");
                i++;
            }
            else {
                res.push_back("Push");
                i++;
                count++;
            }
        }
        return res;
    }
};