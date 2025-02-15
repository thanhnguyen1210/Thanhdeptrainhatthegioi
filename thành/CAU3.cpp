#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const int N = 1e6 + 5;
using namespace std;
int n,m;
string s,t;
bool check(int k,int idx,string s,int d1[])
{
    int d2[500] = {0};
    for (int i = k ; i <= idx; i++) d2[(int)s[i]]++;
    for (int i = k ; i <= idx; i++)
    {
        if(d2[(int)s[i]] != 0)
        {
            if(d1[(int)s[i]]!=d2[(int)s[i]]) return false;
        }
    }
    return true;
}
void sub1()
{
    int d[500] = {0};
    int l = t.size();
    ll cnt = 0;
    for (int i = 0 ; i < l ; i++) d[(int)t[i]]++;
    string res = "";
    for (int i = 0 ; i < n ; i++) res += s[i];
    int k = 1;
    if(check(0,n - 1,res,d)) cnt++;
    for (int i = n ; i <= m ; i++)
    {
        res += s[i];
        if(check(k,i,res,d)) cnt++;
        k++;
    }
    cout<<cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);
    cin>>n>>m;
    cin>>t>>s;
    sub1();
    return 0;
}
