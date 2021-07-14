#include "someSharing.hh"
#include <iostream>

using namespace std;

struct someSharing::Hidden {
    string message;
};

someSharing::someSharing(/* args */)
{
    cout << "> someSharing is creating some hidden stuff, don't tell anyone, ok?" << endl;
    secrets = make_unique<Hidden>();
    secrets->message = "BB9E is a traitor.";
    cout << "> someSharing is ready, sir! o7" << endl;
}

someSharing::~someSharing()
{
    cout << "> Best wishes from someSharing~ o/" << endl;
}

void someSharing::whisper() {
    cout << "> I've heard " << secrets->message << " Don't tell anyone, ok?" << endl;
}