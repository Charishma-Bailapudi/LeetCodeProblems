class MyQueue {
    int *arr;
    int front,rear,size;
public:
    MyQueue()
    {
        size=1000;
        arr=new int[size];
        front=0;
        rear=0;
    }
    
    void push(int x)
    {
        if(rear==size)
            cout<<"Queue is full"<<endl;
        else
        {
            arr[rear]=x;
            rear++;
        }
    }
    
    int pop() 
    {
        if(front==rear)
            return -1;
        else
        {
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
            return ans;
        }
        
    }
    
    int peek()
    {
        if(front==rear)
            return -1;
        else
        
            return arr[front];
    }
    
    bool empty()
    {
        if(front==rear)
            return true;
        return false;
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