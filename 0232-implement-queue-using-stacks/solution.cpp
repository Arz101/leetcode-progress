class MyQueue {
private:
    stack<int> front;
    stack<int> back;

    void moveToFront(){
        while(!back.empty()){
            front.push(back.top());
            back.pop();
        }
    }

    void moveToBack(){    
        while(!front.empty()){
            back.push(front.top());
            front.pop();
        }
    }

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        moveToBack();
        back.push(x);
    }
    
    int pop() {
        moveToFront();
        int top;
        top = front.top();
        front.pop();
        return top;
    }
    
    int peek() {
        moveToFront();
        return front.top();
    }
    
    bool empty() {
        moveToBack();
        return back.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
