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

class MergersDivTwo {
public:
  double findMaximum(vector <int> revenues, int k) {
    sort(revenues.begin(), revenues.end());
    int n = revenues.size();

    int cs[n];
    cs[0] = revenues[0];
    for(int i = 1; i < n; ++i)
      cs[i] = cs[i - 1] + revenues[i];

    double dp[n];
    for(int i = 0; i < n; ++i)
      dp[i] = 1.0 * cs[i] / (i + 1);

    for(int i = k; i < n; ++i)
      for(int j = i + (k - 1) - 1, cnt = k; j < n; ++j, ++cnt)
        dp[j] = max(dp[j], 1.0 * (dp[i - 1] + cs[j] - cs[i - 1]) / cnt);

    return dp[n - 1];
  }
};
// BEGIN CUT HERE
#include <algorithm>
#include <cmath>
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
	
	static const double MAX_DOUBLE_ERROR = 1e-9;
	static bool topcoder_fequ(double expected, double result) {
		if (std::isnan(expected)) {
			return std::isnan(result);
		} else if (std::isinf(expected)) {
			if (expected > 0) {
				return result > 0 && std::isinf(result);
			} else {
				return result < 0 && std::isinf(result);
			}
		} else if (std::isnan(result) || std::isinf(result)) {
			return false;
		} else if (std::fabs(result - expected) < MAX_DOUBLE_ERROR) {
			return true;
		} else {
			double mmin = std::min(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR));
			double mmax = std::max(expected * (1.0 - MAX_DOUBLE_ERROR), expected * (1.0 + MAX_DOUBLE_ERROR));
			return result > mmin && result < mmax;
		}
	}
	double moj_relative_error(double expected, double result) {
		if (std::isnan(expected) || std::isinf(expected) || std::isnan(result) || std::isinf(result) || expected == 0) {
			return 0;
		}
		return std::fabs(result-expected) / std::fabs(expected);
	}
	
	int verify_case(int casenum, const double &expected, const double &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (topcoder_fequ(expected, received)) {
			verdict = "PASSED";
			double rerr = moj_relative_error(expected, received); 
			if (rerr > 0) {
				std::sprintf(buf, "relative error %.3e", rerr);
				info.push_back(buf);
			}
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
			std::cerr << "    Expected: " << expected << std::endl; 
			std::cerr << "    Received: " << received << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int revenues[]            = {5, -7, 3};
			int k                     = 2;
			double expected__         = 1.5;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int revenues[]            = {5, -7, 3};
			int k                     = 3;
			double expected__         = 0.3333333333333333;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int revenues[]            = {1, 2, 2, 3, -10, 7};
			int k                     = 3;
			double expected__         = 2.9166666666666665;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int revenues[]            = {-100, -100, -100, -100, -100, 100};
			int k                     = 4;
			double expected__         = -66.66666666666667;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int revenues[]            = {869, 857, -938, -290, 79, -901, 32, -907, 256, -167, 510, -965, -826, 808, 890, -233, -881, 255, -709, 506, 334, -184, 726, -406, 204, -912, 325, -445, 440, -368};
			int k                     = 7;
			double expected__         = 706.0369290573373;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int revenues[]            = ;
			int k                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int revenues[]            = ;
			int k                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int revenues[]            = ;
			int k                     = ;
			double expected__         = ;

			std::clock_t start__      = std::clock();
			double received__         = MergersDivTwo().findMaximum(vector <int>(revenues, revenues + (sizeof revenues / sizeof revenues[0])), k);
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
