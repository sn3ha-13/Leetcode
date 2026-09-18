class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int ans = INT_MAX;

        for(int r = 0; r < n; r++) {
            int cost = r;
            int l = r;
            int h = (r + n - 1) % n;

            for(int i = 0; i < n / 2; i++) {
                int d = abs(s[l] - s[h]);
                cost += min(d, 26 - d);

                if(cost >= ans)
                    break;

                l++;
                h--;

                if(l == n) l = 0;
                if(h < 0) h = n - 1;
            }

            ans = min(ans, cost);
        }

        return ans;
    }
};