//#include <iostream>
//
//bool bruteForce(char charset[], char password[], char current[], int index, int passwordLength) {
//    // Base case: if the current string matches the password, return true.
//    if (current[index] == '\0' && password[index] == '\0') {
//        std::cout << "Password found: " << current << std::endl;
//        return true;
//    }
//
//    // Base case: if the current index is equal to the password length, return false.
//    if (index == passwordLength) {
//        return false;
//    }
//
//    // Recursive case: Try adding each character from the charset to the current string.
//    for (int i = 0; charset[i] != '\0'; ++i) {
//        current[index] = charset[i]; // Add a character
//        if (bruteForce(charset, password, current, index + 1, passwordLength)) {
//            return true; // Password found in this branch
//        }
//    }
//
//    return false; // Password not found in this branch
//}
//
//int main() {
//    char charset[] = "abc";
//    char password[] = "bkc";
//    char current[sizeof(password)] = "";
//
//    if (bruteForce(charset, password, current, 0, sizeof(password) - 1)) {
//        std::cout << "Password matched!" << std::endl;
//    }
//    else {
//        std::cout << "Password not found." << std::endl;
//    }
//
//    return 0;
//}
