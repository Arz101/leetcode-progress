public class MyCircularQueue {
    
    private int[] data;
    private int head;
    private int tail;
    private int size;
    
    
    public MyCircularQueue(int k) {        
        data = new int[k];
        head = -1;
        tail = -1;
        size = k;
    }
    
    public bool EnQueue(int value) {
        bool pass = IsFull();
        if (pass) {
            return false;
        }
        bool r = IsEmpty();
        if (r) {
            head = 0;
        }
        tail = (tail + 1) % size;
        data[tail] = value;
        return true;
    }
    
    public bool DeQueue() {
        bool r = IsEmpty();
        if (r == true) {
            return false;
        }
        if (head == tail) {
            head = -1;
            tail = -1;
            return true;
        }
        head = (head + 1) % size;
        return true;
    }
    
    public int Front() {
        bool r = IsEmpty();
        if(r == true) return -1;
        
        return data[head];
    }
    
    public int Rear() {
        bool r = IsEmpty();
        if (r == true) {
            return -1;
        }
        return data[tail];
    }
    
    public bool IsEmpty() {
        return head == -1;
    }
    
    public bool IsFull() {
        return ((tail + 1) % size) == head;
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * bool param_1 = obj.EnQueue(value);
 * bool param_2 = obj.DeQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * bool param_5 = obj.IsEmpty();
 * bool param_6 = obj.IsFull();
 */
