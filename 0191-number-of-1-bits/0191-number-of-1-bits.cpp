class Solution {
public:
    int hammingWeight(int n) {
       string k;
        int maxi=0;
        while(n>0){
            k.push_back(n%2+'0');
            n=n/2;
        }
        for(int i=0;i<k.length();i++){
            if(k[i]=='1')
            maxi++;
        }
    return maxi;
    }
};