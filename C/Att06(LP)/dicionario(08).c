#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);
    
    for (int i = 0; i < frase.size(); i++) {
        cout << frase[i] << ": " << i << endl;
    }
    
    return 0;
}
