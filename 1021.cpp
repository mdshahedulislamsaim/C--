#include <iostream>
 using namespace std;
int main() {
 
    float n;
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin>>n;
    
    a = n/100;
    b = (n-a*100)/50;
    c = (n-a*100-b*50)/20;
    d = (n-a*100-b*50-c*20)/10;
    e = (n-a*100-b*50-c*20-d*10)/5;
    f = (n-a*100-b*50-c*20-d*10-e*5)/2;
    
    cout<<"NOTAS:\n"<<a<<" nota(s) de R$ 100.00\n"<<b<<" nota(s) de R$ 50.00\n"<<c<<" nota(s) de R$ 20.00\n"<<d<<" nota(s) de R$ 10.00\n"<<e<<" nota(s) de R$ 5.00\n"<<f<<" nota(s) de R$ 2.00\n";
    
    g = (n-a*100-b*50-c*20-d*10-e*5-f*2);
    h = ((n-a*100-b*50-c*20-d*10-e*5-f*2-g)*100)/50;
    i = (((n-a*100-b*50-c*20-d*10-e*5-f*2-g)*100)-h*50)/25;
    j = (((n-a*100-b*50-c*20-d*10-e*5-f*2-g)*100)-h*50-i*25)/10;
    k = (((n-a*100-b*50-c*20-d*10-e*5-f*2-g)*100)-h*50-i*25-j*10)/5;
    l = ((n-a*100-b*50-c*20-d*10-e*5-f*2-g)*100)-h*50-i*25-j*10-k*5;
    
    cout<<"MOEDAS:\n"<<g<<" moeda(s) de R$ 1.00\n"<<h<<" moeda(s) de R$ 0.50\n"<<i<<" moeda(s) de R$ 0.25\n"<<j<<" moeda(s) de R$ 0.10\n"<<k<<" moeda(s) de R$ 0.05\n"<<l<<" moeda(s) de R$ 0.01\n";
 
    return 0;
}