#include <iostream>
using namespace std;
int main() {
    
    int start, finish, result;
    
    cout<<"От числа: ";
    cin>>start;
    cout<<"До числа: ";
    cin>>finish;
    cout<<endl;
    
    for(int i = start; i <= finish; i++){
        if(i % 2 != 0){
            // cout<<i<<", ";
            result += i;
        }
    }
    cout<<result;
    return 0;
}
