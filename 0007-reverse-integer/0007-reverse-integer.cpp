class Solution {
public:
    int reverse(int x) {

        string s = to_string(x);
        string ne = "";
        int n = s.length();

        if(x > 0) {
            for(int i=n-1; i>=0; i--) {
                ne = ne + s[i];
            }

            long long z = stoll(ne);

            if(z > INT_MAX)
                return 0;

            return z;
        }

        if(x < 0) {
            for(int i=n-1; i>=1; i--) {
                ne = ne + s[i];
            }

            long long z = stoll(ne);

            if(z > 2147483648LL)
                return 0;

            return -z;
        }

        return 0;
    }
};