
// Muhammad Saad Mursaleen
// 22I-0835


#include<iostream>
using namespace std;
void fun(int x,int index);

void printspace(int x);
void printch(int x);
//int main() {
//	int x;
//	cout << "Enter the number of odd rows you want in your hollow diamond pattern : ";
//	cin >> x;
//	if (x % 2 == 0) {
//		x++;
//	}
//	fun(x,1);
//}

void fun(int x,int index) {
	if (index <= x) {
		printspace((x-index)/2);
		printch(1);
		if (index > 1) {
			printspace(2 * index -3);
			printch(1);

		}
		cout << endl;
		fun(x - 1, index + 1);
		if (x == index) {
			return;
		}
			printspace((x - index) / 2);
			printch(1);
			printspace(2 * index - 3);
			if (index == 1) {
				return;
			}
			printch(1);
			cout << endl;

	}


}

void printspace(int x) {
	if (x <= 0) {
		return;
	}
	else {
		cout << " ";
		printspace(x - 1);
	}
}

void printch(int x) {
	if (x <= 0) {
		return;
	}
	else {
		cout << "*";
		printch(x - 1);
	}
}
