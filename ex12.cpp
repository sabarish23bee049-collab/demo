#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;

    try {
        // Use .length() to count the characters
        if (num.length() == 10) {
            throw 'a'; // Valid case
        } else {
            throw 1;   // Invalid case
        }
    } 
    catch (int x) {
        cout << num << endl;
        cout << "The mobile number should have 10 digits";
    } 
    catch (char y) {
        cout << num << endl;
        cout << "The entered mobile number is valid";
    }

    return 0;
}
