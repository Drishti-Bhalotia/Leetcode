class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()>1){
            int k=stones[stones.size()-1]-stones[stones.size()-2];
                stones.erase(stones.begin()+stones.size()-1);
             stones.erase(stones.begin()+stones.size()-1);
            if(k!=0){
                stones.push_back(k);
                sort(stones.begin(),stones.end());
            }
        }
        if(stones.empty())
         return 0;

        return stones[0];
    }
};