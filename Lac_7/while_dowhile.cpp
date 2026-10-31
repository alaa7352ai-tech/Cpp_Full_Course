#include<iostream>
using namespace std;
int main()
{
	
/*
	//while
	// äİÓ Úãá ÇáİæÑ
	
	
	int x=1;
	while(x<=5)
	{
		cout<<x<<endl;
		x++;
	}*/
	
	
/*
//	ÈÑäÇãÌ íÓÊãÑ ÇáØáÈ ãä ÇáãÓÊÎÏã ÇÏÎÇá ÇáÇÚÏÇÏ ÇáãæÌÈÉ İŞØ æÇĞÇ 
//	ÇÏÎá ÚÏÏ ÓÇáÈ íÊæŞİ ÇáÈÑäÇãÌ æíØÈÚ ãÌãæÚ ÇáãÏÎáÇÊ ÇáÓÇÈŞÉ
	int sum=0;// íÌÈ ÊÚÑíİå ÎÇÑÌ ÇáÍáŞå
	int num;
	cout<< "enter a positive number:";// ÈÏæä ÚãáíÉ ÇáÇÏÎÇá ÇáÇæáì ÈíÌãÚ Çí ÚÏÏ ãæÌæÏ İí ÇáĞÇßÑå ãÓÈŞÇ
	cin>>num;
	while(num >=0)
	{	   
	   sum+=num;	   
	   cout<<"enter a positive number again:";
   	   cin>>num;		
	}
	cout<<"the sum ="<<sum<<endl;// íÌÈ Çä Êßæä ÎÇÑÌ ÇáÍáŞå
	
    system("start D:/c++/Lac_7/while_1.PNG");*/
    


/*
// äİÓ ÇáÓÄÇá áßä ÈÇÓÊÎÏÇã áæÈ ÇáİæÑ
    int sum=0;
    int num;
	cout<< "enter a positive number:";
	cin>>num;
for ( ; num >= 0;)
{
       sum+=num;
       cout<<"enter a positive number again:";
   	   cin>>num;
}
cout<<"the sum ="<<sum<<endl;*/






//while Êßáíİ ÊÍæíá åĞÇ ÇáßæÏ Çáì 

/*
  // ÈÑäÇãÌ íÍÓÈ ãÖÑæÈ ÚÏÏ ãÏÎá
  
  int fact =1;// ÇáæÇÍÏ åæ ãÍÇíÏ ÇáÖÑÈ
  int n;
  cin>>n;
    
  for(int i=n ; i>=1 ;i--)
   	fact *=i;//fact=fact*i
   	
  cout<<fact<<endl;*/	
	
	

/*
// ÖÑÈ ÑŞã ãÏÎá İí 2 æíÓÊãÑ İí ÊßÑÇÑ Ïæä ÊæŞİ	
  int number;

    // ÍáŞÉ ÊßÑÇÑíÉ ãÓÊãÑÉ ÈáÇ äåÇíÉ
    while (true) {// íãäÚ ÊÑß ÇáÇŞæÇÓ İÇÑÛÉ
        cout << "Enter a number: "; // ÃÏÎá ÑŞãÇğ
        cin >> number;

        // ØÈÇÚÉ ÖÚİ ÇáÑŞã
        cout << "Double is: " << (number * 2) << "\n\n"; // ÇáÖÚİ åæ
    }
	system("start D:/c++/Lac_7/while_2.PNG");*/	
	
	
	
	
	
/*
	// ÊÊæŞİ ÇĞÇ ÇÏÎá ÑŞã ÕİÑ
	int number;

    while (true) {
        cout << "Enter a number (Enter 0 to stop): "; 
        cin >> number;
        
        if (number == 0) {
            break; 
        }

        cout << "Double is: " << (number * 2) << "\n\n"; 
    }
    
	system("start D:/c++/Lac_7/while_3.PNG");*/
    
    
/*
   // ÊÊæŞİ ÈÚÏ ãÑæÑ ÇÑÈÚ ÏæÑÇÊ
	
	int number;
    int count = 0; 

    while (true) {
        cout << "Enter a number: "; 
        cin >> number;

        cout << "Double is: " << (number * 2) << "\n\n"; 
        
        count++; 
        if (count == 4) {
            break; 
        }
    }system("start D:/c++/Lac_7/while_4.PNG");*/
    
	
	

/*
	// ÇáÎÑæÌ ÚäÏ ÇÏÎÇá ÇáÑŞã 11
	int number =0;// áÇÌá áÇ íÚØíäí ŞíãÉ ÚÔæÇÆíÉ İí ÇáĞÇßÑÉ
    while (number !=11) {
        cout << "Enter a number: "; 
        cin >> number;

        cout << "Double is: " << (number * 2) << "\n\n"; 
		}
    
	system("start D:/c++/Lac_7/while_5.PNG");*/
	
		
	

/*
// ÇÏÎÇá ÇáÑãÒ æíÚØí ËáÇË ãÍÇæáÇÊ ÚäÏ ÇáÇÎİÇŞ 

    // =========================================================
    // ÇáãÑÍáÉ 1: ÊÚÑíİ ÇáËæÇÈÊ æÇáãÊÛíÑÇÊ
    // =========================================================
    int pin;
    const int CORRECT_PIN = 7777; // ÇáÑãÒ ÇáÕÍíÍ
    int attempts = 0;           // ÚÏÇÏ ÇáãÍÇæáÇÊ ÇáİÇÔáÉ
    const int MAX_ATTEMPTS = 3; // ÇáÍÏ ÇáÃŞÕì ááãÍÇæáÇÊ

    // =========================================================
    // ÇáãÑÍáÉ 2: ÍáŞÉ ÇáÊÍŞŞ ãä ÇáÑãÒ ÇáÓÑí
    // =========================================================
    while (attempts < MAX_ATTEMPTS) {
        cout << "Enter PIN: "; // ÃÏÎá ÇáÑãÒ ÇáÓÑí
        cin >> pin;

        // 1. İÍÕ ÕÍÉ ÇáÑãÒ
        if (pin == CORRECT_PIN) {
            cout << "\nWelcome!" << endl; // ãÑÍÈÇğ Èß!
            return 0; // ÇáÏÎæá ÈäÌÇÍ æÅÛáÇŞ ÇáÈÑäÇãÌ ãÈÇÔÑÉ
        } 
        // 2. ÇáÊÚÇãá ãÚ ÇáÅÏÎÇá ÇáÎÇØÆ
        else {
            attempts++; // ÒíÇÏÉ ÚÏÏ ÇáãÍÇæáÇÊ ÇáİÇÔáÉ
            int remaining = MAX_ATTEMPTS - attempts; // ÍÓÇÈ ÇáãÍÇæáÇÊ ÇáãÊÈŞíÉ

            if (remaining > 0) {
                cout << "Wrong PIN! Remaining: " << remaining << "\n\n"; // ÑãÒ ÎÇØÆ! ÇáãÊÈŞí áÏíß: X ãÍÇæáÇÊ
            }
        }
    }

    // =========================================================
    // ÇáãÑÍáÉ 3: ÇáÑÓÇáÉ ÇáäåÇÆíÉ ÈÚÏ ÇÓÊäİÇÏ ÌãíÚ ÇáãÍÇæáÇÊ
    // =========================================================
    // áä íÕá ÇáßæÏ áåĞÇ ÇáÓØÑ ÅáÇ ÅĞÇ ÇäÊåÊ ÇáãÍÇæáÇÊ ÇáËáÇË Ïæä ÅÏÎÇá ÇáÑãÒ ÇáÕÍíÍ
    cout << "\nAccess Denied! System locked." << endl; // Êã ÑİÖ ÇáæÕæá! Êã Şİá ÇáäÙÇã*/

	

// æíæÌÏ ãËÇá ãÊŞÏã İí ÇáßæÏ ÈáæßÓ







//do_while
/*
íŞæã ÈØÈÇÚÉ ÇáÇæÇãÑ ÏÇÎá ÇáÍáŞÉ ãÑÉ æÇÍÏÉ Úáì ÇáÇŞá ÍÊì æáæ ßÇä ÇáÔÑØ ÛíÑ ãÍŞŞ 
áÇä ãæŞÚ ÇáÔÑØ íÃÊí İí äåÇíÉ ÇáÍáŞÉ
*/



/*
//íÓÊãÑ İí ÇÏÎÇá ÇáÇÚÏÇÏ æÇĞÇ ÏÎá ÚÏÏ ÓÇáÈ íæŞİ ÇáÇÏÎÇá do_while ÈÑäÇãÌ ÈÇÓÊÎÏÇã 

int x;
do
{
	cout<<"enter the number:";
	cin>>x;
	
}while(x>0);

cout<<"Exit the program!"<<endl;

system("start D:/c++/Lac_7/while_6.PNG");*/





/*
// ÈÑäÇãÌ ÍÓÇÈ ÇáÓÚÑ ÇáäåÇÆí ÈÚÏ ÇáÎÕã ááãäÊÌ
    double p; // ÇáÓÚÑ ÇáÃÕáí (Price)
    double d; // äÓÈÉ ÇáÎÕã (Discount rate)
    double f; // ÇáÓÚÑ ÇáäåÇÆí (Final price)
    char c;   // ÎíÇÑ ÇáÊßÑÇÑ (Choice / again)

    do {
        cout << "\n--- DISCOUNT CALCULATOR ---" << endl; // ÍÇÓÈÉ ÇáÎÕã

        // 1. ÃÎĞ ÇáÈíÇäÇÊ æÅÌÑÇÁ ÇáÍÓÇÈÇÊ
        cout << "Price: "; // ÇáÓÚÑ ÇáÃÕáí
        cin >> p;

        cout << "Discount %: "; // äÓÈÉ ÇáÎÕã
        cin >> d;



         
           ÔÑÍ ÇáãÚÇÏáÉ: f = p - (p * (d / 100.0));
           --------------------------------------------------
           1. (d / 100.0) : ÊÍæíá ÇáäÓÈÉ áßÓÑ ÚÔÑí (15% = 0.15).
                            ÇÓÊÎÏÇã 100.0 íÖãä ŞÓãÉ ÚÔÑíÉ ÏŞíŞÉ.
           2. p * (...)   : ÍÓÇÈ ŞíãÉ ÇáÎÕã ÈÇáãÇá (200$ * 0.15 = 30$).
           3. p - (...)   : ØÑÍ ÇáÎÕã ãä ÇáÓÚÑ ÇáÃÕáí áíÚØí ÇáÓÚÑ ÇáäåÇÆí (200 - 30 = 170$).
        
        // ÇáãÚÇÏáÉ: ÇáÓÚÑ ÇáäåÇÆí = ÇáÓÚÑ ÇáÃÕáí - ŞíãÉ ÇáÎÕã
        f = p - (p * (d / 100.0));

        cout << "Final price: " << f << endl; // ÇáÓÚÑ ÇáäåÇÆí ÈÚÏ ÇáÎÕã

        // 2. ÓÄÇá ÇáãÓÊÎÏã Úä ÇáÅÚÇÏÉ
        cout << "Another? (y/n): "; // ÍÓÇÈ ãäÊÌ ÂÎÑ¿
        cin >> c;//  yíÏá Úáì Çí ÍÑİ ãÇÚÏÇ n

    // 3. ÇáÔÑØ: ÅĞÇ ßÇä ÇáÌæÇÈ y Ãæ Y ÊÓÊãÑ ÇáÍáŞÉ
    } while (c == 'y' || c == 'Y');

    cout << "Done!" << endl; // Êã ÇáÅÛáÇŞ
*/




/*
  Êßáíİ
 äÙÇã ÇáÕÑÇİ ÇáÂáí  Yemen Bank

ÇßÊÈ ÈÑäÇãÌÇğ ÈáÛÉ C++ íÍÇßí Úãá ÕÑÇİ Âáí ÈÑÕíÏ ÇÈÊÏÇÆí ãŞÏÇÑå 5000 ÏæáÇÑ:

1. ÇáÊÍŞŞ ãä ÇáÑãÒ ÇáÓÑí:
   ÇÓÊÎÏã ÍáŞÉ while áØáÈ ÇáÑãÒ ÇáÓÑí ãä ÇáãÓÊÎÏã ÈÔßá ãÊßÑÑ ÍÊì íÏÎá ÇáÑãÒ ÇáÕÍíÍ 1234

2. ÇáŞÇÆãÉ ÇáÑÆíÓíÉ:
   ÇÓÊÎÏã ÍáŞÉ do while áÚÑÖ ÇáŞÇÆãÉ ÇáÊÇáíÉ æÊßÑÇÑåÇ:
   1. İÍÕ ÇáÑÕíÏ - Check balance
   2. ÓÍÈ ãÈáÛ - Withdraw cash
   3. ÅíÏÇÚ ãÈáÛ - Deposit money
   4. ÇáÎÑæÌ - Quit

3. ãÚÇáÌÉ ÇáÎíÇÑÇÊ:
   ÇÓÊÎÏã ÌãáÉ switch case áÊäİíĞ ÇáÚãáíÉ ÇáãÎÊÇÑÉ æÊÍÏíË ÇáÑÕíÏ ÈäÇÁ ÚáíåÇ

*/
	   



	
	return 0;
}