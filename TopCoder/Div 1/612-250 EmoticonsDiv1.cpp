#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string.h>

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

bool vis[3002][3002];
int BFS(int tot){
     queue<pii> q;
     q.push(mp(1,0));
     vis[1][0]=1;
     int res=0;
     while(q.size()){
          int siz = q.size();
          while(siz--){
               pii p = q.front();
               q.pop();
               if(p.first == tot) return res;
               if(p.first>1 && !vis[p.first-1][p.second]){
                    vis[p.first-1][p.second]=1;
                    q.push(mp(p.first-1,p.second));
               }
               if(p.second && p.first < tot && !vis[p.first + p.second][p.second]){
                    vis[p.first + p.second][p.second]=1;
                    q.push(mp(p.first + p.second, p.second));
               }
               vis[p.first][p.first]=1;
               q.push(mp(p.first, p.first));
          }
          ++res;
     }
     return res;
}
class EmoticonsDiv1 {
public:
     int printSmiles(int smiles) {
          mem(vis,0);
          return BFS(smiles);
     }
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, bool hasAnswer, int p1)
{
     cout << "Test " << testNum << ": [" << p0;
     cout << "]" << endl;
     EmoticonsDiv1 *obj;
     int answer;
     obj = new EmoticonsDiv1();
     clock_t startTime = clock();
     answer = obj->printSmiles(p0);
     clock_t endTime = clock();
     delete obj;
     bool res;
     res = true;
     cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
     if (hasAnswer) {
          cout << "Desired answer:" << endl;
          cout << "\t" << p1 << endl;
     }
     cout << "Your answer:" << endl;
     cout << "\t" << answer << endl;
     if (hasAnswer) {
          res = answer == p1;
     }
     if (!res) {
          cout << "DOESN'T MATCH!!!!" << endl;
     } else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
          cout << "FAIL the timeout" << endl;
          res = false;
     } else if (hasAnswer) {
          cout << "Match :-)" << endl;
     } else {
          cout << "OK, but is it right?" << endl;
     }
     cout << "" << endl;
     return res;
}
int main()
{
     bool all_right;
     all_right = true;

     int p0;
     int p1;

     {
          // ----- test 0 -----
          p0 = 2;
          p1 = 2;
          all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
          // ------------------
     }

     {
          // ----- test 1 -----
          p0 = 4;
          p1 = 4;
          all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
          // ------------------
     }

     {
          // ----- test 2 -----
          p0 = 6;
          p1 = 5;
          all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
          // ------------------
     }

     {
          // ----- test 3 -----
          p0 = 18;
          p1 = 8;
          all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
          // ------------------
     }

     {
          // ----- test 4 -----
          p0 = 11;
          p1 = 8;
          all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
          // ------------------
     }

     if (all_right) {
          cout << "You're a stud (at least on the example cases)!" << endl;
     } else {
          cout << "Some of the test cases had errors." << endl;
     }
     return 0;
}
// END KAWIGIEDIT TESTING







//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
