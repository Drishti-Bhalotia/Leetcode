class Solution {
public:
    string defangIPaddr(string address) {
        string k;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                k+="[.]";
            }
            else{
                k.push_back(address[i]);
            }
        }
        return k;
    }
};