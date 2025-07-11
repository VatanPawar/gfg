class Solution {
  public:
  vector<vector<int>> arr;
  vector<bool>visited;
  void solve(int n,vector<int>&ans){
      ans.push_back(n);
      visited[n]=1;
      for(auto it:arr[n]){
          if(!visited[it]){
              
             solve(it,ans);
              
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>ans;
        visited=vector<bool>(adj.size(),0);
        arr=adj;
        solve(0,ans);
        return ans;
    }
};