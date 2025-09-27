class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       int freq[100001] = {0};
       int ans = 0;
       for ( int x : nums) {
        freq[x]++;
       }
       for ( int i = 0; i < 100001; i++) {
        if (freq[i] == 2) {
            ans ^= i;
        }
       }
       return ans;
    }
};