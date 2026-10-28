class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;
        int carry=0;
        while(numBottles>=numExchange){
            carry=0;
            carry=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            count+=numBottles;
            numBottles=numBottles+carry;
        }
        return count;
    }
};