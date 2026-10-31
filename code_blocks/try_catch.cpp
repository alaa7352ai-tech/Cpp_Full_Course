#include <iostream>
#include <new> // ãßÊÈÉ ÎÇÕÉ ÈÇÓÊËäÇÁÇÊ ÇáĞÇßÑÉ ÇáÚÔæÇÆíÉ
using namespace std;

int main() {

    try {
        // ãÍÇæáÉ ÍÌÒ ãÓÇÍÉ åÇÆáÉ ÌÏÇğ İí ÇáĞÇßÑÉ ÇáÚÔæÇÆíÉ (RAM)
        cout << "Requesting huge memory allocation..." << endl; // ÌÇÑí ØáÈ ãÓÇÍÉ åÇÆáÉ ãä ÇáĞÇßÑÉ...

        long long* hugeArray = new long long[1000000000000000000LL];// ÊÑíáíæä

        cout << "Memory allocated successfully!" << endl; // Êã ÍÌÒ ÇáĞÇßÑÉ ÈäÌÇÍ! (áä íÕáå ÇáßæÏ)
    }
    catch (const bad_alloc& e) {
        // ãÚÇáÌÉ ÚÌÒ ÈíÆÉ ÇáÊÔÛíá ÚäÏ äİÇÏ ÇáĞÇßÑÉ
        cout << "\n[Environment Exception]: Out of RAM!" << endl; // [ÇÓÊËäÇÁ ÈíÆÉ ÇáÊÔÛíá]: äİÏÊ ÇáĞÇßÑÉ ÇáÚÔæÇÆíÉ!
        cout << "System Error: " << e.what() << endl;           // ÎØÃ ÇáäÙÇã ÈÇáÊİÕíá
    }

    // ÇÓÊãÑÇÑ ÇáÈÑäÇãÌ İí ÇáÚãá ÈÔßá ØÈíÚí ÑÛã ÇáßÇÑËÉ ÇáÊí ÍÏËÊ
    cout << "\nProgram is still running safely." << endl; // ÇáÈÑäÇãÌ ãÇ ÒÇá íÚãá ÈÃãÇä Ïæä ÇäåíÇÑ

    return 0;
}
