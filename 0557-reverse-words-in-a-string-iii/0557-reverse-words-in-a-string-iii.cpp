class Solution {
public:
    string reverseWords(string s) {
        string t="";
        for(int i=0;i<s.length();i++){
            int j=i;
            while(i<s.length() && s[i]!=' '){
                i++;
            }
            int k=i-1;
            while(k>=j){
                t+=s[k]; 
                k--;    
            }
            if(i!=s.length())
            t+=" ";
        }
       return t; 
    }
};