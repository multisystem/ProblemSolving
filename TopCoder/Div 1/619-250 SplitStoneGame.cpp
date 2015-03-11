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
#define myfind(v,x) (find(all((v)),(x))-(v).begin())

typedef long long ll;
using namespace std;

int memo[52][52];
class SplitStoneGame {
public:
    int DP(int one, int more){
        if(one + more < 3) return 0;
        if(more == 0) return 0;
        int& m = memo[one][more];
        if(m != -1) return m;
        m = 1;
        if(more > 2)
            m &= DP(one,more-1);
        if(one>=2 && more>=1)
            m &= DP(one-2,more+1);
        if(more >=2 && one >=1)
            m &= DP(one-1,more);
        m = !m;
        return m;
    }
    string winOrLose(vector <int> number) {
        mem(memo,-1);
        int one=0,more=0;
        rep(i,sz(number)){
            one += number[i]==1;
            more += number[i]>1;
        }
        return DP(one,more)?"WIN":"LOSE";
    }
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, string p1) {
    cout << "Test " << testNum << ": [" << "{";
    for (int i = 0; int(p0.size()) > i; ++i) {
        if (i > 0) {
            cout << ",";
        }
        cout << p0[i];
    }
    cout << "}";
    cout << "]" << endl;
    SplitStoneGame *obj;
    string answer;
    obj = new SplitStoneGame();
    clock_t startTime = clock();
    answer = obj->winOrLose(p0);
    clock_t endTime = clock();
    delete obj;
    bool res;
    res = true;
    cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
    if (hasAnswer) {
        cout << "Desired answer:" << endl;
        cout << "\t" << "\"" << p1 << "\"" << endl;
    }
    cout << "Your answer:" << endl;
    cout << "\t" << "\"" << answer << "\"" << endl;
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
int main() {
    bool all_right;
    all_right = true;

    vector <int> p0;
    string p1;

    {
        // ----- test 0 -----
        int t0[] = {1,1,1};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        p1 = "LOSE";
        all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 1 -----
        int t0[] = {2,2};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        p1 = "LOSE";
        all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 2 -----
        int t0[] = {1,1,2};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        p1 = "WIN";
        all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 3 -----
        int t0[] = {1,2,3,4,3,2,2,4,3,1,4,4,1,2,4,4,1,4,3,1,4,2,1};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        p1 = "WIN";
        all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
        // ------------------
    }

    {
        // ----- test 4 -----
        int t0[] = {1,1,1,1,1,1,1,1,1,1,2,1,1,1,3,1,9,1,3,1,1,1,1,1};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        p1 = "LOSE";
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
