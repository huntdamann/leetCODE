#include <algorithm>
class Solution {
public:
    bool isPalindrome(int x) {
        
        string e = to_string(x);
        string cmp;
        cmp = e;
        reverse(e.begin(), e.end());
        if (e == cmp) {
            return true;
        }
        else {
            return false;
        }
    }
};
