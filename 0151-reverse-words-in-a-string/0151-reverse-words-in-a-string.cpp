class Solution {
public:
    string reverseWords(string s) {
        string k;
        string ans="";
        for(int i=s.length()-1;i>=0;i--){
            ans="";
            while(i>=0 && s[i]!=' '){
                ans.push_back(s[i]);
                i--;
            }
            for(int j=ans.length()-1;j>=0;j--){
                k.push_back(ans[j]);
            }
            if(i>=0 && s[i]==' ')
             k.push_back(s[i]);
        }
               while(!k.empty() && k.back()==' ')
            k.pop_back();
            while(!k.empty() && k.front()==' ')
         k.erase(k.begin());
         for(int i=0;i<k.length()-1;i++){
            if(k[i]==' ' &&k[i+1]==' '){
            k.erase(k.begin()+i);
            i--;
            }

         }

        return k;
    }
};