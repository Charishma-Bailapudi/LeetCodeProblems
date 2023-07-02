class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score)
    {
        priority_queue<pair<int,int>>p;
        for(int i=0;i<score.size();i++)
        {
            p.push({score[i],i});
        }
        int index=1;
        vector<string>v(score.size());
        while(!p.empty())
        {
            if(index==1)
            {
                v[p.top().second]="Gold Medal";
            }
            else if(index==2)
            {
                v[p.top().second]="Silver Medal";
            }
            else if(index==3)
            {
                v[p.top().second]="Bronze Medal";
            }
            
            else
            {
                v[p.top().second]=to_string(index);
            }
            p.pop();
            index++;
        }
        return v;
    }
};