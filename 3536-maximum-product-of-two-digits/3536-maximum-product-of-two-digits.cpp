class Solution {
public:
    int maxProduct(int n) {
        vector<int> k;
        while(n>0){
            k.push_back(n%10);
            n=n/10;
        }
        sort(k.begin(),k.end());
        return(k[k.size()-1]*k[k.size()-2]);
        
    }
};