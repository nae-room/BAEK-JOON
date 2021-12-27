// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main(){
    double A, B;
    cin >> A >> B;

    cout.precision(10);
    cout << A/B;
    return 0;
}

/*
상대오차가 10⁻⁹ 이내여야 하므로 소수점 아래
11자리에서 반올림하여 10자리까지 표현하고자 precision(10) 사용
*/