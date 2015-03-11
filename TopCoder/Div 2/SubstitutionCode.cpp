//TC SRM 257-D2-1	Points=221.03 of 250	Time = 11m
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

#define fo(i,n) for(i=0;i<(n);++i)

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<double> vd;

class SubstitutionCode {
public:
	int getValue(string key, string code) {

			int ret = 0;

			for (int i = 0; i < code.length(); i++) {

				for (int j = 0; j < key.length(); j++) {
					if (code[i] == key[j]) {

						if (j != 9)
							ret =(j+1) + 10*ret;

						else
							ret *= 10;
						break;

					}
				}
			}

			return ret;

		}

	// BEGIN CUT HERE
	void __test() {
		// END CUT HERE

		// BEGIN CUT HERE
		static bool s_FirstTime = true;
		if (s_FirstTime) {
			s_FirstTime = false;
			run_test(-1);
		}
		// END CUT HERE

		// BEGIN CUT HERE
	}
	// END CUT HERE

	// BEGIN CUT HERE
public:
	void run_test(int Case) {
		if ((Case == -1) || (Case == 0))
			test_case_0();
		if ((Case == -1) || (Case == 1))
			test_case_1();
		if ((Case == -1) || (Case == 2))
			test_case_2();
	}
private:
	template<typename T> string print_array(const vector<T> &V) {
		ostringstream os;
		os << "{ ";
		for (typename vector<T>::const_iterator iter = V.begin(); iter
				!= V.end(); ++iter)
			os << '\"' << *iter << "\",";
		os << " }";
		return os.str();
	}
	void verify_case(int Case, const int &Expected, const int &Received) {
		cerr << "Test Case #" << Case << "...";
		if (Expected == Received)
			cerr << "PASSED" << endl;
		else {
			cerr << "FAILED" << endl;
			cerr << "\tExpected: \"" << Expected << '\"' << endl;
			cerr << "\tReceived: \"" << Received << '\"' << endl;
		}
	}
	void test_case_0() {
		string Arg0 = "TRADINGFEW";
		string Arg1 = "LGXWEV";
		int Arg2 = 709;
		verify_case(0, Arg2, getValue(Arg0, Arg1));
	}
	void test_case_1() {
		string Arg0 = "ABCDEFGHIJ";
		string Arg1 = "XJ";
		int Arg2 = 0;
		verify_case(1, Arg2, getValue(Arg0, Arg1));
	}
	void test_case_2() {
		string Arg0 = "CRYSTALBUM";
		string Arg1 = "MMA";
		int Arg2 = 6;
		verify_case(2, Arg2, getValue(Arg0, Arg1));
	}

	// END CUT HERE

};
// BEGIN CUT HERE
int main() {
	SubstitutionCode c;
	c.__test();
	return 0;
}
// END CUT HERE
