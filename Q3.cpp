
// Muhammad Saad Mursaleen
// 22I-0835

//#include<iostream>
//#include<cstdlib>
//#include<time.h>
//using namespace std;
//int main() {
//	srand(time(0));
//	int rows,determinant;
//	cout << "Enter rows of the matrix : ";
//	cin >> rows;
//	//cout << "ënter columns of the matrix :";
//	//cin >> cols;
//
//	int** ptr = new int* [rows];
//	for (int i = 0; i < rows; i++) {
//		ptr[i] = new int[rows];
//	}
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < rows; j++) {
//			ptr[i][j] = 1 + rand() % 100;
//		}
//	}
//	cout << "Matrix is " << endl;
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < rows; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//
//	if (rows == 1) {
//		determinant = ptr[0][0];
//	}
//	else if (rows == 2) {
//		determinant = (ptr[0][0] * ptr[1][1]) - (ptr[0][1] * ptr[1][0]);
//	}
//	else if (rows == 3) {
//		determinant = ptr[0][0] * (ptr[1][1] * ptr[2][2] - ptr[1][2] * ptr[2][1]) - ptr[0][1]*(ptr[1][0] * ptr[2][2] - ptr[1][2] * ptr[2][0]) + ptr[0][2]*(ptr[1][0] * ptr[2][1] - ptr[1][1] * ptr[2][0]);
//	}
//	cout << endl;
//	cout << "Determinant is : " << determinant << endl;
//	if (determinant == 0) {
//		cout << "Forces not in equilibrium" << endl;
//	}
//	else {
//		cout << "Forces inn Equilibrium" << endl;
//	}
//	for (int i = 0; i < rows; i++) {
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//}