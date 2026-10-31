#include<iostream>
//#define PI 3.14159        ÊÚÑíİ ËÇÈÊ ŞÏíãÇ
using namespace std;
int main()
{
	// ÊÚÑíİ ËÇÈÊ ÈÇí ÇáÑíÇÖí
    const double PI = 3.14159;

    cout << "====== Constant Example ======" << endl;
    cout << "PI value is: " << PI << endl;

     // ÇáÓØÑ ÇáÊÇáí ÓíÓÈÈ ÎØÃ áæ ŞãäÇ ÈÊİÚíáå áÃä ÇáãÊÛíÑ ËÇÈÊ æããäæÚ ÊÛííÑå
    // PI = 3.14;
    
    
    // íÚÑİ Èíä ÇáãÈÑãÌíä Çä ÇÓãÇÁ ÇáãÊÛíÑÇÊ ÇĞÇ ßÊÈÊ ÈÇáÇÍÑİ ÇáßÈíÑå íÚäí ËÇÈÊ
    
    const double GRAVITY = 9.8;           // ËÇÈÊ Úáãí : ÇáÌÇĞÈíÉ ÇáÃÑÖíÉ
    const int MAX_USERS = 100;            // ËÇÈÊ ÎÇÕ : ÚÏÏ ÇáãÓÊÎÏãíä 
    
    
    
    // æáÇ íÌæÒ ÇÏÎÇá ŞíãÉ áÊÕÈÍ ËÇÈÊ 
    // ÊæÌÏ ØÑíŞÉ ÈÏíáå áÚãá Ğáß åæ ÈÇÎĞå İí ãÊÛíÑ
    // temp åí ßáãå ãÚÑæİÉ Èíä ÇáãÈÑãÌíä áãÊÛíÑ ãÄŞÊ
    
    int temp;
    cin >> temp;
    
    const int CHEESE_POINTS = temp;
    cout << "const the number for  : " << CHEESE_POINTS << "\n";
	
	
	// code blocks ÇáËæÇÈÊ İí 
	
	return 0;
}