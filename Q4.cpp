

// Muhammad Saad Mursaleen
// 22I-0835


//#include<iostream>
//#include<cstdlib>
//#include<time.h>
//using namespace std;
////bool checkrows(int** ptr, int index, int col, int x, int N);
//int main() {
//	srand(time(0));
//	int n;
//	//	bool flag, flag1;
//	cout << "Enter no of rows/cols you want in your game : ";
//	cin >> n;
//
//	const int N = n;
//
//	int** ptr;
//	ptr = new int* [N];
//	for (int i = 0; i < N; i++) {
//		ptr[i] = new int[N];
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			ptr[i][j] = 1 + rand() % N;
//		}
//	}
//
//	//for (int i = 0; i < N; i++) {
//	//	ptr[i][i] = 1 + rand() % N;
//	//}
//	//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < N-1; i++) {
//		if (ptr[i][0] != ptr[i + 1][0]) {
//			continue;
//
//		}
//		else {
//			int x = 1 + rand() % 3;
//			while (ptr[i][0] != x) {
//				ptr[i + 1][0] = x;
//				x = 1 + rand() % 3;
//			}
//		}
//	}
//	cout << "result" << endl;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//
//	for (int i = 0; i < N; i++) {
//		delete[]ptr[i];
//
//	}
//
//	delete[] ptr;
//
//
//}
////
////bool checkrows(int** ptr, int index,int col, int x,int N) {
////	bool flag = true;
////	for (int i = index; i < N; i++) {
////		if (x == ptr[i][col]) {
////			flag = false;
////		}
////	}
////}
//
