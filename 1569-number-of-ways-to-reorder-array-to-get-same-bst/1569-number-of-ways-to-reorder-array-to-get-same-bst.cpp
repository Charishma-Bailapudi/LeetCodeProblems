class Solution {
public:
int m=1e9+7;
 vector<vector<int>>t;
 long long fun(vector<int>&a){
   if(a.size()<3) return 1;
   vector<int>left,right;
   int root=a[0],n=a.size()-1;
   for(int i=1;i<a.size();i++) if(a[i]<root) left.push_back(a[i]);
   else right.push_back(a[i]);
   return (t[n][left.size()]*fun(left)%m*fun(right)%m)%m;
 }
    int numOfWays(vector<int>& a) {
        int n=a.size();
        t.resize(n,vector<int>(n,1));
        for(int i=2;i<n;i++){
          for(int j=1;j<i;j++){
             t[i][j]=(t[i-1][j]%m+t[i-1][j-1]%m)%m;
          }
        }
        return fun(a)-1;
    }
};