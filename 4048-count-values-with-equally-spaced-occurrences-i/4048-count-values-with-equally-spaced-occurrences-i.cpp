class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans=0;
for(int x=1;x<=100;x++){
int count=0;
vector<int> position;
for(int i=0;i<nums.size();i++){
if(nums[i]==x){
count++;
position.push_back(i);
}
}
if(count==3 && position[1]-position[0]==position[2]-position[1])
ans++;
}
return ans;
    }
};