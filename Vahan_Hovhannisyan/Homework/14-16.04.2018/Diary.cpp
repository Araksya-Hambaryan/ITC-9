
#include <iostream> 
#include <fstream> 

using namespace std;

void checkForName(string str) {
    ifstream file("diary.txt"); // pass file name as argment
    string linebuffer;
    int i = 0;
    bool isName = false;
    while (file && getline(file, linebuffer)) {
        if (0 == linebuffer.length()) {
            continue;
        }
        while (' ' != linebuffer[i]) {
            i++;
        }
        if (str == linebuffer.substr(0, (i))) {
            cout << "Met " << linebuffer << "\n";
            isName = true;
            break;
        } else if (str == linebuffer.substr(i + 1, linebuffer.length())) {
            cout << "Met " << linebuffer << "\n";
            isName = true;
            break;
        }
    }
    if (false == isName) {
        cout << "No such name or date in diary.";
    }
}

void inputStr(string& str) {
    cout << "Input a name or date please: ";
    getline(cin, str);
}

int main() {
    string str;
    inputStr(str);
    checkForName(str);

    return 0;
}