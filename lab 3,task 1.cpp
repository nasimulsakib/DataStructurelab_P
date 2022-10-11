#include <iostream>
using namespace std;

int main()
 {
   int a[3][4];
   cout <<"\n Enter The Elements Of Matrix(3,4):"<< endl;

   for (int i=0; i<3; i++)
        {
      for (int j=0; j<4; j++)
      {
         cin >>a[i][j];}
}
   cout << "Matrix 1: "<< endl;
   for (int i=0; i<3; i++)
    {
      for (int j=0; j<4; j++)
       {
         cout << " " << a[i][j];}
            cout << endl << endl;}
for (int i=0; i<4; i++)
      for (int j=0; j<3; j++)
    {
         a[j][i] = a[j][i];}
   cout << "Transpose of Matrix: " << endl;
   for (int i=0; i<4; i++)
   {
      for (int j=0; j<3; j++)
{
         cout << " " << a[j][i];}
            cout << endl << endl;}

return 0;
}
