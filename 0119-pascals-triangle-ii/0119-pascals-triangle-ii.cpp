class Solution {
public:
    vector<int> getRow(int numRows) 
    {
        vector<int>v={1,1};
        vector<int>ans={1};
        if(numRows==0)
            return ans;
        numRows=numRows-1;
        // vector<int>row;
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
            numRows--;
            v=row;
        }
        return v;
    }
};