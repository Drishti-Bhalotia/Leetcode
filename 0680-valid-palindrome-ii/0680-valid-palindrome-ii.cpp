class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        int count=0;
        while(i<=j && s[i]==s[j]){
                i++;
                j--;
            }
            if(i>j){
                return true;
            }
              string k = s.substr(i+1, j-i);
             string t = s.substr(i, j-i);
            int a=0;
            int b=k.length()-1;
            int c=0;
            int d=t.length()-1;
             while(a<=b && k[a]==k[b]){
                a++;
                b--;
            }
            if(a>b){
                return true;
            }
              while(c<=d && t[c]==t[d]){
                c++;
                d--;
            }
            if(c>d){
                return true;
            }

        return false;
    }
};