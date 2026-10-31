class Solution {
public:
    int firstUniqChar(string s) {
        int hashtable[26]={0};
       for(int i=0;i<s.length();i++){
        int k=(s[i])-'a';
           hashtable[k]++;
       }
       for(int i=0;i<s.length();i++){
        int k=(s[i])-'a';
        if(hashtable[k]==1)
        return i;
       }

return -1;

       
    }
};