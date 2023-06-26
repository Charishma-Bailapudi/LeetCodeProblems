class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        //priority queue to find minimum cost efficiently
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int i=0, j=costs.size()-1;

        //store initial candidates cost from left
        for(int c=0; c<candidates; c++) {
            pq.push({costs[i],i});
            i++;
        }
        //store initial candidates cost from right
        for(int c=0; c<candidates && j>=i; c++) {
            pq.push({costs[j],j});
            j--;
        }
        long long total_cost = 0;
        //sum of minimum costs
        while(k > 0) {
            total_cost += pq.top().first;
            int ind = pq.top().second;
            pq.pop();
            k -= 1;
            //if min cost is from right, i.e ind > j and it is already not in priority queue, i.e j>=i
            if(ind>j && j>=i) {
                pq.push({costs[j],j});
                j--;
            } 
            //if min cost is from left, i.e ind < i and it is already not in priority queue, i.e i<=j
            else if(ind<i && i<=j){
                pq.push({costs[i],i});
                i++;
            }
        }
        return total_cost;
    }
};