class Solution {
public:
    bool checkString(string s) {

        if(s.length()==1)
        return true;
        int j=1;
        for(int i=0;j<s.length();i++){
            if(s[i]=='b' && s[j]=='a'){
                return false;
            }
            j++;
        }
        return true;
    }
};