class Solution {
public:
    int binaryGap(int n) {
        string k;
        int maxi=0;
        while(n>0){
            k.push_back(n%2+'0');
            n=n/2;
        }
        reverse(k.begin(),k.end());
        int j=0;
        for(int i=1;i<k.length();i++){
            if(k[i]=='1' &&  k[j]!='1'){             
                j=i;
            }
            else if(k[i]=='1'){
                maxi=max(i-j,maxi);
                j=i;
            }

        }
return maxi;
        
    }
};