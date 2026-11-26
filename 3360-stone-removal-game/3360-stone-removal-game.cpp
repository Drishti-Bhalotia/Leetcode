class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){
            return false;
        }
        
            n=n-10;
        
        int x=9;
        int count=1;
        while(n>=x){
          n=n-x;
          x--;
          count++;
        }
        if(count%2==0){
             return false;
        }
        return true;
    }
};