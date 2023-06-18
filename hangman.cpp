#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s = "hey";
    string s2 = s;
    int n = s.size();
    vector<string> word(n);
    vector<string> x(n, "*");

    for (int i = 0; i < n; i++) {
        word[i] = s[i];
    }
int cpt=0;
 while(cpt!=4){   string input;
    cout << "Enter char: ";
    cout<<"\n";
    cin >> input;

    bool statu = false;
    for (int i = 0; i < n; i++) {
        if (input == word[i]) {
            statu = true;
            x[i] = input;
            word[i] = "9999";
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << x[i];
    }
    cout<<"\n";
    if(cpt==3){
        cout<<"\n";
        cout<<"you lose! the word was "<<s2;
    }
    cpt++;
}
    return 0;
}
