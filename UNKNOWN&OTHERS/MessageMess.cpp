#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M=2e5+5;


class MessageMess{
    public:
        long long dp[60][60];
        string s;
        vector<string> v;
        bool exists(string targ){
            for(string &str : v) if(targ == str) return true;
            return false;
        }

        long long solve(int l, int r){
            long long &ret = dp[l][r];
            if(~ret) return ret;

            if(r == s.size() - 1){
                if(exists(s.substr(l , r-l+1))) return ret = 1LL;
                return ret = 0; /// l != 0 && substring does not exist in dictionary
            }

            ret = 0;
            if(exists(s.substr(l, r - l + 1))) ret = solve(r+1, r+1);
            ret += solve(l, r+1);

            return ret;

        }
        string build(int l, int r){
            if(r == s.size() - 1){
                return s.substr(l, r - l + 1);
            }
            if(dp[r+1][r+1] == 1){
                return s.substr(l, r - l + 1) + ' ' + build(r+1, r+1);
            }
            else{
                return build(l, r+1);
            }
        }
        string restore(vector<string> &dic, string &message){
            memset(dp, -1, sizeof(dp));
            s = message;
            v = dic;
            solve(0,0);
            if(dp[0][0] == 0) return "IMPOSSIBLE!";
            if(dp[0][0] > 1) return "AMBIGUOUS!";
            return build(0,0);
        }
};
// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const string &expected, const string &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: \"" << expected << "\"" << std::endl; 
			std::cerr << "    Received: \"" << received << "\"" << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			vector<string> dictionary       = {"HI", "YOU", "SAY"};
			string message            = "HIYOUSAYHI";
			string expected__         = "HI YOU SAY HI";

			std::clock_t start__      = std::clock();
			string received__         = MessageMess().restore( dictionary, message);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			vector<string> dictionary       = {"ABC", "BCD", "CD", "ABCB"};
			string message            = "ABCBCD";
			string expected__         = "AMBIGUOUS!";

			std::clock_t start__      = std::clock();
			string received__         = MessageMess().restore( dictionary, message);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			vector<string> dictionary       = {"IMPOSS", "SIBLE", "S"};
			string message            = "IMPOSSIBLE";
			string expected__         = "IMPOSSIBLE!";

			std::clock_t start__      = std::clock();
			string received__         = MessageMess().restore( dictionary, message);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			vector<string> dictionary       = {"IMPOSS", "SIBLE", "S", "IMPOSSIBLE"};
			string message            = "IMPOSSIBLE";
			string expected__         = "IMPOSSIBLE";

			std::clock_t start__      = std::clock();
			string received__         = MessageMess().restore( dictionary, message);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			string dictionary[]       = ;
			string message            = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = MessageMess().restore(vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])), message);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			string dictionary[]       = ;
			string message            = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = MessageMess().restore(vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])), message);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string dictionary[]       = ;
			string message            = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = MessageMess().restore(vector <string>(dictionary, dictionary + (sizeof dictionary / sizeof dictionary[0])), message);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}

#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
