#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    
    cin>>a;
    if(a>=0 && a<=400){
    b=(a*0.15);
    c=a+b;
    printf("Novo salario: %.2f\n",c);
    printf("Reajuste ganho: %.2f\n",b);
    cout<<"Em percentual: 15 %"<<endl;
    }
    else if(a>400 && a<=800){
    b=(a*0.12);
    c=a+b;
    printf("Novo salario: %.2f\n",c);
    printf("Reajuste ganho: %.2f\n",b);
    cout<<"Em percentual: 12 %"<<endl;
    }
    else if(a>800 && a<=1200){
    b=(a*0.1);
    c=a+b;
    printf("Novo salario: %.2f\n",c);
    printf("Reajuste ganho: %.2f\n",b);
    cout<<"Em percentual: 10 %"<<endl;
    }
    else if(a>1200 && a<=2000){
    b=(a*0.07);
    c=a+b;
    printf("Novo salario: %.2f\n",c);
    printf("Reajuste ganho: %.2f\n",b);
    cout<<"Em percentual: 7 %"<<endl;
    }
    else if(a>2000){
    b=(a*0.04);
    c=a+b;
    printf("Novo salario: %.2f\n",c);
    printf("Reajuste ganho: %.2f\n",b);
    cout<<"Em percentual: 4 %"<<endl;
    }
    
 
    return 0;
}