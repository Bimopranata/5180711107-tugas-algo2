#include<iostream>
using namespace::std;
int a,mo;

int  mod(int a,int mo)
{   int m;
cout<<"Modulus \n";
    cout<<"angka:";
    cin>>a;
    cout<<endl;
    cout<<"pembagi:";
    cin>>mo;
    cout<<endl;
    m=a%mo;
    return m;
}
main()
{

    cout<<"hasil :"<<mod(a,mo);
}
