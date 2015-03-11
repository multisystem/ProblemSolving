#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,a,b,d) for(int i=a; i<=b; i+=d)
#define repd(i,a,b,d) for(int i=a; i>=b; i-=d)
#define repi(it,stl) for(auto it = (stl).begin(); (it)!=stl.end(); ++(it))
#define sz(a) ((int)(a).size())
#define mem(a,n) memset((a), (n), sizeof(a))
#define all(n) (n).begin(),(n).end()
#define rall(n) (n).rbegin(),(n).rend()
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
    cin >> tst;
    while(tst--){
        int n;
        cin >> n;
        vector<string> v;
        int p=0;
        repa(i,1,n,1){
            string str;
            cin >> str;
            if(str == "LEFT"){
                v.push_back(str);
                --p;
            }
            else if(str == "RIGHT"){
                v.push_back(str);
                ++p;
            }
            else{
                int x;
                cin >> str >> x;
                str = v[x-1];
                if(str == "LEFT"){
                    v.push_back(str);
                    --p;
                }
                else if(str == "RIGHT"){
                    v.push_back(str);
                    ++p;
                }
            }
        }
        cout << p << "\n";
    }

    return 0;
}

