// Muhammad Saad Mursaleen
// 22I-0835



//#include<iostream>
//using namespace std;
//
//int* collatz(int** x, int i, int j);
//int main() {
//	int** ptr;
//	ptr = new int* [3];
//	for (int i = 0; i < 3; i++) {
//		ptr[i] = new int[3];
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			ptr[i][j] = 1 + rand() % 20;
//		}
//	}
//	cout << "Original Matrix" << endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//
//	int** ptr2;
//	ptr2 = new int* [9];
//	//	int* arr;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			*(ptr2 + (i * 3) + j) = collatz(ptr, i, j);
//		}
//
//	}
//	cout << endl << endl;
//
//	cout << "Original matrix is now : " << endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 50; j++) {
//			if (*(*(ptr2 + i) + j) == 0) {
//				break;
//			}
//			cout <<ptr2[i][j] << " ";
//
//	
//		}
//		cout << endl;
//	}
//
//}
//
//int* collatz(int **x, int i, int j) {
//	int *arr = new int[50];
//	for (int i = 0; i < 50; i++) {
//		arr[i] = 0;
//	}
//	int y = 0;
//	cout << "At i=" << i << ", At j=" << j << " ; ";
//
//	arr[y] = x[i][j];
////	cout << x[i][j];
//
//	while (arr[y] !=1 ) {
//		if (arr[y] % 2 ==0 ) {
//			arr[y + 1] = arr[y] / 2;
//			y++;
//		}
//		else {
//			arr[y + 1] = (arr[y] * 3) + 1;
//			y++;
//		}
//	}
//	x[i][j] = arr[y];
//	int a = 0;
//	while (arr[a] != 0) {
//		cout << arr[a] << " ";
//		a++;
//	}
//	cout << endl;
//
//	return arr;
//}