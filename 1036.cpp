#include <iostream>
#include<math.h>
using namespace std;
int main() {
 double A,B,C;
 double R1,R2;
    cin>>A>>B>>C;
    
    if((B*B - 4*A*C)<0 || A==0){
        cout<<"Impossivel calcular"<<endl;
    }
    else {
        R1=((-B+(sqrt(B*B-4*A*C)))/(2*A));
        R2=((-B-(sqrt(B*B-4*A*C)))/(2*A));
        printf("R1 = %0.5lf\n",R1);
        printf("R2 = %0.5lf\n",R2);
    }
 
    return 0;
}