class Solution {
public:
    int numberOfChild(int n, int k) {
        int period = 2 * (n - 1);
        int pos = k % period;
    
        if (pos < n) {
          return pos;
        } else {
        return 2 * (n - 1) - pos;
        }   
    }
};