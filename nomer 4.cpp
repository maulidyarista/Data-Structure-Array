#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int matA[2][3]={1,2,1,2,1,2};
   int matB[3][2]={3,4,3,4,3,4};
   cout<<"Nama : Maulidya Rista Yuniar"<<endl;
   cout<<"NIM/Prodi : 19051397057/D4 RPL B 2019"<<endl;
   cout<<endl<<"matriks A"<<endl;
   for (int i=0; i<2; i++)
   {
    for (int j=0; j<3; j++)
    {
        cout<<matA[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<"matriks B"<<endl;
   for (int i=0; i<3; i++)
   {
    for (int j=0; j<2; j++)
    {
        cout<<matB[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<"Hasil perkalian matriks A dan B "<<endl;
   for (int i=0; i<2; i++)
   {
    for (int j=0; j<2; j++)
    {
        cout<<matA[i][0]*matB[0][j]+matA[i][1]*matB[1][j]+matA[i][2]*matB[2][j]<<" ";
    }
    cout <<endl;
   }
   return 0;
}
