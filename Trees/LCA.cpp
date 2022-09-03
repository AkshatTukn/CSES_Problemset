ll table[MX][nx+4],depth[MX];
int check=0;
int walk(int x,int y)
{
    int z=0;
    while(y>0)
    {
        if(y&1)
        {
            x=table[x][z];
        }
        z++;
     y>>=1;
    }
 return x;
}
int LCA(int x,int y)
{
    if(depth[x] > depth[y])
    {
        swap(x,y);
    }
    int dep = depth[y]-depth[x];
    x= walk(x,dep);
    if(x==y){return x;}
for(int j=20;j>=0;j--)
{
    if(table[x][j] != table[y][j])
    {
            x= table[x][j];
            y=table[y][j];
    }
}
return  table[x][0];
}
int DISTANCE(int x,int y)
{
    int ans= depth[x]+depth[y]-2*depth[LCA(x,y)];
    return ans;
}
void dfs(int x,int par)
{
   for(int k:adj[x])
   {
     if(k!=par)
     {
        table[k][0]=x;
        depth[k]=depth[x]+1;
        dfs(k,x);
     }
   }
}
