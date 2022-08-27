cin>>n>>m>>k;
loop(i,0,n)
{
    cin>>a[i];
}
loop(i,0,m)
{
    cin>>b[i];
}
 
sort(a,a+n);
sort(b,b+m);
int i=0,j=0;
int ans=0;
while(i<n && j<m)
{
  if(abs(a[i]-b[j])<=k)
  {
        ans++;
        i++;
        j++;
        continue;
  }    
  if(a[i]<b[j])
  {
    i++;
  }else
  {
    j++;
  }
 
}
 cout<<ans<<endl;