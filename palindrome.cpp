class Solution {
public:
    bool isPalindrome(int x) { 
       long long int revx = 0; 
        int tmp = x;

        while (x > 0) {
       int rem = x % 10;
        revx *= 10;
        revx+= rem;
         x /= 10;
        }

        if (revx == tmp ) return true;
        else return false;
    }
};