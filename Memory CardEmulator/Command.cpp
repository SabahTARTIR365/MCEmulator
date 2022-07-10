
#include <cstdint>
#include <string.h>
#include <string>
using namespace std;
struct Command {
	int Id;
	string Type;
	bool Priority;
	//Data *data;
	string print()const { //to_string() const {
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