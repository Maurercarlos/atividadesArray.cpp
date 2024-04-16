#include <iostream>
#include <string>
using namespace std;

int main (){
    
    char palavra [5];
    cout << "Digite sua palavra: "; 
    cin >> palavra;

    if (palavra[0] == 'a') {
        palavra[0] = 'e';
    } else if (palavra [1] == 'a') {
        palavra [1] = 'e';
    } else if (palavra[2] == 'a') {
        palavra [2] = 'e';
    } else if (palavra[3] == 'a') {
        palavra[3] = 'e';
    } else if (palavra[4] == 'a') {
        palavra[4] = 'e';
    } else if (palavra[5] == 'a') {
        palavra[5] = 'e';
    } 
    return 0;
}