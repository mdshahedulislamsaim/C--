#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    if(b>a && c>b && d>c && e>d)
    {
        cout<<"C"<<endl;    
    }
    else if(b<a && c<b && d<c && e<d )
    {
        cout<<"D"<<endl;    
    }
    else{
        cout<<"N"<<endl;
    }
    
 
    return 0;
}