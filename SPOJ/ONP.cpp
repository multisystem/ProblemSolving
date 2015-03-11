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
#define allarr(n) (n), (n)+( (sizeof (n)) / (sizeof (*n)) )
#define mp(a,b) make_pair((a),(b))
#define pii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define sstr stringstream 
#define mit map<char,vi>::iterator
typedef long long ll;
using namespace std;

int main() {

	int tst, idx;
	char str[410];
	scanf("%d", &tst);
	while (tst--) {
		scanf("%s", str), idx = 0;
		stack<char> s;
		char res[410] = { 0 };
		for (int i = 0; str[i]; ++i) {
			if (isalpha(str[i]))
				res[idx++] = str[i];
			else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i]
					== '/' || str[i] == '^')
				s.push(str[i]);
			else if (str[i] == ')')
				res[idx++] = s.top(), s.pop();
		}
		printf("%s\n", res);
	}
	return 0;
}
