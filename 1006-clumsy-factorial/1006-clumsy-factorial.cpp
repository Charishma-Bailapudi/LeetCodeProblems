class Solution {
public:
    int i=1;
    int clumsy(int n) {
        stack<int>st;
        int flag=0;
        st.push(n);
        for(int i=n-1;i>0;i--)
        {
            if(flag>0)
            {
                if(flag==1)
                {
                    int x=st.top();
                    st.pop();
                    int y=x/i;
                    st.push(y);
                    flag=2;
                }
                else if(flag==2)
                {
                    int x=st.top();
                    st.pop();
                    int y=x+(i);
                    st.push(y);
                    flag=3;
                }
                else if(flag==3)
                {

                    int z=-(i);
                    st.push(z);
                
                    flag=0;
                }
            }
            else
            {
               int x=st.top();
                st.pop();
                int y=x*(i);
                st.push(y);
                flag=1; 
            }
           
              
        }
        int sum=0;
        while(!st.empty())
        {
            
            int m=st.top();
            // cout<<"top"<<m<<endl;
            sum+=m;
            st.pop();
        }
        return sum;
        
    }
};