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
typedef long long ll;
using namespace std;

class FoxSequence {
public:
	int idx;

	bool up(vi& seq) {
		int diff = seq[idx] - seq[idx - 1];
		if(diff <= 0)
			return 0;
		bool valid=false;
		while (idx < sz(seq)) {
			if (seq[idx] - seq[idx - 1] != diff) {
				if (seq[idx] - seq[idx - 1] > diff)
					return 0;
				break;
			}
			valid=true;
			++idx;
		}
		return valid;

	}

	bool down(vi& seq) {
		int diff = seq[idx] - seq[idx - 1];
		if(diff >= 0)
			return 0;
		bool valid=false;
		while (idx < sz(seq)) {
			if (seq[idx] - seq[idx - 1] != diff) {
				if (seq[idx] - seq[idx - 1] < diff)
					return 0;
				break;
			}
			valid=true;
			++idx;
		}
		return valid;
	}

	void equal(vi& seq) {
		while (idx < sz(seq)) {
			if (seq[idx] - seq[idx - 1] != 0) {
				break;
			}
			++idx;
		}
	}
	string isValid(vector<int> seq) {
		idx = 1;

		if(up(seq)==0)
			return "NO";
		if (idx == sz(seq))
			return "NO";
		if(down(seq)==0)
			return "NO";
		if (idx == sz(seq))
			return "NO";
		equal(seq);
		if (idx == sz(seq))
			return "NO";
		if(up(seq)==0)
			return "NO";
		if (idx == sz(seq))
			return "NO";
		if(down(seq)==0)
			return "NO";
		if (idx == sz(seq))
			return "YES";
		return "NO";

	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector<int> p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	FoxSequence *obj;
	string answer;
	obj = new FoxSequence();
	clock_t startTime = clock();
	answer = obj->isValid(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC
			<< " seconds" << endl;
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

	vector<int> p0;
	string p1;

	{
		// ----- test 0 -----
		int t0[] = { 1, 3, 5, 7, 5, 3, 1, 1, 1, 3, 5, 7, 5, 3, 1 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		p1 = "YES";
		all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 1 -----
		int t0[] = { 1, 2, 3, 4, 5, 4, 3, 2, 2, 2, 3, 4, 5, 6, 4 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		p1 = "YES";
		all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 2 -----
		int t0[] = { 3, 6, 9, 1, 9, 5, 1 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		p1 = "YES";
		all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 3 -----
		int t0[] = { 1, 2, 3, 2, 1, 2, 3, 2, 1, 2, 3, 2, 1 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		p1 = "NO";
		all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 4 -----
		int t0[] = { 1, 3, 4, 3, 1, 1, 1, 1, 3, 4, 3, 1 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		p1 = "NO";
		all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 5 -----
		int t0[] = { 6, 1, 6 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		p1 = "NO";
		all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
		// ------------------
	}

	{
			// ----- test 5 -----
			int t0[] = { 812, 1423, 1422, 1734, 1982 };
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
			p1 = "NO";
			all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
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
