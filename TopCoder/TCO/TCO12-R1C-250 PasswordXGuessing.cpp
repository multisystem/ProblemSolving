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
#define reps(i,m,n) for(int i=m; i<n; i++)
#define repe(i,m,n) for(int i=m; i<=n; i++)
#define repi(it,stl) for(typeof((stl).begin()) it = (stl).begin(); (it)!=stl.end(); ++(it))
#define sz(a) ((int)(a).size())
#define mem(a,n) memset((a), (n), sizeof(a))
#define all(n) (n).begin(),(n).end()
#define rall(n) (n).rbegin(),(n).rend()
#define mp(a,b) make_pair((a),(b))
#define pii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define sstr stringstream 
#define fnd(v,x) (find(all((v)),(x))!=(v).end())
#define itr(A,B) typeof(B) A = B

typedef long long ll;
using namespace std;


class PasswordXGuessing {
public:

    long long howMany(vector <string> guesses) {
        set<string> ans;
        rep(i,sz(guesses)){
            rep(j,sz(guesses[i])){
                char org = guesses[i][j];
                repe(c,'0','9'){
                    guesses[i][j] = c;
                    ans.insert(guesses[i]);
                }
                guesses[i][j] = org;
            }
        }
        ll res=0;
        repi(it, ans){
            string s = *it;
            int cnt=0;
            rep(i,sz(guesses)){
                int diff=0;
                rep(j,sz(guesses[i])){
                    if(guesses[i][j] != s[j])
                        ++diff;
                }
                if(diff == 1)
                    ++cnt;
            }
            if(cnt == sz(guesses))
                ++res;
        }
        return res;
    }
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, long long p1) {
    cout << "Test " << testNum << ": [" << "{";
    for (int i = 0; int(p0.size()) > i; ++i) {
        if (i > 0) {
            cout << ",";
        }
        cout << "\"" << p0[i] << "\"";
    }
    cout << "}";
    cout << "]" << endl;
    PasswordXGuessing *obj;
    long long answer;
    obj = new PasswordXGuessing();
    clock_t startTime = clock();
    answer = obj->howMany(p0);
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
int main() {
    bool all_right;
    all_right = true;

    vector <string> p0;
    long long p1;

    {
	// ----- test 0 -----
	string t0[] = {"58","47"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2ll;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
    }

    {
	// ----- test 1 -----
	string t0[] = {"539","540","541"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1ll;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
    }

    {
	// ----- test 2 -----
	string t0[] = {"12","34","56","78"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0ll;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
    }

    {
	// ----- test 3 -----
	string t0[] = {"2","3","5"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7ll;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
    }

    {
	// ----- test 4 -----
	string t0[] = {"4747","4747","4747","4747"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 36ll;
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
