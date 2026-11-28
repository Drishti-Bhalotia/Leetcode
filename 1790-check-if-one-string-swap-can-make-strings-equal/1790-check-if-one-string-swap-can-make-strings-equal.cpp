class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i=0;
        int j=0;
        int k=0;
        int count=0;
        while(i<s1.length() &&  i<s2.length()){
            if(s1[i]!=s2[i]){
                  count++;
                    if(count==1){
                k=i;
            }
              if(count==2){
                j=i;
            }
            if(count>2){
                return false;
            }
            }
          
            i++;
        }
        if(count==0){
            return true;
        }    
        swap(s1[k],s1[j]);
       return s1==s2;
    }
};