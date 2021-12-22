#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_prize(int n)
{
  vector<int> a;
  for(int i = 0; i<n ; i++)
  {
    int temp;
    cin>>temp;
    a.push_back(temp);
  }

  int min_ele = *min_element(a.begin(),a.end());
  int sum = accumulate(a.begin(), a.end(), 0);

  int ans = sum - min_ele;

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
        int n;
        cin>>n;
        cout<<max_prize(n)<<endl;
    }
}
