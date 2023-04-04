class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> st;
        for(string c:tokens)
        {
                if(c=="+")
                {
                    
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                   
                    int z=y+x;
                    st.push(z);
                }
                
                else if( c=="-")
                {
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                   
                    int z=y-x;
                    st.push(z);
                   
                }
                else if(c=="*")
                {
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                   
                    int z=y*x;
                    st.push(z);
                }
                else if(c=="/")
                {
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                   
                    int z=y/x;
                    st.push(z);
                }
               else
               {
                   st.push(stoi(c));
               }
            
        }
        
       //  int sum=0;
       //  while (!st.empty())
       //  {
       //  sum += st.top();
       //  st.pop();
       // }
        return st.top();
    }
};