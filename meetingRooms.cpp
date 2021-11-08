#include<bits/stdc++.h>
using namespace std;

bool canAttendMeetings(vector<vector<int>>& intervals) {
    bool result = true;
     
    sort(intervals.begin(), intervals.end());
     
    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i-1][1] > intervals[i][0])
            return false;
    }
    return result;
}

int main(){
    vector<vector<int>> v = {{0,30},{5,10},{15,20}};
    cout<<canAttendMeetings(v)<<endl;
    
    v = {{7,10},{2,4}};
    cout<<canAttendMeetings(v)<<endl;

    return 0;
}
