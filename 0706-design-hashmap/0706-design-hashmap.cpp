class MyHashMap {
public:
vector<pair<int,int>> h;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
           for(int i = 0; i < h.size(); i++) {
            if(h[i].first == key) {
                h[i].second = value;
                return;
            }
        }
        h.push_back({key,value});
        
    }
    
    int get(int key) {
       for(int i=0;i<h.size();i++){
        if(h[i].first==key)
        return h[i].second;
       }
       return -1; 
    }
    
    void remove(int key) {
      for(int i=0;i<h.size();i++){
        if(h[i].first==key){
        h.erase(h.begin()+i);
        return;
        }
       }

        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */