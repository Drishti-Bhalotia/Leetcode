class Solution {
public:
    long long removeZeros(long long n) {
        string k=to_string(n);
        for(int i=0;i<k.length();i++){
            if(k[i]=='0'){
                k.erase(k.begin()+i);
                i--;
            }
        }
       n=stoll(k);
       return n; 
    }
};