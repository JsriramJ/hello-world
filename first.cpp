#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
  string uid;
  int a[3][6]; // double basic, DA,IT,NS;

  void display(char a)
  {
    /* if(a=='n')
        cout<<"name of ths user ="<<name<<endl;
     else if(a=='u')
            cout<<"uid of the user ="<<uid<<endl;
     else if (a=='p')
        cout<<"the phone number="<<phn<<endl;
     else if(a=='a')
        cout<<"the details are \n"<<name<<endl<<uid<<endl<<phn<<endl;
         else if (a=='s')
        cout<<"the NA salary is"<<NS<<endl;*/
  }
};
/*void avg(int p, int n)
{  double sum=0;
   for (int i=0;i<n;i++)
   {int min= e[i].a[p-1][0];
    for(int j=0;j<3;j++)
    {
        sum=sum+e[i].a[p-1][j];
        if(e[i].a[p-1][j]<min)
        {
            min=e[i].a[p-1][j];
        }
    }
    sum=sum-min;
   }
   cout<<sum/(3.0*n);
}*/

int main()
{
  int n, k;
  char z;
  cout << "enter the number of students\n";
  cin >> n;
  employee e[n];
  for (int j = 0; j < n; j++)
  {
    cout << "enter the details of the " << j + 1 << " th student\n";
    cin >> e[j].uid;
    for (int i = 0; i < 3; i++)
    {
      for (int k = 0; k < 6; k++)
      {
        cout << " test " << i + 1 << "and subject " << k + 1 << "\n";
        cin >> e[j].a[i][k];
      }
    }
  }
  int q = 1;
  while (q > 0)
  {
    int p;
    cout << "enter which cource average should be found  ";
    cin >> p;
    // avg(p,n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
      int min = e[i].a[0][p - 1];
      for (int j = 0; j < 3; j++)
      {
        sum = sum + e[i].a[j][p - 1];
        if (e[i].a[j][p - 1] < min)
        {
          min = e[i].a[j][p - 1];
        }
      }
      sum = sum - min;
    }
    cout << sum / (2.0 * n);
    cout << "if you want to continue enter greater than 0";
    cin >> q;
  }
  return 0;
}