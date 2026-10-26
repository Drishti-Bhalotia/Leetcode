class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> k;
        int count=0;
        if(n%2==0){
            while(count!=n/2){
                k.push_back(n-count);
                count++;
            }
            count=0;
             while(count!=n/2){
                k.push_back(count-n);
                count++;
            }
        }
         else if(n%2!=0){
            n=n-1;
            int count=0;
            while(count!=n/2){
                k.push_back(n-count);
                count++;
            }
            count=0;
             while(count!=n/2){
                k.push_back(count-n);
                count++;
            }
            k.push_back(0);
        }
        sort(k.begin(),k.end());
        return k;
    }
};