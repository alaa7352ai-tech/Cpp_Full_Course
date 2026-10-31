#include <iostream> 
#include <iomanip>
#include <fstream>
using namespace std; 

int main() 
{ 
   
    cout << "***************************************************\n";    
    cout << "\tPart 1 - Tom & Jerry: The Chase Begins!\n";// «·Ã“¡ «·√Ê· -  Ê„ ÊÃÌ—Ì:  »œ√ «·„ÿ«—œ…
    cout << "***************************************************\n\n";

    
    cout << "Tom:  /\\_/\\ \t\t\t\t Jerry:   ()() \n";
    cout << "     ( o.o ) \t\t\t\t         (o.o) \n";
    cout << "      > ^ <  \t\t\t\t        m(\")(\")m \n";

    cout << "\n___________________________________________________\n\n";

    
    // «·„”«›… «·«» œ«∆Ì…: 100 „ —
    cout << "Starting Distance : " << 100 << " meters\n";
    
    // ⁄„·Ì… Ã„⁄: ·Õ”«» ≈Ã„«·Ì «·ﬁ›“… «·√Ê·Ï · Ê„
    //  Ê„ ﬁ›“: (10 + 5) „ —
    cout << "Tom jumped: " << 10 + 5 << " meters\n";  
    
    // ⁄„·Ì… ÿ—Õ: ·Õ”«» «·„”«›… «·„ »ﬁÌ… »Ì‰  Ê„ ÊÃÌ—Ì
    // «·„”«›… «·„ »ﬁÌ…: 85 „ —
    cout << "Remaining Distance: " << 100 - 15 << " meters\n"; 
    cout << "___________________________________________________\n";


    
    cout << "\n\tReady... Set... RUN!!! \a\n\n\n\n";// «” ⁄œ...  ÃÂ“... «‰ÿ·ﬁ!!!
    
    




    cout << "\n***************************************************\n";
    cout << "\tPart 2 - Math & Logic in the Kitchen\n";// «·Ã“¡ «·À«‰Ì - «·Õ”«» Ê «·„‰ÿﬁ ›Ì «·„ÿ»Œ
    cout << "***************************************************\n\n";


/*
   Ê’› «·„ €Ì—« :
   playerName : „ €Ì— ‰’Ì° ÊŸÌ› Â  Œ“Ì‰ «”„ «·„” Œœ„ «·–Ì Ì·⁄» «·¬‰.
*/
    string playerName;
    cout << "1. Enter your name (Game Master): ";
    cin >> playerName;

    // «” Œœ«„ œ«·… Ã«Â“… ·„⁄—›… ÿÊ· «·«”„ «·„ﬂ Ê»
    cout << "-> Welcome [" << playerName << "]! Your name has " << playerName.length() << " letters.\n\n";
    cout << "----------------------------------------------------\n\n";
    
    

/*
   Ê’› «·„ €Ì—« : 
   isJerrySafe : „ €Ì— „‰ÿﬁÌ , Â· Â—» ÃÌ—Ì «·Ï „Œ»√Â «„ ·« (0 Ì⁄‰Ì ·«) 
   tomEnergy   : „ €Ì— —ﬁ„Ì ⁄‘—Ì° Ì„À· ÿ«ﬁ…  Ê„ «·Õ«·Ì….
   requiredEnergy: «·ÿ«ﬁ… «·„ÿ·Ê»…
*/

    bool isJerrySafe = false; // ·Ì” ›Ì √„«‰ Ì⁄‰Ì ÂÊ Œ«—Ã „Œ»√Â    
    double tomEnergy = 50.5;
	cout << "Tom current energy : " << tomEnergy << " %\n";
	 
    double requiredEnergy;  
    cout << "4. How much energy does Tom need to catch Jerry? ";
    cin >> requiredEnergy;


/*   
    ÕœÌÀ Õ«·… √„«‰ ÃÌ—Ì »‰«¡ ⁄·Ï «·„œŒ·« :
   ≈–« ﬂ«‰  «·ÿ«ﬁ… «·„ÿ·Ê»… ··Õ«ﬁ »Â √ﬂ»— „‰ ÿ«ﬁ…  Ê„ «·Õ«·Ì… 
   ( ’»Õ «·ﬁÌ„… true)”Ì‰ÃÊ ÃÌ—Ì ÊÌ’· ·„Œ»√Â
*/
    isJerrySafe = (requiredEnergy > tomEnergy);
    cout << "Is Jerry safe in his hole? .....   " << isJerrySafe << "\n";


// Â· «” ÿ«⁄  Ê„ «··Õ«ﬁ »ÃÌ—Ì
// ·‰ Ì„”ﬂ  Ê„ ÃÌ—Ì ≈·« »‘—ÿÌ‰ »«‰  ﬂÊ‰ ÿ«ﬁ…  Ê„ ﬂ«›Ì… Ê«‰ ÌﬂÊ‰ ÃÌ—Ì €Ì— ¬„‰ ›«·‰›Ì ·Õ«·… ÃÌ—Ì ÷—Ê—Ì…
    bool tomCatches = (tomEnergy >= requiredEnergy) && (!isJerrySafe);
    cout << "Can Tom catch Jerry? .....    " << tomCatches << "\n\n\n";


    cout << "\t     Thank you for playing!\n\n\n\n\n";




/*
‘—Õ „Ê÷Ê⁄ «·Ì”«ÊÌ ›Ì Õﬁ  Ê„ Ê·Ì” „ÊÃÊœ ›Ì Õﬁ ÃÌ—Ì
·«‰ «–« ÃÌ—Ì «” ÿ«⁄ „Ê«ﬂ»… ”—⁄… «·ÿ«ﬁÂ «·„ÿ·Ê»… Ì⁄‰Ì «‰Â «” ÿ«⁄ «··Õ«ﬁ »ÃÌ—Ì

*/


    cout << "***************************************************\n";
    cout << "\tPart 3 - Collision & Final Stats!\n";// «·Ã“¡ «·À«·À «·«’ÿœ«„ Ê «·«Õ’«∆Ì… «·‰Â«∆Ì…
    cout << "***************************************************\n\n";

    //  Swapping Items ( »œÌ· «·ﬁÌ„)
    char tomItem = 'H';  //„ÿ—ﬁ… Hammer 
    char jerryItem = 'C'; // Cheese Ã»‰…

    cout << "Before Swap:\n";
    cout << "Tom holds: " << tomItem << " | Jerry holds: " << jerryItem << "\n\n";

    cout << "BOOM! They bumped into each other and dropped their items!\n";// (»Ê„! «’ÿœ„« »»⁄÷Â„« Ê√”ﬁÿ« √‘Ì«¡Â„«!)

    // ⁄„·Ì… «· »œÌ· »«” Œœ«„ «·„ €Ì— «·„ƒﬁ 
    char temp = tomItem;
    tomItem = jerryItem;
    jerryItem = temp;

    cout << "After Swap:\n";
    cout << "Tom holds: " << tomItem << " | Jerry holds: " << jerryItem << "\n";
    cout << "___________________________________________________\n\n";



    // 3. Formatting Output ( ‰”Ìﬁ «·„Œ—Ã«  ﬂÃœÊ·)
    // ÿ»«⁄… ≈Õ’«∆Ì«  «··⁄»… «·‰Â«∆Ì… »‘ﬂ· „— » ·”—⁄ Â„« Ê ⁄œœ ›Œ«Œ  Ê„ Ê⁄œœ √Ã»«‰ ÃÌ—Ì
    
    float tomSpeed = 25.5, jerrySpeed = 28.2;
    int tomTraps = 3, jerryCheeses = 5;

    cout << "\t--- FINAL GAME STATS ---\n\n";
    
    // «·„Õ«–«… ··Ì”«—
    cout << setiosflags(ios::left);

    // ÿ»«⁄…  —ÊÌ”… «·ÃœÊ·
    cout << setw(15) << "Character" 
         << setw(15) << "Speed (km/h)" 
         << setw(15) << "Items Count" << "\n";
         
    cout << "--------------------------------------------\n";

    // ÿ»«⁄… »Ì«‰«   Ê„
    cout << setw(15) << "Tom" 
         << setw(15) << tomSpeed 
         << setw(15) << tomTraps << "\n";

    // ÿ»«⁄… »Ì«‰«  ÃÌ—Ì
    cout << setw(15) << "Jerry" 
         << setw(15) << jerrySpeed 
         << setw(15) << jerryCheeses << "\n\n";

    cout << "\tEnd of Part 3!\n\n\n\n\n";





    cout << "***************************************************\n";
    cout << "\tPart 4 - Choose Your Fate!\n";// «·Ã“¡ «·—«»⁄ «Œ — „’Ì—ﬂ
    cout << "***************************************************\n\n";

    int userAge;
    cout << "Enter your age: ";
    cin >> userAge;

    switch (userAge >= 18) 
    {
        case 1: // Õ«·… «·ﬂ»«— (⁄‰›)
        {
            cout << "\n[Mode: Action - Dynamite]" << endl;
            int wireColor;
            cout << "Cut the wire to stop the dynamite (1: Red, 2: Blue): ";
            cin >> wireColor;

            // ≈–« «Œ «— «··«⁄»  
             if (wireColor == 1) 
                cout << "Success! Tom defused the bomb and caught Jerry!" << endl;//  Ê„ Ì‰ÃÕ ›Ì ≈»ÿ«· «·ﬁ‰»·… ÊÌ„”ﬂ »ÃÌ—Ì
                
             else if(wireColor == 2)
			    cout << "Failed! BOOOOM ... The bomb didn't stop." << endl; //  Ê„ Ì›‘· ÊÌ‰›Ã— «·œÌ‰«„Ì 

             else                 
                cout << "nothing!" << endl;
            
          break;
        }

        case 0: // Õ«·… «·’€«— (·ÿÌ›)
        {
            cout << "\n[Mode: Kids - Friendly]" << endl;
            int hidden;//„Œ»√
            // ÃÌ—Ì Ã«∆⁄ «Œ — „ﬂ«‰ ·«Œ›«¡ «·Ã»‰ ›Ì «·À·«ÃÂ «Ê «·Œ“«‰…
            cout << "Jerry is hungry. Choose a place to hide the cheese (1: Fridge, 2: Cupboard): ";
            cin >> hidden;

            if (hidden == 1)                 
                cout << "Success! Finds cheese." << endl;
                
            else                 
                cout << "Oh no! There is no cheese." << endl;
            
          break;
        }

        default:
            cout << "Invalid input for age." << endl;
    }

    cout << "\n\n\n\t     Thank you for playing!\n\n\n\n\n";
    
    
    
    
    
/*
  ÃÌ—Ì Ì„— ⁄·Ï 5 €—› »«· — Ì» ·Ã„⁄ «·Ã»‰.
 Ê«Õœ «·€—› ÌŒ »√ ›ÌÂ«  Ê„  ÌﬁÊ„ «·„” Œœ„ »«Œ Ì«— «·€—›Â 
≈–« «·€—›… «„‰Â Ì” „— »Ã„⁄ «·Ã»‰ «· —«ﬂ„Ì

*/
    
    
    cout << "***************************************************\n";
    cout << "\tPart 5 - The Loop Escape!\n";// «·Ã“¡ «·Œ«„” «·Â—Ê» „‰ «Õ·ﬁ…
    cout << "***************************************************\n\n";   
    
    //ÿ»«⁄… ‘ﬂ· »«·‰ÃÊ„
    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < i; j++) 
         cout << "*";          

      cout << endl;
    } 
    
    

    int tot = 0;   // «·Õ’«·… («·Ã„⁄ «· —«ﬂ„Ì)
    int chz = 0;   // «·Ã»‰ ›Ì «·€—›… «·Õ«·Ì…
    int trap;      // €—›… «·›Œ

