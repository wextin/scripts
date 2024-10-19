#include <iostream>
using namespace std;

int main() {
    
    int k, n, month;  
    
    cout<<"Введите день: ";
    cin>>k;
    cout<<"Введите день недели: ";
    cin>>n;
    month = 0;
    
    int arrDays[] = 
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    string arrMonths[] = 
    {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", 
    "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
            
    while (k > arrDays[month]) {
    k -= arrDays[month];
    month++;
}

    string monthname = arrMonths[month];
    string arrWeek[] = 
    {" ", "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"};
    
    string week = arrWeek[n];
    
    cout<<k<<" "<<monthname<<", "<<week;


    return 0;
}
