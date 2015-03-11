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

#define fo(i,n) for(int i=0; i<n; i++)
#define foo(i,m,n) for(int i=m; i<n; i++)
#define foe(i,m,n) for(int i=m; i<=n; i++)
#define be(n) n.begin(),n.end()
#define rbe(n) n.rbegin(),n.rend()
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
using namespace std;

class ConsecutiveNumbers {
public:
	vector<int> missingNumber(vector<int> num) {
		vector<int> res;
		sort(be(num));
		int s = num[0];
		bool b = 1;
		fo(i,num.size()) {
			if (num[i] != s) {
				if (!b) {
					res.clear();
					return res;
				}
				b = 0;
				res.push_back(s);
				i--;
			}
			s++;
		}
		if(b){
			if(num[0]>1)
			res.push_back(num[0]-1);
			res.push_back(num.back()+1);
		}
		return res;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, vector<int> p0, bool hasAnswer,
		vector<int> p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	ConsecutiveNumbers *obj;
	vector<int> answer;
	obj = new ConsecutiveNumbers();
	clock_t startTime = clock();
	answer = obj->missingNumber(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC
			<< " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p1.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << p1[i];
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << answer[i];
	}
	cout << "}" << endl;
	if (hasAnswer) {
		if (answer.size() != p1.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p1[i]) {
					res = false;
				}
			}
		}
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
	vector<int> p1;

	{
		// ----- test 0 -----
		int t0[] = { 10, 7, 12, 8, 11 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		int t1[] = { 9 };
		p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
		all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 1 -----
		int t0[] = { 3, 6 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		p1.clear() /*{}*/;
		all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 2 -----
		int t0[] = { 5, 6, 7, 8 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		int t1[] = { 4, 9 };
		p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
		all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 3 -----
		int t0[] = { 1000000000 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		int t1[] = { 999999999, 1000000001 };
		p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
		all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 4 -----
		int t0[] = { 1, 6, 9, 3, 8, 12, 7, 4, 11, 5, 10 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		int t1[] = { 2 };
		p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
		all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
		// ------------------
	}

	{
		// ----- test 5 -----
		int t0[] = { 1 };
		p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
		int t1[] = { 2 };
		p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
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


//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
