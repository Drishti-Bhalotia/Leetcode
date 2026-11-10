class Solution {
public:
    int reverseBits(int n) {
        string k;
          for(int i=0;i<32;i++){
            k.push_back(n%2+'0');
            n=n/2;
        }

        long long r=0;
        long long powe=0;
        for(int i=k.length()-1;i>=0;i--){
            int v=(k[i]-'0');
            r+=(v)*pow(2,powe);
            powe++;
        }
        return r;
    }
};