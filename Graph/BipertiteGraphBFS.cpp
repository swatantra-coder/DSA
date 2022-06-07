bool bipertite(int s, vector<int> adj[],int colo[])
{
  queue<int> q;
  q.push(s);
  colo[s]=1;
  
  while(!q.empty())
  {
    int current=q.front();
    q.pop();
    for(auto it:adj[current])
    {
      if(colo[it]==-1;
      {
        colo[it]=1-colo[current];
        q.push(it);
      }
      else if(colo[it]==colo[current])
         return false;
    }
    return true;
}
bool checkbipertite(vector<int> adj[],int n)
{
  int colo[n];
  memset(colo,-1,sizeofcolo);
  
  for(int i=0;i<n;i++)
  {
    if(colo[i]==-1)
    {
      if(!bipertite(i,adj,colo))
        return false;
    }
  }
  
  return true;
}
