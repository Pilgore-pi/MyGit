#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int A, B, C;
    cout << "Введите числа" << endl;
    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;
    if (A > B) {
        if (A > C) cout << "Наибольшее число " << A;
        else cout << "Наибольшее число " << C;
    }
    else {
        if(B > C) cout << "Наибольшее число " << B;
        else cout << "Наибольшее число " << C;
    }
	сout<<"Change";
    return 0;
}