class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                string k=words[j];
                reverse(k.begin(),k.end());
                if(words[i]==k){
                    count++;
                }
            }
        }
        return count;
    }
};