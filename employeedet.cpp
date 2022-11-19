#include <iostream>
#include <string>
using namespace std;
class employee
{
 public:
     string name,uid;long int phn;
     void display(char a)
     {
         if(a=='n')
            cout<<"name of ths user ="<<name<<endl;
         else if(a=='u')
                cout<<"uid of the user ="<<uid<<endl;
         else if (a=='p')
            cout<<"the phone number="<<phn<<endl;
         else if(a=='a')
            cout<<"the details are \n"<<name<<endl<<uid<<endl<<phn<<endl;

     }
};
int main()
{   int n,k;char z;
    cout<<"enter the number of employees\n";
    cin>>n;
    employee e[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the details of the "<<i+1<<" th employee in the format name uid phone number \n";
        cin>>e[i].name>>e[i].uid>>e[i].phn;
    }
    int q=1;
    while(q>0)
    {
    cout<<"enter whose details and what to display\n";
    cin>>k>>z;
    e[k-1].display(z);
    cout<<"if you want to continue enter greater than 0";
    cin>>q;
    }
    return 0;
}