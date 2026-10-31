#include<iostream>
using namespace std;
int main()
{
	//goto
	//  breakÚäÏ ÇáÚËæÑ Úáì ÇáãÑÇÏ íÎÑÌ ãä ÇáÍáŞÉ ãÈÇÔÑÉ áÊŞáíá ÇÓÊåáÇß ÇáãÚÇáÌ ÊÔÈÉ 
	//íŞİÒ Çáì äåÇíÉ ÇáÍáŞÉÇáæÇÍÏå : break
	//íŞİÒ ÚäÏ ÇáÚäæÇä ÇáãÍÏÏ: goto



//íİÖá ÇÓÊÎÏÇãåÇ İí ÇáãÕİæİÇÊ ÇáËäÇÆíÉ
    int target;
    cout << "Enter number to search: ";// ÃÏÎá ÇáÑŞã ÇáãÑÇÏ ÇáÈÍË Úäå
    cin >> target;
    
int ary[3][4]={{ 6,8,9,9 },{ 80,57,93,43 },{40,80,60,20 }};
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
        if(ary[i][j] == target) {
            cout << "Found at [" << i << "][" << j << "]" << endl;
            break;
            goto Found; // ÎÑæÌ ãä ÇáÍáŞÊíä
        }
    }
}

cout << "Element NOT found!" << endl;
return 0;//ÈÏæäå ÓíØÈÚ ÇáÑÓÇáÉ ÇáÊí ÊÍÊå

Found:
cout << "=== Search Completed Successfully ===" << endl;//ÇßÊãáÊ ÚãáíÉ ÇáÈÍË ÈäÌÇÍ







	return 0;
}