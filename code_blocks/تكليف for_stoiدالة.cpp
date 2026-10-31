#include <iostream>
using namespace std;
int main() {
	
    string input;
    for (;;) {
        cout << "enter the number (exit E/e): ";
        cin >> input;


        if (input == "E" || input == "e") {
            cout << "end!" << endl;
            break;
        }

        try {
            // تحويل النص الى رقم صحيح
            int number = stoi(input);

            if (number % 2 == 0) {
                cout << " (" << number << ") even." << endl;
            } else {
                cout << " (" << number << ") odd." << endl;
            }
        }
        catch (...) {
            // ادخلت حرف خطأ
            cout << "enter error." << endl;
        }

        cout << "-----------------------------------------------" << endl;
    }

    return 0;
}