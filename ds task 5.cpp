#include<iostream>
using namespace std;
int main()
{

    int arr[10]={8,4,6,1,6,9,6,1,9,8};
    int count=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr[i]==arr[j])
        {
            count++;
        }
        }
        cout<<arr[i]<<" occurs ="<< count<<" times."<<endl;
        count=0;

    }
   }
