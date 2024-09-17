
// Muhammad Saad Mursaleen
// 22I-0835

#include<iostream>
using namespace std;
void check(char* str, char* pass, int x1,int y);
int main() {
	const int size = 50;
	char arr[size];
	cout << "Enter the string to be checked : ";
	cin.getline(arr, size);
	char arr2[size];
	cout << "Enter password : ";
	cin.getline(arr2, size);

//	cout << sizeof(arr);

	//cout << arr << endl;
	//cout << arr2 << endl;
	int flag = false;
	check(arr, arr2,0,0);

}

void check(char* str, char* pass, int x1, int y) {
	bool flag = true;
	int x = 0;
	if (pass[x1] == '\0') {
		return;
	}


	
		while (str[x] != NULL) {
			if (str[x] == pass[x1]) {
				cout << pass[x1] << endl;
			}
			x++;
		}

		check(str + 1, pass, x1 + 1, y);
	return;
}
