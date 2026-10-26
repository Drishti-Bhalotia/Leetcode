class Solution {
public:
    int maxFreqSum(string s) {
        sort(s.begin(),s.end());
        string v="";
        string c="";
        if(s.length()==1){
            return 1;
        }
        for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            v+=s[i];
        }
        else{
            c+=s[i];
        }
        }
        int max_v=0;
        int sum1=0;
        for(int i=0;i<v.length();i++){
            int sum1=1;
            while(i<v.length()-1 && v[i]==v[i+1]){
                sum1++;
                i++;
            }
            max_v=max(max_v,sum1);

        }
        int sum2=1;
        int max_c=0;
         for(int i=0;i<c.length();i++){
            int sum2=1;
            while(i<c.length()-1 && c[i]==c[i+1]){
                sum2++;
                i++;
            }
            max_c=max(max_c,sum2);

        }
        return max_c+max_v;
    }
};