
// Muhammad Saad Mursaleen
// 22I-0835

//#include<iostream>
//using namespace std;
//bool checkA(int** A);
//bool checkB(int** B);
//bool checkC(int** C);
//int main() {
//	int** A;
//
//	A = new int* [4];
//	for (int i = 0; i < 4; i++) {
//		A[i] = new int[5];
//	}
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 5; j++) {
//			A[i][j] = (100 * i) + j+1;
//		}
//	}
//
//	int** B = new int* [3];
//	for (int i = 0; i < 3; i++) {
//		B[i] = new int[5];
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//		B[i][j] = (100 * i) + j+1;
//		}
//	}
//
//	int** C = new int* [7];
//	for (int i = 0; i < 7; i++) {
//		C[i] = new int[5];
//	}
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 5; j++) {
//			C[i][j] = (100 * i) + j+1;
//		}
//	}
//
//	//DISPLAYING ALL THE BLOCKS AND CLASSES
//
//	cout << "BLOCK-A" << endl;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (i == 0) {
//				cout << "00";
//			}
//			cout<<A[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "BLOCK-B" << endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (i == 0) {
//				cout << "00";
//			}
//			cout<<B[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "BLOCK_C" << endl;
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (i == 0) {
//				cout << "00";
//			}
//			cout<<C[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	bool flag = 1;
//	bool checkroom = false;
//	int room;
//	char block;
//	int floor = 0;
//	int roomno;
//	while (flag) {
//		cout << "Enter block where you want your room booked : " << endl;
//		cout << "Enter 0 if you want to end program" << endl;;
//		cin >> block;
//		if (block == '0') {
//			flag = false;
// 
//			continue;
//		}	
//
//		if (checkA(A) && checkB(B) && checkC(C)) {
//			flag = false;
//			continue;
//		}
//
//
//		
//		cout << "Which room do you want to book :- ";
//		cin >> room;
//		switch (block) {
//		case 'A':
//			floor = room / 100;
//			roomno = room % 100;
//			if (A[floor][roomno - 1] == 0) { 
//			cout << "Room Already Taken. Pls select an empty room." << endl;
//			}
//			A[floor][roomno-1] = 0;
//			break;
//		case 'B':
//			floor = room / 100;
//			roomno = room % 100;
//			if (B[floor][roomno - 1] == 0) {
//				cout << "Room Already Taken. Pls select an empty room." << endl;
//			}
//			B[floor][roomno-1] = 0;
//			break;
//		case 'C':
//			floor = room / 100;
//			roomno = room % 100;
//			if (C[floor][roomno - 1] == 0) {
//				cout << "Room Already Taken. Pls select an empty room." << endl;
//			}
//			C[floor][roomno-1] = 0;
//			break;
//
//
//		}
//
//
//		cout << "BLOCK-A" << endl;
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 5; j++) {
//				if (i == 0) {
//					cout << "00";
//				}
//				cout << A[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//		cout << "BLOCK-B" << endl;
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 5; j++) {
//				if (i == 0) {
//					cout << "00";
//				}
//				cout << B[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//		cout << "BLOCK_C" << endl;
//		for (int i = 0; i < 7; i++) {
//			for (int j = 0; j < 5; j++) {
//				if (i == 0) {
//					cout << "00";
//				}
//				cout << C[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//
//	for (int i = 0; i < 4; i++) {
//		delete[] A[i];
//	}
//	delete[] A;
//
//	for (int i = 0; i < 3; i++) {
//		delete[] B[i];
//	}
//	delete[] B;
//
//	for (int i = 0; i < 7; i++) {
//		delete[] C[i];
//	}
//	delete[] C;
//
//	return 0;
//
//}
//
//bool checkA(int** A) {
//	//BLOCK A
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (A[i][j] != 0) {
//				 return false;
//			}
//		}
//	}
//	return true;
//
//}
//
//bool checkB(int** B) {
//	//BLOCK A
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (B[i][j] != 0) {
//				return false;
//			}
//		}
//	}
//	return true;
//
//}
//
//bool checkC(int** C) {
//	//BLOCK A
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (C[i][j] != 0) {
//				return false;
//			}
//		}
//	}
//	return true;
//
//}