//  Ê„ „Œ »√ ›Ì «Ì €—›…
    cout << "Set Tom's trap room (1-5): ";
    cin >> trap;// «–« «œŒ·‰« 6 ›«‰ ÃÌ—Ì ·‰ Ìﬁ⁄ ›Ì «·›Œ
    cout << "--------------------------------\n";

    // Õ·ﬁ…  ﬂ—«—  „— ⁄·Ï 5 €—›
    for (int r = 1; r <= 5; r++) 
    {
        // ‘—ÿ «·ÿÊ«—∆ ··Â—Ê»
        if (r == trap) 
        {
            cout << "\n[!] Tom is in Room " << r << "! Escape via 'break'!\n";
            break; // Â—Ê» ÃÌ—Ì »„« Õ’œ „‰ Ã»‰
        }

        cout << "Room [" << r << "] - Enter Cheese: ";
        cin >> chz;

        tot += chz; // Ã„⁄  —«ﬂ„Ì „Œ ’—
        cout << "-> Total Cheese: " << tot << "\n";
        cout << "--------------------------------\n";
    }

    cout << "\n=== FINAL REPORT ===\n";// «· ﬁ—Ì— «·‰Â«∆Ì
    cout << "Jerry escaped safely.\n";// ‰Ã« ÃÌ—Ì
    cout << "Total collected: " << tot << " pieces.\n";//⁄œœ «·Ã»‰ «·«Ã„«·Ì
    
    // ‘ﬂ· ‰ÃÊ„
     cout << "\t\t\t\t";

    for (int i = 0; i < 10; i++)
    {
      
        for (int j = 0; j <10- i; j++) 
             cout << " ";          
             for (int r = 0; r < i; r++)
               cout << "*";
               
        cout << endl;
        cout << "\t\t\t\t";
    }
    
        cout << "\n\n\n\t     Thank you for playing!\n\n\n\n\n";
        
        
        
        
    cout << "***************************************************\n";
    cout << "\tPart 6 - Midterm exam\n"; // «·Ã“¡ «·”«œ” - «·«„ Õ«‰ «·‰’›Ì
    cout << "***************************************************\n\n"; 
        
        
      cout<<"Tom and Jerry wish you success and good luck"<<endl;//  Ê„ ÊÃÌ—Ì Ì „‰Ì«‰ ·ﬂ «·‰Ã«Õ Ê «· Ê›Ìﬁ
        
        
	/*
	
	ÃÌ—Ì Ì„·ﬂ Œ“«‰… ÌŒ»∆ ›ÌÂ «·Ã»‰ ÊÌﬁÊ„ »› Õ «·—„“ 
	ÊÌ” „— ›Ì «·„Õ«Ê·Â «·Ï «‰ Ì‰› Õ Ê ŸÂ— «·ﬁ«∆„…
	
	
	*/
    cout << "***************************************************\n";
    cout << "\tPart 7 - Jerry's Cheese Vault!\n"; // «·Ã“¡ «·”«»⁄ - Œ“‰… «·Ã»‰ «·Œ«’… »ÃÌ—Ì
    cout << "***************************************************\n\n";

    int balance = 100; // «·Ã»‰ ›Ì «·Œ“«‰…
    int pin = 0, choice, take, add;

    
    while (pin != 7352) {
        cout << "Enter Vault PIN: "; // √œŒ· «·—„“ «·”—Ì ··Œ“‰…
        cin >> pin;

    }

    // 2. «·ﬁ«∆„… «·—∆Ì”Ì… «· ›«⁄·Ì… »«” Œœ«„ Õ·ﬁ… do-while
    do {
        cout << "\n--- CHEESE VAULT ---\n"; // ﬁ«∆„… Œ“‰… «·Ã»‰
        cout << "1. Check Cheese\n";       // 1. ›Õ’ ﬂ„Ì… «·Ã»‰
        cout << "2. Take Cheese\n";        // 2. √Œ–/”Õ» Ã»‰
        cout << "3. Store Cheese\n";       // 3.  Œ“Ì‰/≈÷«›… Ã»‰
        cout << "4. Lock & Exit\n\n";        // 4. ﬁ›· «·Œ“‰… Ê«·Œ—ÊÃ
        
        cout << "Choose option: ";         // «Œ — —ﬁ„ «·ŒÌ«—
        cin >> choice;

        // 3. „⁄«·Ã… «·ŒÌ«—«  »«” Œœ«„ switch
        switch (choice) {
            case 1: {
                cout << "Cheese Balance: " << balance << " pieces\n"; // —’Ìœ «·Ã»‰ «·Õ«·Ì
            } break;

            case 2: {
                cout << "Enter amount to take: "; // √œŒ· «·ﬂ„Ì… «·„—«œ ”Õ»Â«
                cin >> take;
                balance -= take;
                cout << "Remaining Cheese: " << balance << " pieces\n"; // «·Ã»‰ «·„ »ﬁÌ
            } break;

            case 3: {
                cout << "Enter amount to store: "; // √œŒ· «·ﬂ„Ì… «·„—«œ ≈÷«› Â«
                cin >> add;
                balance += add;
                cout << "New Cheese Total: " << balance << " pieces\n"; // «·≈Ã„«·Ì «·ÃœÌœ ··Ã»‰
            } break;

            case 4: {
                cout << "Vault Locked! Goodbye Jerry ^_^\n"; //  „ ﬁ›· «·Œ“‰…! Êœ«⁄« ÃÌ—Ì
                
            } break;

            default: {
                cout << "Invalid choice! Try again.\n"; // ŒÌ«— €Ì— ’ÕÌÕ! Õ«Ê· „—… √Œ—Ï
            } break;
        }

    } while (choice != 4);
    
    
    
            cout << "\n\n\n\t     Thank you for playing!\n\n\n\n\n";
    
    











