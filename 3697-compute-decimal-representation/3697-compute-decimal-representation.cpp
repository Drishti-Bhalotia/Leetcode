class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> k;
        int count=0;
        while(n>0){
            if((n%10)*pow(10,count)!=0)
            k.push_back((n%10)*pow(10,count));
            count++;
            n=n/10;

        }
        reverse(k.begin(),k.end());   
        return k;
    }
};