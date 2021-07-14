#include "someSharing.hh"
#include <iostream>

using namespace std;

int main() {
    cout << "Testing someSharing engine." << endl;
    someSharing ss;
    cout << "Engine is ready to work." << endl;
    ss.whisper();
    cout << "Lets stop the whipers here" << endl;
    ss.reveal();
    cout << "Engine looks good from here." << endl;
    return 0;
}