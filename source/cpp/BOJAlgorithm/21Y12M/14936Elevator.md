- 복습을 권하지 않음.

```cpp
#include <iostream>
#include <ios>
#include <vector>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main()
{
	use_boj_io();

	int n, m;
	int act1, act2, act3, act4, ans;

	cin >> n >> m;

	act1 = n;
	act2 = n / 2;
	act3 = (n + 1) / 2;
	act4 = (n - 1) / 3 + 1;

	ans = 1; //아무것도 하지 않음.

	if (act1 <= m) {
		ans += 1;
	}

	if (n > 1 && act2 <= m) {
		ans += 1;
	}

	if (n > 1 && act3 <= m) {
		ans += 1;
	}

	if (n > 2 && act4 <= m) {
		ans += 1;
	}

	if (n >= 3 &&( act1 + act4 <= m)) {
		ans += 1;
	}

	if (n >= 3 &&( act2 + act4 <= m)) {
		ans += 1;
	}

	if (n >= 3 && (act3 + act4 <= m)) {
		ans += 1;
	}

	cout << ans;


	return 0;
}
```

