#include <iostream>
#include <math.h>    // „ﬂ »… «·œÊ«· «·—Ì«÷Ì…
using namespace std;

int main() {
    
    cout << "========== 1. Math Functions  ==========" << endl;//«·œÊ«· «·—Ì«÷Ì…
    
    // sqrt(x): «·Ã–— «· —»Ì⁄Ì
    cout << "sqrt(16) = " << sqrt(16) << endl;       // «·‰ ÌÃ…: 4
    
    // pow(x, 2): «· —»Ì⁄ («·√” 2)
    cout << "pow(5, 2) = " << pow(5, 2) << endl; //5*5    // «·‰ ÌÃ…: 25
    
    // pow(x, y): ⁄œœ x „—›Ê⁄ ··√” y
    cout << "2^3 = " << pow(2, 3) << endl;     // «·‰ ÌÃ…: 8
    
    // abs(x): «·ﬁÌ„… «·„ÿ·ﬁ… ( ·€Ì «·≈‘«—… «·”«·»…)
    cout << "abs(-10) = " << abs(-10) << endl;       // «·‰ ÌÃ…: 10
    
    // exp(x): «·œ«·… «·√”Ì… (e^x)
    cout << "exp(1) = " << exp(1) << endl;           // «·‰ ÌÃ…: 2.718...
    
    // «·œÊ«· «·„À·ÀÌ… (  ⁄«„· „⁄ «·“Ê«Ì« »‰Ÿ«„ «·—«œÌ«‰ Ê·Ì” «·œ—Ã« )
    cout << "sin(90) = " << sin(90) << endl;           // Ã«
    cout << "cos(0) = " << cos(0) << endl;           // Ã «
    cout << "tan(90) = " << tan(90) << endl;           // Ÿ«
    cout << "asin(0) = " << asin(0) << endl;         // „⁄ﬂÊ” Ã« (Arc sine)
    
    

    
    // «· ÕÊÌ· ≈·Ï «·œ—Ã« 
    // “«ÊÌ… »«·—«œÌ«‰ (1.5708  ⁄«œ· 90 œ—Ã…  ﬁ—Ì»«)
    double Radians = 1.5708;   
    // „⁄«œ·… «· ÕÊÌ·: ‰÷—» «·—«œÌ«‰ ›Ì (180 ﬁ”„… »«Ì)
    double Degrees = Radians * (180.0 / 3.14159);   
    cout << "Angle in Degrees = " << Degrees << endl; // ”Ìÿ»⁄ 90  ﬁ—Ì»«
    
        // «· ÕÊÌ· ≈·Ï —«œÌ«‰
    double degrees = 90.0;
    double radians = degrees * (3.14159 / 180.0); // ≈Ã—«¡ »œÊ‰ ÿ»«⁄Â
    


    cout << "\n========== 2. Conversion Functions ==========" << endl;// œÊ«· «· ÕÊÌ·
    
    // int()  · ÕÊÌ· «·ﬂ”— ≈·Ï ’ÕÌÕ (ÌÕ–› „«»⁄œ «·›«’·… »œÊ‰  ﬁ—Ì»)
    double num = 4.9;
    cout << "Integer of 4.9 is: " << int(num) << endl; 
    


    //   ÕÊÌ· «·‰’ ·—ﬁ„ Ê«·⁄ﬂ” 
    int asciiValue = int('A'); //  ÕÊÌ· «·Õ—› ·ﬁÌ„ Â «·—ﬁ„Ì…
    cout << "Value of 'A' is: " << asciiValue << endl;
    char charValue = char(65); //  ÕÊÌ· «·—ﬁ„ ··Õ—› «·„ﬁ«»·
    cout << "char of 65 is: " << charValue << endl;
    
/* code::blocks Â–Â  ‰›⁄ ›Ì „Õ—— 
    int num_1 =123;
    cout << "string of 123 is: " << to_string(num_1) << endl; */
    


    cout << "\n========== 3. String Functions  ==========" << endl;//œÊ«· «·”·«”· «·‰’Ì…
    
    string text = "Programming"; 
    
    // length(s): „⁄—›… ⁄œœ √Õ—› «·ﬂ·„… Õ Ï ·Ê „”«›…
    cout << "Length of text: " << text.length() << endl; // «·‰ ÌÃ…: 11
    

    // «·‘ﬂ· «·⁄«„: text.substr( ⁄œœ_«·√Õ—›,‰ﬁÿ…_«·»œ«Ì… )
    
    //  «ﬁ ÿ«⁄ √Õ—› „‰ «·Ì”«— (‰»œ√ „‰ 0)
    cout << "Left(text, 3): " << text.substr(0, 3) << endl; // «·‰ ÌÃ…: Pro
    
    //  «ﬁ ÿ«⁄ √Õ—› „‰ «·Ì„Ì‰ (‰»œ√ „‰ «·ÿÊ· «·ﬂ·Ì ‰«ﬁ’ «·⁄œœ «·„ÿ·Ê»)
    cout << "Right(text, 3): " << text.substr(text.length() - 3, 3) << endl; // «·‰ ÌÃ…: ing
    
    //  «ﬁ ÿ«⁄ „‰ «·„‰ ’›
    cout << "Mid(text, 3, 4): " << text.substr(3, 4) << endl; // «·‰ ÌÃ…: gram

  


    cout << "\n========== 4. Statistics Functions  ==========" << endl;//œÊ«· «·≈Õ’«¡
    
    int a = 15, b = 30, c = 10;
    
    // max(a,b): «” Œ—«Ã «·ﬁÌ„… «·√ﬂ»—
    cout << "Max(15, 30) = " << max(a, b) << endl;
    
    // min(a,b): «” Œ—«Ã «·ﬁÌ„… «·√’€—
    cout << "Min(15, 30) = " << min(a, b) << endl;
    
    

    // Õ”«» «·„ Ê”ÿ
    int sum = a + b + c;
    float average = sum / 3.0; // float ⁄œœ  ’ÕÌÕ ‰ﬁÊ„ »Ã⁄· 3 ⁄œœ ⁄‘—Ì ·«Ã»«— «·ﬂ„»ÌÊ — «· ⁄—› sum »„« «‰ 
    
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    
    
    // ‰Ê⁄ «·„ €Ì—

    int x = 10;
    double y = 5.5;
    char letter = 'A';
    string NAME ="alaa";

    cout << "========== Variable Types ==========" << endl;

    cout << "Type of x is      : " << typeid(x).name() << endl;
    cout << "Type of y is      : " << typeid(y).name() << endl;
    cout << "Type of letter is : " << typeid(letter).name() << endl;
    cout << "Type of string is : " << typeid(NAME).name() << endl;










    return 0;
}