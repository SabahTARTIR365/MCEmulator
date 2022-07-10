// Memory CardEmulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <queue>
#include "Command.cpp"
using namespace std;

int main() {
    printf("Hello, World!");
    Command my;
    my.Id = 1111111;
    my.Priority = true;
    my.Type = "Write";
    /*my.data->Value = 1;
    my.data->Length = 1;
    my.data->Address = 1;*/
    string s = my.print();
    printf("%c", s);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
