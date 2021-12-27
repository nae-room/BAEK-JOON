// 조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고,
// 조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때, 
// 류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {
	int T;
	int x1, y1, r1, x2, y2, r2;
	int d, cond1, cond2;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		cond1 = (r1 - r2) * (r1 - r2);
		cond2 = (r1 + r2) * (r1 + r2);

		if (d == 0 && cond1 == 0) cout << "-1" << '\n';
		else if (d == cond1 || d == cond2) cout << "1" << '\n';
		else if (cond1 < d && d < cond2) cout << "2" << '\n';
		else cout << "0" << '\n';
			
	}
}

// abs - 절대값
// pow(a,b) - a의 b 제곱
// sqrt - 루트