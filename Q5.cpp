
// Muhammad Saad Mursaleen
// 22I-0835

//#include<iostream>
//using namespace std;
//int main() {
//	int power, x;
//	cout << "Enter the degree of the polynomial : ";
//	cin >> power;
//	cout << "Enter the value of x : ";
//	cin >> x;
//	int* ptr = new int[power + 1];
//	int y;
//	for (int i = power; i >=0; i--) {
//		cout << "Enter value of " << i << " coefficient : ";
//		cin >> y;
//		ptr[i] = y;
//	}
//	int sum = 0;
//	for (int i = 0; i <= power; i++) {
//		int weight = ptr[i];
//		int xweight = 1;
//		for (int j = 0; j < i; j++) {
//			xweight *= x;
//		}
//		sum += weight*xweight;
//	}
//
//	cout << "Final Answer is : " << sum << endl;
//
//
//
//}