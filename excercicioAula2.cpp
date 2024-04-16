#include <iostream>
#include <string>
using namespace std;

int main (){
    
    string palavra1, palavra2;
    cout << "Digite a sua primeira palavra: "; 
    cin >> palavra1;
    cout << "Digite a sua segunda palavra: "; 
    cin >> palavra2;
    cout << "Sua palavra: " << palavra1 + palavra2 << endl;

    return 0;
}