class Solution {
public:
    string reverseStr(string s, int k) {
        int l=s.size();
        for(int i=0;i<=l;i+=2*k){
            int start = i; 
            int end = min(i + k - 1, (int)s.length() - 1); 
            reverse(s.begin() + start, s.begin() + end + 1); 
        } 
        return s; 
    }
};