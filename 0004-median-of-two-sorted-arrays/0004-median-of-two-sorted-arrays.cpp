class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int x : nums2)
            nums1.push_back(x);
        sort(nums1.begin(), nums1.end());
        int s=nums1.size();
        if (s%2==1){
            return nums1[s/2];
        }
        else{
            return (nums1[s/2-1]+nums1[(s/2)])/2.0;
        }
    }
};