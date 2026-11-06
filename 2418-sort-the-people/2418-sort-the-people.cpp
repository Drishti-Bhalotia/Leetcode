class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
               vector<pair<int, string>> height;
               for(int i=0;i<names.size();i++){
                height.push_back({heights[i],names[i]});
               }
               sort(height.rbegin(),height.rend());
               vector<string> k;
               for(int i=0;i<names.size();i++){
                k.push_back(height[i].second);
               }
               return k;
    }
};