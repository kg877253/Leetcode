class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        // Reverse only half of the digits
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // For even digits: x == rev
        // For odd digits: x == rev / 10 (middle digit is ignored)
        return (x == rev || x == rev / 10);
    }
};