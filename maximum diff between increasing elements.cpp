#include <climits>
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxpro = -1;
        int minnum = INT_MAX;

           for (int i = 1; i< n; i++) {
        //int j = i+1;
        minnum = min(minnum,nums[i-1]);
        if (nums[i] > minnum){
             maxpro = max(maxpro, nums[i] - minnum);
        }
       }
       return maxpro;
    }
};