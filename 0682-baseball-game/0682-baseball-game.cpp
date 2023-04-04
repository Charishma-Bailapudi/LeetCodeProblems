class Solution {
public:
    int calPoints(vector<string>& operations) {
          stack<int> st;
        for(string c:operations)
        {
                if(c=="+")
                {
                    
                    int x=st.top();
                    st.pop();
                    int y=st.top();
                    st.pop();
                   
                    int z=x+y;
                    st.push(y);
                    st.push(x);
                    st.push(z);
                }
                
                else if( c=="D")
                {
                    
                    int m=st.top()*2;
                    st.push(m);
                }
                else if(c=="C")
                {
                    st.pop();
                }
               else
               {
                   st.push(stoi(c));
               }
            
        }
        
        int sum=0;
        while (!st.empty())
        {
        sum += st.top();
        st.pop();
       }
        return sum;
    }
};