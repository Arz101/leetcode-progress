public class MyStack {
    private Node top;
    private int size;

    public MyStack() {
        size = 0;
    }
    
    public void Push(int x) {
        if(top == null){
            top = new Node(x);
        }   
        else{
            Node newNode = new Node(x);
            newNode.next = top;
            top = newNode;
        } 
        size++;
    }
    
    public int Pop() {
        if(top == null) return 0;
        Node p = top;
        top = top.next;
        p.next = null;
        size--;
        return p.data;
    }
    
    public int Top() {
        if(top != null)
            return top.data;
        return 0;   
    }
    
    public bool Empty() {
        return size == 0 ? true : false;
    }
}

public class Node{
    public Node next;
    public int data;

    public Node(int data){
        this.data = data;
    }
}
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.Push(x);
 * int param_2 = obj.Pop();
 * int param_3 = obj.Top();
 * bool param_4 = obj.Empty();
 */
