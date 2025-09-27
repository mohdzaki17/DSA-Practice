class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sn = 0;
        for (int val : nums) {
            sn = sn^val;
        }
        return sn;
        
    }
};