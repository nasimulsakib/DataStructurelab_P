#include<iostream>
using namespace std;
struct product{
int p_id;
string p_name;
string cate;
int u_price;
};


    int main()
    {
    struct product p[10],temp;
    int i,j,n,z,chck,index,big,f,small;
    string name;

    cout<<"Number of products;";
    cin>>n;
    for(i=0;i<n;i++)
        {
        cout << " Information of " << (i + 1) << "th product"<< endl;
        cout<<"Product ID: ";
        cin>>p[i].p_id;
        cout<<"Product Name: ";
        cin>>p[i].p_name;
        cout<<"Product Category: ";
        cin>>p[i].cate;
        cout<<"Product Price: ";
        cin>>p[i].u_price;

    }
     cout<<"Option:"<<endl;
    cout<<"1.Bubble sort Price wise "<<endl;
    cout<<"2.Selection sort Price wise"<<endl;
    cout<<"3.Search based on Product Name"<<endl;

    cin>>z;
    {
            switch (z)
    {
    case 1:
        for(i=0; i<=n-1; i++)
        {
            for(j=0; j<=n-1; j++)
            {
                if(p[j].u_price<p[i].u_price)
                {
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
        cout<<"According Price: "<<endl;
        for(j=0;j<n;j++)
            cout<<p[j].u_price<<endl;

        break;
          case 2:
        for(i=0; i<(n-1); i++)
        {
            chck=0;
            small = p[i].u_price;
            for(j=(i+1); j<n; j++)
            {
                if(p[j].u_price<p[small].u_price)
                {
                    small= p[j].u_price;
                    temp=p[small];
                    p[small]=p[i];
                    p[i]=temp;
                    chck++;
                }
            }
        }
                cout<<endl<<"According to Price:\n";
        for(i=0; i<n; i++)
            cout<<p[i].u_price<<" ";
        cout<<endl;
        break;

            case 3:

        cin>>name;
        for(i=0; i<n;i++)
            if(name == p[i].p_name)
            cout<<"Found";
        chck++;
        if(chck=1){
            "Not Found";
        }
        cout<<endl;
    }
    }
    }



