#include<iostream>
using namespace std;
int main()
{
	//(two-dimensional array)(2D-array)ÇáãÕİæİÉ ÇáËäÇÆíÉ
	// ÇáãÕİæİÉ ĞÇÊ ÇáÈÚÏíä 

/*
	//ÇßÊÈ ÇáÇãÑ ÇáĞí íåíÆ ãÕİæİÉ ËäÇÆíÉ ãä 2 Õİæİ æ 3 ÇÚãÏå
	
	int ary[2][3]={{ , , },{ , , }};*/
	
	
	
/*
	//ÇßÊÈ ÇáÇãÑ ÇáĞí íåíÆ ãÕİæİÉ ËäÇÆíÉ ãä 4 Õİæİ æ 2 ÇÚãÏå	
	
	int ary[4][2]={{ , },{ , },{ , },{ , }};*/
	
	

/*
// ÕæÑ ÊæÖíÍíÉ ááİÑŞ Èíä ÇáãÕİæİÊíä
system("start D:/c++/Lac_10/1D_2D.jpg");
system("start D:/c++/Lac_10/1d_2d_(2).jpg");
*/



/*
	// ØÈÇÚÉ ãÕİæİÉ ËäÇÆíÉ ãä 3 Õİæİ æ2 ÇÚãÏå
	int ary[3][2]={{ 2,22 },{ 3,33 },{4 ,44 }}; system("start D:/c++/Lac_10/2D_Array.PNG"); 
	
	for(int i=0 ; i<3 ;i++)//íÌÈ Çä íßæä ãÊÓÇæí ãÚ ÚÏÏ ÇáÕİæİ 3
	 {	
 		 for(int j=0 ; j<2 ;j++)//íÌÈ Çä íßæä ãÊÓÇæí ãÚ ÚÏÏ ÇáÇÚãÏÉ 2
	     {cout<<ary[i][j]<<" ";}
	     
   	  cout<<endl;  	
	 }//ÚÏÏ ÚãáíÉ ÇáÊßÑÇÑ åí ÖÑÈ ÚÏÏ ÇáÕİæİ æÇáÇÚãÏå   3*2=12*/
	 


/*
	 
	 //ÇÏÎá ãÕİæİÉ ËäÇÆíÉ ãä 3 Õİæİ æ 4 ÇÚãÏÉ
	 
    int ary[3][4];
    //ÇÏÎá 12 ÑŞã 
    for(int i = 0; i < 3; i++)
    {   for(int j = 0; j < 4; j++) 
		 {           
            //cout << "Enter element [" << i << "][" << j << "]: ";// ÃÏÎá ÇáÚäÕÑ
            cin >> ary[i][j];
         }
    }

 
    cout << "\n=== Array View ===" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << ary[i][j] << "\t"; 
        }
        cout << endl; 
    }*/
     
     
     
/*
     //ãÖÇÚİÇÊ ãÕİæİÉ ËäÇÆíÉ
    int ary[3][2]={{ 6,8 },{ 9,7 },{5 ,9 }};
	
	for(int i=0 ; i<3 ;i++)
	 {	
 		 for(int j=0 ; j<2 ;j++)
	     {cout<<ary[i][j]*2<<" ";}
	     
   	  cout<<endl;  	
	 }*/
	 
	 
	 
	 
	 
	 
	 

	 //(square matrix)ÇáãÕİæİÉ ÇáãÑÈÚÉ
	 //system("start D:/c++/Lac_10/Video_Matrix.mp4"); //İíÏíæ áÔßá ÇáãÕİæİå
	 //system("start D:/c++/Lac_10/matrix.jpg");
	 
	 
/*	 
	 //ÇäÔÆ ãÕİæİÉ ËäÇÆíÉ ËáÇËÉ İí ËáÇËÉ
	 //æíØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÚäÇÕÑåÇ¡ Ëã íŞæã ÈÍÓÇÈ æØÈÇÚÉ ãÌãæÚ ÚäÇÕÑ ßá Õİ Úáì ÍÏÉ
	 int ary[3][3];

    // ÃÏÎá 9 ÚäÇÕÑ
    cout << "Enter 9 elements for (3x3) matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: "; // ÚäÕÑ
            cin >> ary[i][j];
        }
    }
    // ÍÓÇÈ ãÌãæÚ ßá Õİ
    for(int i = 0; i < 3; i++) {
        int sum = 0; // ÊÕİíÑ ÇáãÌãæÚ ãÚ ÈÏÇíÉ ßá Õİ ÌÏíÏ

        for(int j = 0; j < 3; j++) {
            sum += ary[i][j]; //ÅÖÇİÉ ÇáÚäÕÑ Åáì ÇáãÌãæÚ
        }

        cout << "Row " << i << " sum = " << sum << endl;
    } */
	 
	
	
	
	 
	 
/*


    // ÇáÇŞØÇÑ
	 
	 const int SIZE = 4;
    int matrix[SIZE][SIZE];

    // ÇÏÎÇá
    cout << "=== enter 16 numbers for array (4 * 4) ===" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // ØÈÇÚÉ
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // ãÊÛíÑÇÊ ÍİÙ ÇáãÌãæÚ
    int sumMainDiagonal = 0;//ŞØÑ ÇáÑÆíÓí
    int sumSecondaryDiagonal = 0;//ÇáŞØÑ ÇáËÇäæí
    int sumAboveMain = 0;// İæŞ ÇáŞØÑ ÇáÑÆíÓí_ãËáË ÇÚáì
    int sumBelowMain = 0;//ÊÍÊ ÇáŞØÑ ÇáÑÆíÓí_ãËáË ÇÓİá

    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            
            // ÔÑØ ÇáŞØÑ ÇáÑÆíÓí
            if (i == j) {
                sumMainDiagonal += matrix[i][j];
            }

            // ÔÑØ ÇáŞØÑ ÇáËÇäæí
            if (i + j == SIZE - 1) { // Ãí i + j == 3
                sumSecondaryDiagonal += matrix[i][j];
            }

            // ÔÑØ İæŞ ÇáŞØÑ ÇáÑÆíÓí
            if (i < j) {
                sumAboveMain += matrix[i][j];
            }

            // ÔÑØ ÊÍÊ ÇáŞØÑ ÇáÑÆíÓí
            if (i > j) {
                sumBelowMain += matrix[i][j];
            }
        }
    }

    // 4. ØÈÇÚÉ ÇáäÊÇÆÌ æÇáãÌÇãíÚ

    cout << "\n\n. sumMainDiagonal (i == j): " << sumMainDiagonal << endl;
    cout << "2. sumSecondaryDiagonal (i + j == 3): " << sumSecondaryDiagonal << endl;
    cout << "3. sumAboveMain (i < j): " << sumAboveMain << endl;
    cout << "4. sumBelowMain (i > j): " << sumBelowMain << endl;
	 	 
	system("start D:/c++/Lac_10/square_matrix.PNG"); 	 
    system("start D:/c++/Lac_10/Img_matrix.jpg"); */
	 
	 
	 
     
	 
	return 0;
}