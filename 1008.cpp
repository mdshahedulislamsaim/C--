#include <iostream>
 using namespace std;
int main() {
 
    int NUMBER,work_hours;
    float received_hour,SALARY;
    cin>>NUMBER>>work_hours>>received_hour;
    SALARY=work_hours*received_hour;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);
 
    return 0;
}