// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main(){
    int T;
    int A, B;

    cin >> T;
    for(int i=0; i<T; i++){
        cin >> A >> B;
        cout << A + B << endl;
    }

    return 0;
}

// cin >> T 안해서 한 번 틀림