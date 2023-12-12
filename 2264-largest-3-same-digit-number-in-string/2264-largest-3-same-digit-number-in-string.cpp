class Solution {
public:
    string largestGoodInteger(string num) 
    {
        string res="";
        vector<string>v;
        
        for(int i=0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1] && num[i]==num[i+2])
            {
                
               
                res+=num[i];
                res+=num[i];
                res+=num[i];  
                v.push_back(res);
                res="";
                
            } 
        }
      
        if (v.empty()) 
        {
            return "";
        }

        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};