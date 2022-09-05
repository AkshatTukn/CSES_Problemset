V<int>adj[MX];
ll a[MX+MX],b[MX],c[MX];
string X,Y;
ll dp[5001][5001];
int solve(int ind1,int ind2)
{
   if(ind1>=n || ind2>=m)
   {
              if(ind1>=n && ind2>=m)
              {
                return 0;
              }
   if(ind1>=n)
   {
       return m-ind2;
   }else
   {
    return n-ind1;
   }
   } 
 if(~dp[ind1][ind2])
 {
    return dp[ind1][ind2];
 }
int ans=n-ind1 + m-ind2;
if(X[ind1]==Y[ind2])
{
    ans=solve(ind1+1,ind2+1);
    return dp[ind1][ind2]=ans;
}
int a1= solve(ind1+1,ind2)+1;
int b1=solve(ind1+1,ind2+1)+1;
int c1=solve(ind1,ind2+1)+1;
b1=Min(b1,a1);
c1=Min(c1,b1);
return dp[ind1][ind2]=c1;
}
int main()
{
init_code();
cout<<setprecision(12)<<fixed;
int tes=1;
//compPrimes(rn);
//cin>>tes;
while(tes--)
{  
       // cin>>n;
        // need height n and width 2
      
         cin>>X>>Y;
         n=X.size(),m=Y.size();
         mset(dp,-1);
         int ans=solve(0,0);
cout<<ans<<endl;
 