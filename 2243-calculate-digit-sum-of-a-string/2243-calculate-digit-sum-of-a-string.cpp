class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
            int i=0;
            string r;
        while(i<s.length()){
            int sum=0;
            int j=0;
            while(j<k && i<s.length()){
                sum+=(s[i]-'0');
                i++;
                j++;
            }
            r+=to_string(sum);

        }
        s=r;
        }
       return s; 
    }
};