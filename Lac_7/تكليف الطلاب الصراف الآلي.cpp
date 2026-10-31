#include<iostream>
using namespace std;
int main()
{



    cout << "\t\t **************************************\n";
    cout << "\t\t\twelcome too Yemen bank\n";
    cout << "\t\t**************************************\n";

    int balance = 5000;
    int pin = 0, choice, withedraw, add; // Êã ÅÚØÇÁ pin ÞíãÉ ãÈÏÆíÉ áÊÌäÈ Þíã ÇáÐÇßÑÉ ÇáÚÔæÇÆíÉ

    while (pin != 1234) {
        cout << "enter your PIN:";
        cin >> pin;
    }

    do {
        cout << "\npress 1 to chek account \n";
        cout << "press 2 to withdeaw cash \n";	
        cout << "press 3 to add many too account \n";
        cout << "press 4 to Quit \n";
        
        cout << "Choose the number : ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "your account is $" << balance << endl;
            } break;

            case 2: {
                cout << "enter the  withedraw : ";
                cin >> withedraw;
                balance -= withedraw;
                cout << "your balance in account is $" << balance << endl;
            } break;
                
            case 3: {
                cout << "enter the many too add too account" << balance << endl;
                cin >> add;
                balance += add;
                cout << "your account is $" << balance << endl;
            } break;
                
            case 4: {
                cout << "\t\t **************************************\n";
                cout << "\t\t thenks for use our Yemen bank\n";
                cout << "\t\t **************************************\n"; // äÞá ÇáÓØÑ åäÇ ÞÈá break áÊØÈÚ ÇáäÌæã
            } break;
        }	
    } while (choice != 4);
    
 
 return 0;   
}