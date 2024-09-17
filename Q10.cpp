
// Muhammad Saad Mursaleen
// 22I-0835

//#include<iostream>
//using namespace std;
//void printF(int len,int lencop ,int width, char ch);
//void printE(int len,int lencop ,int width, char ch);
//void printch(int x, char ch);
//
//int main() {
//	char ch, ch2;
//	int len, wid;
//	cout << "Was the assignment difficult ; Y/N : ";
//	cin >> ch;
//	cout << "Enter length of grade : ";
//	cin >> len;
//	cout << "Enter width od grade : ";
//	cin >> wid;
//	cout << "Enter symbol to be used : ";
//	cin >> ch2;
//	switch (ch) {
//	case'Y':
//		printF(len, len, wid, ch2);
//		break;
//
//		case'N':
//			printE(len,len,wid,ch2);
//			break;
//		
//	}
//}
//
//void printF(int len, int lencop, int width,  char ch) {
//	if (len == lencop) {
//		printch(width,ch);
//		cout << endl;
//		printF(len - 1, lencop, width, ch);
//		return;
//	}
//	else if(len==lencop/2) {
//		printch(width,ch);
//		cout << endl;
//		printF(len - 1, lencop, width, ch);
//		return;
//	}
//	else if (len <= 0) {
//		return;
//	}
//	else {
//		printch(1,ch);
//		cout << endl;
//		printF(len - 1, lencop, width, ch);
//	}
//}
//void printE(int len, int lencop, int width, char ch) {
//	if (len == lencop) {
//		printch(width, ch);
//		cout << endl;
//		printE(len - 1, lencop, width, ch);
//		return;
//	}
//	else if (len == lencop / 2) {
//		printch(width, ch);
//		cout << endl;
//		printE(len - 1, lencop, width, ch);
//		return;
//	}
//	else if (len < 0) {
//		return;
//	}
//	else if (len == 0) {
//		printch(width, ch);
//		cout << endl;
//		printE(len - 1, lencop, width, ch);
//		return;
//	}
//	else {
//		printch(1, ch);
//		cout << endl;
//		printE(len - 1, lencop, width, ch);
//	}
//}
//
//void printch(int x,char ch) {
//	if (x <= 0) {
//		return;
//	}
//	else {
//		cout << ch;
//		printch(x - 1,ch);
//	}
//}
//
//
