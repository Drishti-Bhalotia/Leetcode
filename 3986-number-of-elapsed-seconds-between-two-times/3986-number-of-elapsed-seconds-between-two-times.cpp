class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
       
        int i=stoi(startTime.substr(0,2))*3600;
         int j=stoi(startTime.substr(3,2))*60;
         int k=stoi(startTime.substr(6,2));
          int t=stoi(endTime.substr(0,2))*3600;
         int u=stoi(endTime.substr(3,2))*60;
         int v=stoi(endTime.substr(6,2));
          int sum1=i+j+k;
        int sum2=t+u+v;
        return sum2-sum1;
        
        
    }
};