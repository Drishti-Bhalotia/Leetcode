class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int count=0;
         int i = max(1, n-k);
     while(i<=k+n){
        if(abs(n-i)<=k && (n&i)==0){
            count+=i;       
        }
        i++;
     }
return count;
        
    }
};