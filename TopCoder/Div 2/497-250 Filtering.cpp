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


class Filtering {
public:
	vector <int> designFilter(vector <int> sizes, string outcome) {
		vector<pair<int,char> > v;

		rep(i,sz(sizes))
			v.push_back(mp(sizes[i], outcome[i]));
		sort(all(v));
		int idx=0;
		while(v[idx].second=='R') ++idx;

		int st=idx;
		vi res;
		while(v[idx].second == 'A')++idx;
		int en = idx-1;

		reps(i,idx,sz(v)){
			if(v[i].second=='A')
				return res;
		}

		res.push_back(v[st].first);
		res.push_back(v[en].first);
		return res;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, string p1, bool hasAnswer, vector <int> p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	Filtering *obj;
	vector <int> answer;
	obj = new Filtering();
	clock_t startTime = clock();
	answer = obj->designFilter(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p2.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << p2[i];
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
		if (answer.size() != p2.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p2[i]) {
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
	
	vector <int> p0;
	string p1;
	vector <int> p2;
	
	{
	// ----- test 0 -----
	int t0[] = {3,4,5,6,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "AAAAA";
	int t2[] = {3,7};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {3,4,5,6,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "AARAA";
	p2.clear() /*{}*/;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {3,4,5,6,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "RAAAA";
	int t2[] = {4,7};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {68,57,7,41,76,53,43,77,84,52,34,48,27,75,36};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "RARRRARRRARARRR";
	int t2[] = {48,57};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {26,81,9,14,43,77,55,57,12,34,29,79,40,25,50};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "ARAAARRARARARAA";
	p2.clear() /*{}*/;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
