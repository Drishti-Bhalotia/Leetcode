class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++){
            for(int j=0;j<word.length();j++){
                int k=0;
                int s=j;
                if(patterns[i][k]==word[j]){
                    while(s<word.length()  && k<patterns[i].length()  && patterns[i][k]==word[s]){
                        s++;
                        k++;
                    }  
                }
                if(k==patterns[i].length()){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};