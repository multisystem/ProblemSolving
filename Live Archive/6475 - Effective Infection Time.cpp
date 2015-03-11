#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,a,b,d) for(int i=a; i<=b; i+=d)
#define repd(i,a,b,d) for(int i=a; i>=b; i-=d)
#define repi(it,stl) for(auto it = (stl).begin(); (it)!=stl.end(); ++(it))
#define sz(a) ((int)(a).size())
#define mem(a,n) memset((a), (n), sizeof(a))
#define all(n) (n).begin(),(n).end()
#define mp(a,b) make_pair((a),(b))
#define pii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define sstr stringstream
#define indexof(v,x) (find(all((v)),(x))-(v).begin())

typedef long long ll;
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("main.txt","rt",stdin);
    //  freopen("out.txt","wt",stdout);
#endif

    int tst;
    cin>>tst;
    int m1,yr1,m2,yr2;
    while(tst--){
        cin >> m1 >> yr1 >> m2 >> yr2;
        if(yr1 == yr2){
            int dif = m2-m1;
            printf("%.4lf\n",(0.5/ (12.0-m1+1))*dif);
        }
        else{
            int dif = yr2-yr1-1;
            printf("%.4lf\n", 0.5 + dif + (1.0/12.0)*(m2-1));
        }
    }

    return 0;
}
