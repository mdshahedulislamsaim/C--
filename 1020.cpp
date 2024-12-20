#include <iostream>
 using namespace std;
int main() {
    
    int age,y,m,d;
    cin>> age;
    
    y = age/365;
        m = (age-(y*365))/30;
            d =(age-((y*365)+(m * 30)));
            
    cout<<y<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<d<<" dia(s)"<<endl;
 
    
 
    return 0;
}