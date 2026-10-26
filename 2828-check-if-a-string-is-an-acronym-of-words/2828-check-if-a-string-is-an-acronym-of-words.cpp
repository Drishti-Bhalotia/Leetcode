class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string k;
        for(int i=0;i<words.size();i++){
            k.push_back(words[i][0]);
        }
        if(k==s){
            return true;
        }
        return false;
        
    }
};