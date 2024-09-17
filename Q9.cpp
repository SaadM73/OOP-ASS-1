
// Muhammad Saad Mursaleen
// 22I-0835

#include<iostream>
using namespace std;
int calfact(int num);
//int main() {
//	int x, y, n, k;
//	cout << "Enter number to find its permutations : ";
//	cin >> x;
//	cout << "Enter how many groups do you want : ";
//	cin >> y;
//
//	int perm = (calfact(x) / calfact(x - y));
//	cout << " Permutations are " << perm << endl;
//
//	cout << "Enter n for the combinations : ";
//	cin >> n;
//	cout << "Enter k for the combinations : ";
//	cin >> k;
//
//	int comb = (calfact(n) / (calfact(k) * calfact(n - k)));
//	cout << "Combinations are " << comb << endl;
//
//}

int calfact(int num) {
	if (num == 1) {
		return 1;
	}
	else {
		return num * calfact(num - 1);
	}
}
