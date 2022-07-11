
#include <cstdint>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
struct Command {
	int Id;
	char Type[10]="hi";
	bool Priority;
	//Data *data;
	string print()const { //to_string() const {
		printf("Hello, World! -----------SABAAAAAAAAAAAAH \n");
	    //printf(" Command # %d ,%s ,%b \n", Id, Type, Priority);
		cout << Id;
		cout << Type;
		cout << Priority;
		cout << "hello--------------------------------------------";
		//cout << "{ Command #" << Id << "( " + Type + ") " << Priority ? "Quick command " : "Simple command";
		return "{ Command #" + std::to_string(Id) + "( " +Type+ ") " + (Priority ? "Quick command " : "Simple command") + " }";
	}
};

struct Data{
	uint8_t Length;
	uint8_t Value;// [Length] ;// 
	uint8_t Address;
	
};

struct Response
{  
	Command command;
	string status;

};