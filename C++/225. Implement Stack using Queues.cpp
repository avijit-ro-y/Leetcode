class MyStack {
public:
    queue<int>q1;
    
    MyStack() {

    }
    
    void push(int x) {
       q1.push(x); 
    }
    
    int pop() {
        queue<int>q2;
        int temp;
        while(!q1.empty()){
            temp=q1.front();
            q1.pop();
            if(q1.empty()==true){
                break;
            }
            q2.push(temp);
        }
        q1=q2;
        return temp;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */