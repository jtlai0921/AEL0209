#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "請輸入 a, b 兩整數 ";
	cin >> a >> b;
	if (a % 2)
		a++;
	if (b % 2)
		b--;
	cout << "兩數間的偶數共 "<< (b - a) / 2 + 1 << " 個" << endl;
    return 0;
}
