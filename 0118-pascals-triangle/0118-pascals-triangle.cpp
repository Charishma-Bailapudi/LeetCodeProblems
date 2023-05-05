class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<int>v={1,1};
        vector<vector<int>>ans;
        ans.push_back({});
        ans[0]={1};
        if(numRows==1)
            return ans;
        ans.push_back(v);
        numRows=numRows-2;
        while(numRows)
        {
            vector<int>row;
            row.push_back(1);
            for(int i=1;i<v.size();i++)
            {
               int element=v[i-1]+v[i];
               row.push_back(element);
            }
            row.push_back(1);
            ans.push_back(row);
            numRows--;
            v=row;
        }
        return ans;  
    }
};