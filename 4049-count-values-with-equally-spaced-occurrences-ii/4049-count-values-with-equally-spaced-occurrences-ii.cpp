class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
int ans=0;
map<int,vector<int>> mp;
for(int i=0;i<nums.size();i++)
mp[nums[i]].push_back(i);
for(auto x:mp){
vector<int> position=x.second;
if(position.size()>=3){
int difference=position[1]-position[0];
bool ok=true;
for(int i=2;i<position.size();i++){
if(position[i]-position[i-1]!=difference){
ok=false;
break;
}
}
if(ok)
ans++;
}
}
return ans;
    }
};