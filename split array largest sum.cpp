class Solution {
public:
    bool isvalid(vector<int>& arr, int m, int mid) {
        int student = 1; int mas = mid; //mas => maxallowedsum
        int pages = 0;
        int st = 0; int end = arr.size()-1; //int mid = st+(end-st)/2;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > mid)
                return false;

            if (arr[i] + pages <= mid){
                pages += arr[i];
            }
            else{
                student++;
            pages = arr[i];
            }
        }
            if (student > m) return false;
        
        return true;
    }

    int splitArray(vector<int>& arr, int m) {
        int n = arr.size();
        if (m > n)
            return -1;
        int sum = 0;int maxi = 0;
        int ans = -1; // edge case
        int st = 0;

       // int st = max(arr.begin() , arr.end());

        for (int x : arr) {
            sum += x;
           int st = max(st,x);
        }
        int end = sum; 
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isvalid(arr,m,mid)) {
             ans = mid;
             end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};