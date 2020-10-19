#include <iostream>
using namespace std;

int max_gcd(int num) {
    int m, res, i, a, cnt;
    
    m = num;
    res = 0;
    i = m;
    
    while (i > 0) {
        a = i;
        cnt = 0;
        while (a <= m) {
            cnt += 1;
            a += i;
        }
        if (cnt >= 2) {
            res = i;
            break;
        }
        i -= 1;
    }
    return res;
}

int main() {
	int test_case, num;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
	    cin >> num;
	    cout << max_gcd(num) << "\n";
	}
	return 0;
}
