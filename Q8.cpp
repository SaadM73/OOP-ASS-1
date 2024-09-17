
// Muhammad Saad Mursaleen
// 22I-0835

#include<iostream>
using namespace std;
int fun(int num);
//int main() {
//	int num;
//	cout << "Enter number to calculate its digital root : ";
//	cin >> num;
//	num=fun(num);
//	cout << "The digital root is " << num << endl;
//}

int fun(int num) {
	if (num / 10 == 0) {
		return num;
	}
	else {
		int numdup = num;
		int x = 0;
		int sum = 0;
		while (numdup != 0) {
			numdup /= 10;
			x++;
		}
		for (int i = 0; i < x; i++) {
			sum += num % 10;
			num/= 10;

		}
		fun(sum);

	}
}