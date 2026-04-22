#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b,c;
    if(!(cin>>a)){ cout<<"NOA\n"; return 0; }
    if(!(cin>>b)){ cout<<"NOB\n"; return 0; }
    if(!(cin>>c)){ cout<<"NOC\n"; return 0; }
    cout<<"A:"<<a<<" len="<<a.size()<<"\n";
    cout<<"B:"<<b<<" len="<<b.size()<<"\n";
    cout<<"C:"<<c<<" len="<<c.size()<<"\n";
    return 0;
}
