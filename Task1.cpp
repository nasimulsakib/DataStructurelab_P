#include <iostream>
using namespace std;
int main(){
int array1[]= {1,2,3,4,5};
int array2[]= {6,7};
int array3[]{8};
for (int i=0; i<5; i++) {
    array3[i]=array1[i];
}
for (int i=5;i<8; i++){
    array3[i]=array2[i-5];
}
for (int i=8;i=0;i--)
{
    cout<<array3[i]<<' ';
}
return 0;
}
