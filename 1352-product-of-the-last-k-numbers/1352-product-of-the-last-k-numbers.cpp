class ProductOfNumbers {
public:
vector<int>r;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        r.push_back(num);
    }
    
    int getProduct(int k) {
        int count=0;
        int x=1;
        int i=r.size()-1;
        while(count<k){
            x=x*r[i];
            i--;
            count++;
        }
return x;
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */