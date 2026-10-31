/* 
function
 åí ßÊáÉ ÈÑãÌíÉ ãÓÊŞáÉ ÊõäİĞ ãåãÉ ãÍÏÏÉ
  - ÇÚÇÏÉ ÇáÇÓÊÎÏÇã (Reusability):
    äßÊÈ ßæÏ ÇáãåãÉ ãÑÉ æÇÍÏÉ İŞØ¡ æäÓÊÏÚíå ãÊì ÔÆäÇ İí ÇáÈÑäÇãÌ Ïæä ÊßÑÇÑ

  - ÊŞÓíã ÇáãÔÇßá ÇáßÈíÑÉ:
    ÇáÏæÇá ÊÓãÍ áäÇ ÈÊİßíß ÈÑäÇãÌ ÖÎã æãÚŞÏ Åáì ÃÌÒÇÁ ÕÛíÑÉ  ÈÓíØÉ ææÇÖÍÉ

  - ÓåæáÉ ÇáÊÚÏíá æÇßÊÔÇİ ÇáÃÎØÇÁ:
     ÈİÖá åĞÇ ÇáÊŞÓíã¡ áæ ÍÏË ÎØÃ ÓäŞæã ÈÊÚÏíáå İí ãßÇä æÇÍÏ İŞØ (ÏÇÎá ÇáÏÇáÉ)
     ÓíäÚßÓ ÇáÊÚÏíá ÊáŞÇÆíÇğ Úáì ßÇãá ÇáÈÑäÇãÌ
   


ÂáÉ ÇáÚãá æŞÊ ÇáÊÔÛíá:

áíŞÑÃ ÓØÑ ÈÓØÑ main ÚäÏ ÊÔÛíá ÇáÈÑäÇãÌ¡ íÈÏÃ ÇáÊäİíĞ ãä ÇáÏÇáÉ ÇáÑÆíÓíÉ
æÚäÏãÇ íÕÇÏİ ÇÓÊÏÚÇÁ ÏÇáÉ íÍÏË ÇáÂÊí:

  1. íÊæŞİ ÇáÈÑäÇãÌ ãÄŞÊÇğ ÚäÏ ÓØÑ ÇáÇÓÊÏÚÇÁ
  2. íŞİÒ İæÑÇğ Åáì Êáß ÇáÏÇáÉ áíäİĞ ÃæÇãÑåÇ
  3. main Ëã íÚæÏ ááŞÑÃå áäİÓ ÇáäŞØÉ ÇáÊí ÊæŞİ İíåÇ Úä (returnÈãÌÑÏ ÇäÊåÇÁ ÇáÏÇáÉ (Ãæ æÕæáåÇ áßáãÉ

*/







/*	
	1) Function Declaration ÊÕÑíÍ Çæ ÇÚáÇä Úä ÇáÏÇáÉ:
		
	      æíÊã ÊÍÏíÏ İíåÇ Function Prototype æÊÓãì ÇíÖÇ 
	        - Return Type äæÚ ÇáŞíãÉ ÇáãõÑÌÚÉ
	        - Function Name ÇÓã ÇáÏÇáÉ
	        - Parameters ÇáãõÚÇãáÇÊ
	        
	      int go(int x, int y); //main ÈæÌæÏ ÇáİÇÕáÉ ÇáãäŞæØÉ æíßÊÈ ÚÇÏÉ ÇÚáì ÏÇáÉ 
	      
	
	2) Function Definition ÊÚÑíİ ÇáÏÇáÉ :
	
	        - Header ÊÑæÓíÉ ÇáÏÇáÉ
	        - Body ÌÓã ÇáÏÇáÉ(ÇáÈáæß)
	        
	        int go(int x, int y){}// main æÚÇÏÉ Êßæä ÇÓİá ÏÇáÉ 
	        
	 ŞÇÚÏå :
	   ÅĞÇ ßÊÈäÇ ÇáÏÇáÉ ÊÍÊ main¡ íÌÈ ÇáÊÕÑíÍ ÚäåÇ İæŞ
	   ÃãÇ ÅĞÇ ßÊÈäÇåÇ İæŞ main¡ İÇáÊÚÑíİ íÛäí Úä ÇáÊÕÑíÍ æáÇ äÍÊÇÌ áßÊÇÈÊå     
	        
	3) Parameter Passing ÊãÑíÑ ÇáãÚÇãáÇÊ
	        
			- Parameters ÇáãÚÇãáÇÊ :
			      ÇáãÓÊŞÈá ááÈíÇäÇÊ  
				  
			- Arguments ÇáæÓÇÆØ :
			    ÇáŞíã ÇáİÚáíÉ ÇáÊí ÊÌáÈ ÚäÏ ÇáÇÓÊÏÚÇÁ
				
				
				ÇäæÇÚ ÇáÊãÑíÑÇÊ:
				   
				1- Pass by Value ÇáÊãÑíÑ ÈÇáŞíãÉ
					æåæ ÇáäæÚ ÇáÇİÊÑÇÖí. æİíå äõÑÓá ááÏÇáÉ "äÓÎÉ" İŞØ ãä ÇáŞíãÉ ÇáÃÕáíÉ
					áæ ŞÇãÊ ÇáÏÇáÉ ÈÊÚÏíá åĞå ÇáäÓÎÉ İÅä ÇáŞíãÉ ÇáÃÕáíÉ İí ÇáÈÑäÇãÌ áÇ ÊÊÃËÑ äåÇÆíÇğ
					
				2- Pass by Reference ÇáÊãÑíÑ ÈÇáãÑÌÚ
				     &æİíå äõÑÓá "ÇáãßÇä ÇáİÚáí" ááãÊÛíÑ İí ÇáĞÇßÑÉ ÈÇÓÊÎÏÇã ÚáÇãÉ	
					  Ãí ÊÚÏíá íÍÏË ÏÇÎá ÇáÏÇáÉ ÓíÄÏí Åáì ÊÛííÑ ÇáŞíãÉ ÇáÃÕáíÉ İí ÇáÈÑäÇãÌ   
*/



/*
// Şæã ÈÇäÔÇÁ ÏÇáÉ ÊÌãÚ ÚÏÏíä

#include<iostream>
using namespace std;

// ÇáÊÕÑíÍ Úä ÇáÏÇáÉ (ÇáäŞØÉ ÇáÃæáì)
int sum(int num1, int num2);

int main() {
    int a = 5;
    int b = 10;
    
    // åäÇ äÓÊÏÚí ÇáÏÇáÉ æäãÑÑ áåÇ ÇáãÊÛíÑíä (ÇáæÓÇÆØ)
    // áíÊã ÌãÚåãÇ a,b ŞãäÇ ÈÊãÑíÑ 
    int total = sum(a, b); 
    
    cout << "Total = " << total;
    return 0;
}

// ÊÚÑíİ ÇáÏÇáÉ (ÇáäŞØÉ ÇáËÇäíÉ)
int sum(int num1, int num2) {
    return num1 + num2;
}*/



/*

// İÑŞ ÇáÏæÇá ÈãÚÇãáÇÊ æÈÏæä ãÚÇãáÇÊ 
#include <iostream>
using namespace std;

// ÏÇáÉ ÈÏæä ãÚÇãáÇÊ (ÃŞæÇÓ İÇÑÛÉ)
// æÙíİÊåÇ ËÇÈÊå
void sayHi() {
    cout << "Hi there!" << endl;
}

//  ÏÇáÉ ÊÍÊæí Úáì ãÚÇãáÇÊ (Èíä ÇáÃŞæÇÓ ãÊÛíÑ)
// æÙíİÊåÇ ãÊÛíÑÉ: ÊÖÑÈ ÇáÑŞã ÇáĞí äÑÓáå áåÇ 
void printDouble(int number) {
    cout << "Double is: " << number * 2 << endl;
}

int main() {
    // ÇÓÊÏÚÇÁ ÇáÏÇáÉ ÇáÃæáì: ÃŞæÇÓ İÇÑÛÉ áÃäåÇ áÇ ÊØáÈ ÈíÇäÇÊ
    sayHi(); 
    
    // ÇÓÊÏÚÇÁ ÇáÏÇáÉ ÇáËÇäíÉ: íÌÈ Ãä äÖÚ ÑŞãÇğ ÏÇÎá ÇáÃŞæÇÓ áÊÚãá
    printDouble(5);  // ÓÊØÈÚ 10
    printDouble(20); // ÓÊØÈÚ 40
    
    return 0;
}*/





/*
//int , void ÇáİÑŞ Èíä 

#include <iostream>
using namespace std;

// 1. ÏÇáÉ ÊÑÌÚ ŞíãÉ 
int multiply(int a, int b) {//main æáÇ íÍÊÇÌ ÊÕÑíÍ áÇä ÇáÏÇáå ßÊÈÊ ÇÚáì 
    return a * b; // ÇÑÌÇÚ ÇáäÊíÌÉ
}

// 2. ÏÇáÉ áÇ ÊÑÌÚ ŞíãÉ ááÈÑäÇãÌ ÊÑÌÚ ááãÓÊÎÏã Úáì ÇáÔÇÔå ÇáÓæÏÇÁ
void printWelcome() {
    cout << "Welcome to C++ Lab!" << endl;
    //áÚÏã æÌæÏ ŞíãÉ ãÑÌÚíå return áä äßÊÈ
}

int main() {
    // ÇÓÊÏÚÇÁ ÇáÏÇáÉ ÇáÊí áÇ ÊÑÌÚ ŞíãÉ
    printWelcome(); 
    
    // ÇÓÊÏÚÇÁ ÇáÏÇáÉ ÇáÊí ÊÑÌÚ ŞíãÉ æ ÊÎÒíä äÊíÌÊåÇ İí ãÊÛíÑ
    int res = multiply(4, 5);
    cout << "Result = " << res;
    
    return 0;
}*/





// ãËÇá ÂÎÑ áÊæÖíÍ ÇáİÑŞ
/*

#include <iostream>
using namespace std;

// (ÊØÈÚ ÇáäÊíÌÉ ááÅäÓÇä İŞØ)
void printNum(int n) {
    cout << "Print: " << n * 2 << endl; 
}

//  (ÊõÑÌÚ ÇáäÊíÌÉ ááÈÑäÇãÌ äİÓå)
int getNum(int n) {
    return n * 2; 
}

int main() {
    
    // ãÚ ÇáÏÇáÉ void:
    printNum(5); // ÓÊØÈÚ 10 Úáì ÇáÔÇÔÉ æÊäÊåí.
    
    // áæ ÍÇæáäÇ ÍİÙ ÇáäÊíÌÉ áäßãá ÚáíåÇ ÍÓÇÈÇÊ¿ ÓíÚØíäÇ ÇáãÊÑÌã ÎØÃ
    // int x = printNum(5); //  ÎØÃ ÈÑãÌí áÃä ÇáÏÇáÉ áÇ ÊõÑÌÚ ÔíÆÇğ ááÈÑäÇãÌ
    

    // ãÚ ÇáÏÇáÉ int:
    int res = getNum(5); // res ÇáÏÇáÉ ÃÑÌÚÊ 10 ÈÕãÊ¡ æÊã ÊÎÒíäåÇ İí ÇáãÊÛíÑ 
    
    // ÇáÂä ÇáÈÑäÇãÌ íãÊáß ÇáÑŞã 10 İí ÇáĞÇßÑÉ¡ æíãßääÇ ÅßãÇá ÍÓÇÈÇÊäÇ Úáíå
    cout << "Res + 3 = " << res + 3 << endl; // ÓíØÈÚ 13
    
    return 0;
}






/*
// ÇÚÇÏå ÇÓÊÎÏÇã ŞÇäæä ãÓÇÍÉ ÇáãÓÊØíá
#include <iostream>
using namespace std;

// ÏÇáÉ ÌÇåÒÉ (æÍÏÉ ŞÇÈáÉ áÅÚÇÏÉ ÇáÇÓÊÎÏÇã) áÍÓÇÈ ãÓÇÍÉ ÇáãÓÊØíá
int Area(int length, int width) {
    return length * width;
}

int main() {
    // ÇÓÊÎÏãäÇ äİÓ ÇáßæÏ (ÇáÏÇáÉ) áÍÓÇÈ ãÓÇÍÉ 3 ÛÑİ ãÎÊáİÉ ÈÏæä ÅÚÇÏÉ ßÊÇÈÉ ãÚÇÏáÉ ÇáÖÑÈ!
    
    int room1 = Area(5, 4);
    int room2 = Area(6, 6);
    int room3 = Area(10, 5);
    
    cout << "Room 1 Area: " << room1 << endl;
    cout << "Room 2 Area: " << room2 << endl;
    cout << "Room 3 Area: " << room3 << endl;
    
    return 0;
}*/






/*
// ÍáŞå ãä 1 Çáì 10 æÏÇáå ÊÍÏÏ ÇáÇÚÏÇÏ ÇáÒæÌíå ãäåÇ æ ÏÇáå ÊÍÏÏ ÇáÇÚÏÇÏ ÇáİÑÏíÉ 
#include<iostream.h>
void even_number()
{         cout<<"the numbers even : ";
	for(int i=1;i<=10;i++)
	{
	if (i%2==0)
	cout<<i<< "  ";
	}
	cout<<endl;
	
}
void odd_number()
{         cout<<"the numbers odd : ";
	for(int i=1;i<=10;i++)
	{
	if (i%2!=0)
	cout<<i<< "  ";
	}
	cout<<endl;
	
}
int main()
{
	
even_number();	
odd_number();	
	
	return 0;
}*/





/*
// ÇáİÑŞ Èíä ãÊÛíÑ ÚÇã æ ãÍáí(äØÇŞ ÇáãÊÛíÑÇÊ Scope)

#include <iostream>
using namespace std;

// ãÊÛíÑ ÚÇã (Global): íÑÇå ÇáÌãíÚ
int globalVar = 100; 

void dis() {
    // ãÊÛíÑ ãÍáí (Local): ÎÇÕ ÈåĞå ÇáÏÇáÉ İŞØ
    int localVar = 10; 
    
    cout << "Global inside dis = " << globalVar << endl; // ÓíÚãá
    cout << "Local inside dis = " << localVar << endl;   // ÓíÚãá
}

int main() {
	
    dis();
    
    cout << "Global inside main: " << globalVar << endl; // ÓíÚãá
    
    // cout << localVar; // ÎØÃ ÈÑãÌí! ÇáÏÇáÉ  áÇ ÊÓÊØíÚ ÑÄíÉ ÇáãÊÛíÑ ÇáãÍáí ÇáÎÇÕ ÈÏÇáÉ ÃÎÑì
    
    return 0;
}*/


