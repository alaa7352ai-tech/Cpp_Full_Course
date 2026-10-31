#include <iostream>
using namespace std;

 main() {
    int year = 2026;

    cout << "========== to_string Example ==========" << endl;
    // يلزم ان يحمل الداله متغير من نوع نص
    string textYear = to_string(year);
    cout << "The year as text is: " << textYear << endl;
    cout << "Type of textYear is  : " << typeid(textYear).name() << endl;
    cout << "Type of textYear is : " << typeid(year).name() << endl;
    cout << "Number of digits: " << textYear.length() << endl;

    return 0;
}
