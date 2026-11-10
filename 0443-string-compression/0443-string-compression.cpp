class Solution {
public:
    int compress(vector<char>& chars) {
        string k;
        for(int i=0;i<chars.size();i++){
            k.push_back(chars[i]);

        }
        vector<char> ans;
        for(int i=0;i<k.length();i++){
            int count=1;
            ans.push_back(k[i]);
            while(i+1<k.length() && k[i]==k[i+1]){
                count++;
                i++;
            }
          if(count!=1){
                string s=to_string(count);
                for(int j=0;j<s.length();j++){
                    ans.push_back(s[j]);
                }
            }
            
        }
        for(int i=0;i<ans.size();i++){
            chars[i]=ans[i];
        }

        return ans.size();
    }
};