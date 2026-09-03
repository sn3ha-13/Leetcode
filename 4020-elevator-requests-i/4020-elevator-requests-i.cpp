class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
int present=0;
int totaltime = 0;
for (int i=0;i<requests.size();i++) {
totaltime = abs(present-requests[i])+totaltime;
present=requests[i];
}
return totaltime;
    }
};