#include <iostream>
using namespace std;

  void alarm(); // œ«·… «·≈‰–«— (·«  ı—Ã⁄ ﬁÌ„… void)
  int getDist(int tPos, int jPos); // œ«·… Õ”«» «·„”«›… ( ı—Ã⁄ ﬁÌ„… int Ê ” ﬁ»· „⁄«„·Ì‰)


  int main() {
    cout << "***************************************************\n";
    cout << "\tPart 8 - Jerry's Early Radar!\n"; // «·Ã“¡ «·À«„‰ - —«œ«— ÃÌ—Ì «·„»ﬂ—!
    cout << "***************************************************\n\n";

    int tomLoc = 20;   // „Êﬁ⁄  Ê„ «·Õ«·Ì
    int jerryLoc = 50; // „Êﬁ⁄ ÃÌ—Ì «·Õ«·Ì

    
    // √) «” œ⁄«¡ œ«·… «·≈‰–«— (·«  Õ «Ã ·„⁄«„·«  »Ì‰ «·√ﬁÊ«”)
    alarm(); 
    
    // dist ») «” œ⁄«¡ œ«·… «·„”«›… Ê „—Ì— «·„Ê«ﬁ⁄ («·Ê”«∆ÿ)° ÊÕ›Ÿ «·‰ ÌÃ… ›Ì «·„ €Ì— 
    int dist = getDist(tomLoc, jerryLoc); 

    // ÿ»«⁄… «·„Ê«ﬁ⁄ Ê«·„”«›… «· Ì Õ”» Â« «·œ«·…
    cout << "Tom location: " << tomLoc << "\n";     // „Êﬁ⁄  Ê„
    cout << "Jerry location: " << jerryLoc << "\n"; // „Êﬁ⁄ ÃÌ—Ì
    cout << "Distance: " << dist << " meters\n\n";  // «·„”«›… »Ì‰Â„«

    // «” Œœ«„ «·ﬁÌ„… «·„—Ã⁄… («·„”«›…) ›Ì ‘—ÿ ·„⁄—›… Õ«·… ÃÌ—Ì
    if (dist < 20) {
        cout << "Run Jerry! Tom is close!\n"; // «Â—» Ì« ÃÌ—Ì!  Ê„ ﬁ—Ì» Ãœ«!
    } else {
        cout << "Jerry is safe for now.\n"; // ÃÌ—Ì ›Ì √„«‰ Õ«·Ì«
    }

    cout << "\n\n\n\t     Thank you for playing!\n\n\n\n";
    return 0;
    }

    void alarm() {
    cout << "[!] BEEP BEEP! Radar Active! [!]\n\n"; // »Ì» »Ì»! «·—«œ«— Ì⁄„·!
    }

         //  ⁄—Ì› œ«·… «·„”«›… ( ÿ—Õ „Êﬁ⁄  Ê„ „‰ ÃÌ—Ì Ê ı—Ã⁄ «·‰« Ã ··»—‰«„Ã)
    int getDist(int tPos, int jPos) {
    return jPos - tPos; // ≈—Ã«⁄ «·‰ ÌÃ…
    }












    cout << "***************************************************\n";
    cout << "\tPart 9 - Tom vs Spike: The Danger Path!\n"; // «·Ã“¡ «· «”⁄ -  Ê„ ÷œ ”»«Ìﬂ: „„— «·Œÿ—!
    cout << "***************************************************\n\n";

    cout << "Tom is running from Spike through 6 sections.\n";
    cout << "Positive = Energy boost (+), Negative = Spike's hit (-)\n\n";

    // p: «·„’›Ê›… «· Ì  „À· «·„„— (Path)
    // tot: ≈Ã„«·Ì «·ÿ«ﬁ… (Total Energy)
    const int SIZE = 6; // „ €Ì— À«»  ·ÕÃ„ «·„’›Ê›…
    int p[SIZE]; 
    int tott = 0;

    cout << "Enter " << SIZE << " values for the path:\n"; // ÿ·» ≈œŒ«· «·ﬁÌ„ „‰ «·„” Œœ„
    for (int i = 0; i < SIZE; i++) {
        cin >> p[i];
    }
    cout << "\n";

    // ÿ»«⁄… ⁄‰«’— «·„„—
    cout << "Path: [ ";
    for (int i = 0; i < SIZE; i++) {
        cout << p[i] << " ";
    }
    cout << "]\n---------------------------------------------------\n";

    // «·„—Ê— ⁄·Ï √ﬁ”«„ «·„„— ⁄»— «·œÊ«—…
    for (int i = 0; i < SIZE; i++) 
    {
        cout << "Step " << i << ": ";

        if (p[i] > 0) {
            //  Ê„ Õ’· ⁄·Ï “Ì«œ… ÿ«ﬁ…
            cout << "Tom got +" << p[i] << " energy!\n"; 
            tott += p[i]; // ≈÷«›… «·ﬁÌ„… ≈·Ï ≈Ã„«·Ì «·ÿ«ﬁ…
        } 
        else if (p[i] < 0) {
        	
           //  ŒÌ· ·Ê €Ì—‰« «·ﬂÊœ ·Ì’»Õ ⁄„·Ì… ÿ—Õ (tot -= p[i])°
//			 Êﬂ«‰  ﬁÌ„… ÷—»… ”»«Ìﬂ ›Ì «·„’›Ê›… ÂÌ -10:
//            «·»—‰«„Ã ”ÌÕ”»Â« Âﬂ–«:
//			 «·ÿ«ﬁ… «·Õ«·Ì… - (-10) = «·ÿ«ﬁ… «·Õ«·Ì… + 10.
//            «·‰ ÌÃ… «·ﬂ«—ÀÌ…: ﬂ·„« ÷—» ”»«Ìﬂ  Ê„° ” “Ìœ ÿ«ﬁ…  Ê„ Ê  Õ”‰ ’Õ Â »œ·« „‰ √‰ Ì‰ﬁ’Â!
            
            // ”»«Ìﬂ ÷—»  Ê„ Ê›ﬁœ ÿ«ﬁ…
            cout << "Spike hit Tom! " << p[i] << " energy!\n"; 
            tott += p[i]; // 50+(-10)=40
                         // (-5)+30=25
        } 
        else {
            // ﬁ”„ ¬„‰ ·« ÌÊÃœ ›ÌÂ ÿ«ﬁ… Ê·« ÷—»«  «–« «œŒ· ’›—
            cout << "Safe zone... no change.\n"; 
        }
    }

    cout << "---------------------------------------------------\n";

    // «· ﬁ—Ì— Ê«·‰ ÌÃ… «·‰Â«∆Ì…
    if (tott > 0) {
        // ‰Ã«Õ  Ê„ ›Ì «·Â—Ê» „⁄ ÿ«ﬁ… „ »ﬁÌ…
        cout << "Tom escaped Spike! Final Energy: " << tot << "\n"; 
    } else {
        // ≈„”«ﬂ ”»«Ìﬂ » Ê„ »”»» ‰›«œ «·ÿ«ﬁ…
        cout << "Spike caught Tom! Game Over.\n"; 
    }

    cout << "\n\n\n\t     Thank you for playing \n\n\n\n\n";
    
    
    
    
    
   
   
   
   
   
   
   
   
   // Â–« «·Ã“¡ ÌÕ·  Ê„ √ÕÃÌ… «·Õ—Ê› «·”Õ—Ì… ·„⁄—›… „ﬂ«‰ ÃÌ—Ì ⁄‰ ÿ—Ìﬁ ›Õ’ ⁄‰«’— «·ﬁÿ—

    cout << "***************************************************\n";
    cout << "\tPart 10 - The Word Puzzle\n"; // «·Ã“¡ «·⁄«‘— «ÕÃÌ… «·ﬂ·„« 
    cout << "***************************************************\n\n";

	
  char puzzle[5][5] = {
        {'T', 'B', 'U', 'T', 'J'},
        {'S', 'E', 'C', 'E', 'H'},
        {'P', 'I', 'R', 'F', 'O'},
        {'K', 'R', 'E', 'R', 'X'},
        {'Y', 'K', 'E', 'S', 'Y'}
    };

