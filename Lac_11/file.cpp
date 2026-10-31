#include <iostream>
#include <fstream>// file 
using namespace std;

int main() {

// ofstream

/*
// «‰‘«¡ Ê› Õ «·„·›
    ofstream myFile("gg.txt");//”Ì „ «‰‘√Â ›Ì ‰›” „”«— „Êﬁ⁄ «·„Õ«÷—…
    
    // «·ﬂ «»… œ«Œ· «·„·›
    myFile << "„—Õ»«, Ala'a"<<endl;
    myFile << "Ali";

// Õ›Ÿ Ê«€·«ﬁ «·„·›
  myFile.close();



//ÿ»«⁄…  √ﬂÌœ «·⁄„·Ì…
    cout << "File created successfully ^_^\n";*/
    
    
    
//”ÌﬁÊ„ »„”Õ «·ﬁœÌ„ ÊÌﬂ » «·ÃœÌœ ios::app ≈–« ⁄œ‰« › Õ «·„·› »œÊ‰  
   
/*
// › Õ «·„·› »’Ì€… «·«÷«›…  
ofstream myFile("gg.txt", ios::app);
myFile << "\nAbudunya";
myFile.close();*/
    
    
    
    
    //·« Ì„ﬂ‰ ﬂ «»… ›Ì „·› „€·ﬁ «Ê  „ «€·«ﬁÂ ”«»ﬁ« 
    
/*
    //  ⁄—Ì› ﬂ«∆‰ ·≈‰‘«¡ „·›
    ofstream myFile(" Ã—»….txt");
    myFile.close();
    myFile << "«·”·«„ ⁄·Ìﬂ„";*/






/*
   //›Ì „”«—  „  ÕœÌœ „Êﬁ⁄ «·«‰‘«¡

    ofstream myFile("D:/c++/„” ‰œ.txt");
    myFile << "«Â·«";
    myFile.close();
    myFile << "»ﬂ„";//·‰ Ì „  ‰›Ì–Â
    

    ofstream f("D:/c++/„” ‰œ.txt", ios::app);
    f << " hello "<<endl;
    */
	
	



	//Õ›Ÿ  ”ÃÌ· œŒÊ· „” Œœ„
	
/*
   ofstream myFile("log.txt");

    myFile << "User: Admin\n";
    myFile << "Action: Login\n";
    
    myFile.close();
    cout << "Saved" << endl; */
    
    
    
// ifstream    
//log ·ﬁ—«¡… „·› 

/*
„⁄·Ê„« :
œ«·… Ã·» «·”ÿ— ÊŸÌ› Â« ”Õ» ”ÿ— „‰ «·„·› Ê Œ“Ì‰Â ›Ì «·„ €Ì— «·‰’Ì: getline 

ÿ«·„« √‰ Â‰«ﬂ ”ÿ—« ÃœÌœ«  „ ﬁ—«¡ Â »‰Ã«Õ „‰ «·„·›:ÊŸÌ›… «·‘—ÿ
«” „— ›Ì «·œÊ—«‰ Ê«ÿ»⁄ «·”ÿ— Ê⁄‰œ «·Ê’Ê· ·‰Â«Ì… «·„·› 
Ì’»Õ «·‘—ÿ €Ì— „ Õﬁﬁ Ê  Êﬁ› «·Õ·ﬁ…(·„ Ì »ﬁÛ √Ì ”ÿÊ— ··ﬁ—«¡…) */


    
/*
    ifstream myFile("log.txt");// «–« ﬁ—«¡‰« „·› €Ì— „ÊÃÊœ ·‰ Ì⁄—÷ ‘Ì
    string line;//”Ìﬁ—√ ﬂ· „«»œ«Œ· «·„·› ⁄·Ï «‰Â ‰’ („”«›«  Ê «—ﬁ«„ ..«·Œ)

    // ﬁ—«¡… «·„·› ”ÿ—« »”ÿ— Ê⁄—÷Â
    while (getline(myFile, line)) {
        cout << line << endl; // ÿ»«⁄… «·”ÿ— «·„ﬁ—Ê¡
    }

    myFile.close();
    
    cout << "Done" << endl; */
    
    
    
/*
    //„”»ﬁ« Ê„ﬂ Ê» ›ÌÂ ⁄’Ì— sales.txt”‰ﬁÊ„ »‰‘«¡ „·› »«”„ 
    // › Õ «·„·› ›Ì Ê÷⁄ «·≈÷«›… · ”ÃÌ· ⁄„·Ì… »Ì⁄ ÃœÌœ…
    ofstream myFile("sales.txt", ios::app);
    
    double price;
    cout << "Price: "; // √œŒ· «·”⁄—
    cin >> price;

    myFile << "Sale: " << price << "\n";
    myFile.close();

    cout << "Added" << endl; //  „  «·≈÷«›… ··”Ã·*/
	
	 
    
 
 
 
    
    
/*     
       cin.ignore()
       ⁄‰œ„« ‰” Œœ„ œ«·Â «·«œŒ«· («·”Ì ≈‰) ·≈œŒ«· «·«”„° «·„” Œœ„ Ìﬂ » «·«”„ À„ Ì÷€ÿ “— «‰ —.
       ›œ«·… «·«œŒ«·   √Œ– «·«”„° ·ﬂ‰Â«   —ﬂ "÷€ÿ… «‰ —" „⁄·ﬁ… ›Ì «·–«ﬂ—….
       cin.ignore()·–·ﬂ ÌÃ»  ‰ŸÌ› «·–«ﬂ—… »«” Œœ«„  
       getline.ﬁ»· «” Œœ«„ */
    
    
  /*
        ›Ì «·ﬂ «»… ⁄·Ï „·› cin Ê getline «·›—ﬁ »Ì‰
      -------------------------------------
      - √œ«… (cin) «·⁄«œÌ…: 
           Êﬁ› ⁄‰ «·ﬁ—«¡… ›Ê—« ⁄‰œ —ƒÌ… «·„”«›…
        („‰«”»… ··ﬂ·„… «·Ê«Õœ… „À· «·«”„ «·√Ê·).

      - œ«·… (getline): 
         ﬁ—√ «·”ÿ— ﬂ«„·« (»ﬂ· „« ›ÌÂ „‰ „”«›« ) 
        Enter Ê·«   Êﬁ› ≈·« ≈–« ÷€ÿ «·„” Œœ„ ⁄·Ï “—
        („‰«”»… ··Ã„· «·ÿÊÌ·… „À· «·—√Ì √Ê «· ⁄»Ì—).
    */
	
	
	  
    
/*
// «ﬂ » „‰ «·ﬂÊ‰”Ê· ÊÌ „ Õ›ŸÂ œ«Œ· «·„·›

    string h;
   
    cout << "Write: "; // ÌÃ» √‰ Ìﬂ » «·≈‰Ã·Ì“Ì ·ÌÕ›Ÿ »‘ﬂ· ”·Ì„
    getline(cin, h); 

    ofstream file("h.txt", ios::app);    
    file << h << endl;
    
    file.close();*/
    
    
    
    
    
/*
  // «ﬂ » «”„ﬂ Ê—√Ìﬂ ›Ì Ã«„⁄ ﬂ
    
    string studentName;
    string opinion;

    cout << "=== KMSU Students Opinions ===" << endl;  
    ofstream file("KMSU_Opinions.txt", ios::app);
    
    while (true) {
    cout << "Enter your first name (or 0 to exit): ";
    cin >> studentName; 
    
    if (studentName == "0") break;
    
    
    cin.ignore();
    cout << "Express opinion about KMSU: ";//⁄»— ⁄‰ —√Ìﬂ ÕÊ· Ã«„⁄… «·„⁄—›… Ê «·⁄·Ê„ «·ÕœÌÀ…
    getline(cin, opinion); 

    file << "Student Name: " << studentName << endl;
    file << "Opinion: " << opinion << endl;
    file << "-------------------------" << endl;
    }
    
    file.close();*/

    
    return 0;
}