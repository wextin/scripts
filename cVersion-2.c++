#include <iostream>
using namespace std;

int main() {
    
    int k, n, month, year, yearV;  
    
    cout<<"Введите год: ";
    cin>>year;
    cout<<"Введите день: ";
    cin>>k;
    cout<<"Введите день недели: ";
    cin>>n;
    month = 0;
    yearV = 28;
    
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            yearV = 29;
    } 
    else {
        yearV = 28;
    }
} 
    else {
        yearV = 28;
    }
    
    int arrDays[] = 
    {31, yearV, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    string arrMonths[] = 
    {"Января", "Февраля", "Марта", "Апреля", "Мая", "Июня", 
    "Июля", "Августа", "Сентября", "Октября", "Ноября", "Декабря"};
            
    while (k > arrDays[month]) {
    k -= arrDays[month];
    month++;
}

    string monthname = arrMonths[month];
    string arrWeek[] = 
    {" ", "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"};
    
    string week = arrWeek[n];
    
    cout<<k<<" "<<monthname<<", "<<week<<" "<<year<<" года";


    return 0;
}