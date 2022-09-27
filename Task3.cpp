#include <iostream>
using namespace std;
int main(){
int a;
int count = 1;
int array1[]= {1,2,3,25};
int array2[]={1,2,3};

cout <<"Array_1 : ";
for (int i=0; i<5; i++){cout<< array1[i]<<' ';
}
cout<<endl<<"Single elements:";
for(int i=0; i<5; i++){
    int a;
    for(a=0;a,i; a++)
        if (array1[i]==array1[a])
        break;
    if(i== a)
        cout<<array1[i]<<"";

}
cout<<endl<<"Single elements:";
for(int i=0; i<5; i++){
    int a;
    for(a=0;a,i; a++)
        if (array2[i]==array2[a])
        break;
    if(i== a)
        {cout<<array1[i]<<"";}
        else{cout<<endl<<"Didn't Match";}
}
return 0;
}
