#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int No_Dead(int n, int k)
{
  int ans = 0;
  for(int i = 0; i<n ; i++)
  {
      int temp;
      cin>>temp;
      if( k < temp )
      {
          ans++;
      }
  }
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--)
  {
      int n,k;
      cin>>n>>k;

      cout<<No_Dead(n,k)<<endl;
  }
}
