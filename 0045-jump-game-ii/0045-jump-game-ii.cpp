class Solution {
public:
    int jump(vector<int>& nums) {
        int countjumps=0, end=0;
        int fastestroute=0;
        for(int i=0;i<nums.size()-1;i++){
            fastestroute=max(fastestroute,i+nums[i]);
            if(i==end){
                countjumps++;
                end=fastestroute;
            }
        }
        return countjumps;
    }
};