#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Input a number to search:";
    cin>>n;
    int arr[10]={8,4,6,1,6,9,6,1,9,8};
    for(int i=0;i<10;i++)
    {
        if(n==arr[i])
        {
            count++;
        }
    }
    cout<<"The number occurs "<<count<<" times in the array";
return 0;
}
