#include<iostream>
using namespace std;
struct student
{
    int ID;
    string name;
    int Credit;
    float cgpa;
};
int main()
{
    struct student s[20],temp;
    int i,j,n,z,chk,index,large,f;
    cout<<"Number of Student:";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout << " Information of " << (i + 1) << "th student"<< endl;
        cout<<"Student ID: ";
        cin>>s[i].ID;
        cout<<"Name: ";
        cin>>s[i].name;
        cout<<"Credit Completed: ";
        cin>>s[i].Credit;
        cout<<"CGPA: ";
        cin>>s[i].cgpa;
    }

    cout<<"Please choose the option:"<<endl;
    cout<<"1.Bubble sort CGPA wise "<<endl;
    cout<<"2.Selection sort credit wise"<<endl;
    cout<<"3.Search based on CGPA"<<endl;

    cin>>z;
    switch (z)
    {
    case 1:
        for(i=0; i<=n-1; i++)
        {
            for(j=0; j<=n-1; j++)
            {
                if(s[j].cgpa<s[j+1].cgpa)
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
        }
        cout<<"According to cgpa: "<<endl;
        for(j=0; j<n; j++)
            cout<<s[j].ID<<endl;

        break;

    case 2:
        for(i=0; i<(n-1); i++)
        {
            chk=0;
            large = s[i].cgpa;
            for(j=(i+1); j<n; j++)
            {
                if(large<s[j].cgpa)
                {
                    large = s[j].cgpa;
                    chk++;
                    index = j;
                }
            }
        }
        cout<<endl<<"According to cgpa:\n";
        for(i=0; i<n; i++)
            cout<<s[i].cgpa<<" ";
        cout<<endl;
        break;

    case 3:
        cout<<"Search Student ID:";
        cin>>f;


        if(s[i].ID == f)
        {
            cout<<s[i].cgpa<<endl;
        }
        break;
    }
}
