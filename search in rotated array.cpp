class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() -1;

        while (st <= end) {
        int mid = st + (end - st) / 2;
        if ( nums[mid] == target) {
            return mid;
        }
        if (nums[st] <= nums[mid]) {     //left sorted
            if (nums[st] <= target && target <= nums[mid]){
                end = mid - 1;
            } 
            else {   //right sorted
            st = mid + 1;
            }
        }
        

        if (nums[mid] <= nums[end]) { //required or else it will do TLE --- if right sorted
            if (nums[mid] <= target && target <= nums[end]) {
                st = mid + 1;
            }
            else {  // if left
                end = mid - 1;
            }
        }

        }
        return -1;
    }
};