// 2. ÿ»«⁄… «·„’›Ê›… ⁄·Ï ‘ﬂ· ‘»ﬂ… „—»⁄… „‰”ﬁ… ··„” Œœ„ ﬁ»· «·«Œ Ì«—
    cout << "=== PUZZLE MATRIX (5x5) ===\n\n";
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            cout << puzzle[i][j] << "   "; // ÿ»«⁄… «·Õ—› „⁄ „”«›«  · ‰”Ìﬁ «·‘ﬂ· «·„—»⁄
        }
        cout << endl; // ”ÿ— ÃœÌœ »⁄œ ﬂ· ’›
    }
    // ⁄—÷ «·ﬁÊ«‰Ì‰ ··„” Œœ„ ·ÌŒ «— √ÕœÂ«
    cout << "\n\n1. Main Diagonal Law (i == j)\n";
    cout << "2. Secondary Diagonal Law (i + j == 4)\n";
    cout << "3. Above Main Diagonal Law (i < j)\n";
    cout << "4. Below Main Diagonal Law (i > j)\n";
    
    int choice0;
    cout << "\nEnter choice (1-4): "; // √œŒ· —ﬁ„ «·ŒÌ«—
    cin >> choice0;

    cout << "\n-----------------------------------------\n";

    // „⁄«·Ã… «Œ Ì«— «·„” Œœ„ »«” Œœ«„ switch
    switch (choice0) 
    {
        case 1: 
        {
  	        cout << "Result: ";
            for (int i = 0; i < 5; i++) 
            {
                for (int j = 0; j < 5; j++) 
                {
                    if (i == j) 
                    {
                        cout << puzzle[i][j];
                    }
                }
            }
            cout << "\nFAILED! Wrong target (Terry)!\n"; // ›‘·! Âœ› Œ«ÿ∆ ( Ì—Ì)!
            break;

        }

        case 2: 
        {
      	    cout << "Result: ";
            for (int i = 0; i < 5; i++) 
            {
                for (int j = 0; j < 5; j++) 
                {
                    if (i + j == 4) 
                    {
                        cout << puzzle[i][j];
                    }
                }
            }
            cout << "\nSUCCESS! Tom caught Jerry!\n"; // ‰Ã«Õ!  Ê„ √„”ﬂ »ÃÌ—Ì!
            break;
            
        }

        case 3: // ﬁ«‰Ê‰ ›Êﬁ «·ﬁÿ— «·—∆Ì”Ì - «·›‘· ÊŸÂÊ— «”„ »Ê ‘
        {
            cout << "Result: ";
            for (int i = 0; i < 5; i++) 
            {
                for (int j = 0; j < 5; j++) 
                {
                    if (i < j && puzzle[i][j] != ' ') 
                    {
                        cout << puzzle[i][j];
                    }
                }
            }
            cout << "\nFAILED! Butch's area!\n"; // ›‘·! „‰ÿﬁ… «·ﬁÿ »Ê ‘!
            break;
        }

        case 4: // ﬁ«‰Ê‰  Õ  «·ﬁÿ— «·—∆Ì”Ì - «·›‘· ÊŸÂÊ— «”„ ”»«Ìﬂ
        {
            cout << "Result: ";
            for (int i = 0; i < 5; i++) 
            {
                for (int j = 0; j < 5; j++) 
                {
                    if (i > j && puzzle[i][j] != ' ') 
                    {
                        cout << puzzle[i][j];
                    }
                }
            }
            cout << "\nFAILED! Spike's area!\n"; // ›‘·! „‰ÿﬁ… «·ﬂ·» ”»«Ìﬂ!
            break;
        }

        default: // ›Ì Õ«· ﬂ «»… „œŒ· „Œ ·›
        {
            cout << "Sorry, invalid input!\n"; // ⁄›Ê«° Œÿ√ ›Ì «·„œŒ·« !
            break;
        }
    }
    
    
    
        cout << "\n\n\n\t     Thank you for playing \n\n\n\n\n"; 
    
    
    
  
  
  
  
  
    cout << "***************************************************\n";
    cout << "\tPart 11 - Peace Treaty!\n"; // «·Ã“¡ «·Õ«œÌ ⁄‘— - „⁄«Âœ… «·”·«„
    cout << "***************************************************\n\n";
    
       // 1. ÃÌ—Ì Ìﬂ » «·„⁄«Âœ… ÊÌÕ›ŸÂ«
        ofstream outFile("Treaty.txt");
        outFile << "Jerry: Peace + 10 cheeses daily.\n"; // ÃÌ—Ì: ”·«„ + 10 ﬁÿ⁄ Ã»‰ ÌÊ„Ì«.
        outFile.close();


        // 2.  Ê„ ﬁ—«¡ «·„·›
        ifstream inFile("Treaty.txt");
        string msg; 
        
        while (getline(inFile, msg)) 
        {
            cout << msg << endl;
        }
        inFile.close();
        
        
        

    char ans;
    cout << "Tom: Do you agree?? (Y/N): "; // Â·  Ê«›ﬁ ⁄·Ï «·”·«„ø (‰⁄„/·«): 
    cin >> ans;

    cout << "---------------------------------------------------\n";

    if (ans == 'Y' || ans == 'y') 
    {
      
       // === «· ⁄œÌ· Â‰«: Ã⁄· «·„” Œœ„ Ìﬂ » «·—œ „‰ «·‘«‘… «·”Êœ«¡ ===
        string tomReply;
        cout << "Type Tom's reply: "; // «ﬂ » —œ  Ê„:
        cin.ignore(); 
        getline(cin, tomReply); 

        // 3.  Ê„ Ìﬂ » —œÂ ›Ì ‰›” «·„·› »œÊ‰ „”Õ —”«·… ÃÌ—Ì
        ofstream appFile("Treaty.txt", ios::app);
        appFile << "Tom: " << tomReply << "\n"; // Ì „ ÿ»«⁄… „« ﬂ »Â «·„” Œœ„ Â‰«
        appFile.close();


        cout << "\n=== Reply received===\n";// „ «·—œ


    }
    else 
    {

        // ›Ì Õ«· —›÷ «·„” Œœ„ ‰Œ»— ÃÌ—Ì »«‰ ÌÂ—»
        ofstream outFile("Treaty.txt", ios::app);
        outFile << "Tom: No peace! Run Jerry!\n"; //  Ê„: ·« ÌÊÃœ ”·«„! «Â—» Ì« ÃÌ—Ì!
        outFile.close();
        
        cout << "No peace. Letter sent to Jerry.\n"; // ·« ”·«„.  „ ≈—”«· —”«·… ·ÃÌ—Ì.
    }

    cout << "\n***************************************************\n";
    cout << "\t GAME OVER! THANK YOU FOR PLAYING!\n"; // «‰ Â  «··⁄»…! ‘ﬂ—« ··⁄»ﬂ„!
    cout << "***************************************************\n\n";
    
    
    
    
	cout << "***************************************************\n";
    cout << "\tPart 10 - Final Exam \n"; // «·Ã“¡ «·⁄«‘— - «·«„ Õ«‰ «·‰Â«∆Ì
    cout << "***************************************************\n\n"; 
        
        
    cout<<"Tom and Jerry wish you success and good luck"<<endl;//  Ê„ ÊÃÌ—Ì Ì „‰Ì«‰ ·ﬂ «·‰Ã«Õ Ê «· Ê›Ìﬁ
        
        
    return 0; 
}