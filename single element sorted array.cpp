class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(); int st = 0; int end = n-1;
        while(st<=end) {
            int mid = st + (end-st)/2;
            if(n==1) return nums[0];
            if(mid == 0 && nums[mid] != nums[mid+1]) return nums[mid];
            if(mid == n-1 && nums[mid] != nums[mid-1]) return nums[mid];

            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
            return nums[mid];

            if(mid%2 == 0 ) { //even numbers on either side
            if(nums[mid] == nums[mid-1]) //sn on lhs
            end = mid-1;
            else
            st = mid+1;
            }
            else {
                if(nums[mid] == nums[mid-1])
                st = mid+1;
                else
                end = mid-1;
            }

        }
        return -1;
    }
};