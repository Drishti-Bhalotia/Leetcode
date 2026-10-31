class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
 int a = pow(p1[0]-p2[0],2) + pow(p1[1]-p2[1],2);
int b = pow(p1[0]-p3[0],2) + pow(p1[1]-p3[1],2);
int c = pow(p1[0]-p4[0],2) + pow(p1[1]-p4[1],2);
int d = pow(p2[0]-p3[0],2) + pow(p2[1]-p3[1],2);
int e = pow(p2[0]-p4[0],2) + pow(p2[1]-p4[1],2);
int f = pow(p3[0]-p4[0],2) + pow(p3[1]-p4[1],2);
vector<int> k={a,b,c,d,e,f};
sort(k.begin(),k.end());

        if(k[0]==k[1] && k[1]==k[2] && k[2]==k[3] && k[3]==k[0] && k[0]==k[2] && k[1]==k[3] && k[4]==k[5] && k[4]>k[1] && k[4]>k[2] && k[4]>k[0] && k[4]>k[3])
        return true;
        return false;
        
        
    }
};