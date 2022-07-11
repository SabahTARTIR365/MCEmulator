#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
#include "Command.cpp"
using namespace std;




int main() {
    printf("Hello, World!\n");
	Command m(123456, "read", false);
	m.print();

    Command my;
    my.Id = 1111111;
    my.Priority = true;
    my.Type = "Write";
    /*my.data->Value = 1;
    my.data->Length = 1;
    my.data->Address = 1;*/
    my.print();
    return 0;
}

