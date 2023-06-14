class MinStack {   
public:
    
    stack<int>s,m;
    int mn=INT_MAX;
    
    MinStack()
    {
        
    }
    
    void push(int data)
    {
        mn=min(mn,data);
        m.push(mn);
        s.push(data);
    }
    
    void pop()
    {
        if(s.empty())
            cout<<"stack is empty";
        else
         {
            s.pop();
            m.pop();
            if(m.size()!=0)
                mn=m.top();
            else
                mn=INT_MAX;
         }
    }
    
    int top()
    {
         if (s.empty()) 
         {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return s.top();    
    }
    
    int getMin() 
    {
         if (m.empty())
         {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */