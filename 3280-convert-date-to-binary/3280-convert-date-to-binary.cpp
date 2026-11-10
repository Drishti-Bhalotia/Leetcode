class Solution {
public:
    string convertDateToBinary(string date) {
        string r="";
        for(int i=0;i<date.length();i++){
            string k="";
            string s;
            while(i<date.length() && date[i]!='-'){
                k+=date[i];
                i++;
            }
            int m=stoi(k);
            while(m>0){
                s+=to_string(m%2);
                m=m/2;
            }
            reverse(s.begin(),s.end());
            r+=s;
            if(date[i]=='-')
            r+=date[i];
        }
       return r; 
    }
};