#include "someHiddenStatic.hh"
#include <iostream>

using namespace std;

someHiddenStatic::someHiddenStatic() {
    cout << ">> someHiddenStatic is creating some hidden stuff." << endl;    
    message = "BB9E is a double agent.";
    cout << ">> someHiddenStatic is ready." << endl;
}

someHiddenStatic::~someHiddenStatic() {
    cout << ">> someHiddenStatic says goodbye." << endl;
}

void someHiddenStatic::reveal() {
    cout << ">> The truth is " << message << endl;
}