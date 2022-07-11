#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
//#include "Command.cpp"
using namespace std;

struct Command {
	int Id;
	string Type = "write";
	bool Priority=true;
	//Data *data;

	string IsQuickCommand()const {
		return Priority ? "Quick command " : "Simple command";
	}
	void print()const {
		printf("Inside Print function \n");	
		cout << "Command #" << Id << "( " + Type + ") " << IsQuickCommand()<<"\n";
	}

	Command(int id,string type,bool priority ) {
		Id = id;
		Type = type;
		Priority = priority;
	}
	Command(){}
};

struct Data {
	uint8_t Length;
	uint8_t Value;// [Length] ;// 
	uint8_t Address;

};

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

