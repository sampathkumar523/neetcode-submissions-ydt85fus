class MinStack {
public:
    MinStack() {
       
    }
    
    void push(int val) {
        stac.push(val);
        uset.insert(val);
    }
    
    void pop() {
        uset.erase(uset.find(stac.top()));
        stac.pop();        
    }
    
    int top() {
        return stac.top();
    }
    
    int getMin() {
        auto it = uset.begin();
        return *it;
    }

private:
    stack<int> stac; 
    multiset<int> uset;
};
