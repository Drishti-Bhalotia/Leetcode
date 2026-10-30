class Solution {
public:
    string stringHash(string s, int k) {
        string r;
       int i=0;
       while(i<s.length()){
        int count=0;
        int sum=0;
        while(count<k){
            sum+=s[i]-'a';
            i++;
            count++;
        }
        r.push_back('a'+sum%26);
       }
        return r;
    }
};