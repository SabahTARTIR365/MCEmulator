#include "Services.h"
#include <queue>
using namespace std;

/*! \brief Add new command to the PriorityQueue
 *
 * adding command will be according to its prority
 * 0 for normal push and 1 to be added to the top of the queue
 */
void Services::Add(Command command)
{
	command.Priority? pushOnTheFrontOfQueue(command): PriorityQueue.push(command);

}

void Services::Excute()
{

}

void Services::Remove(int Id)
{
	if (isExist(Id)) {

	}
	//else printf("not exist");
}

void Services::Abort()
{
}

void Services::pushOnTheFrontOfQueue(Command Currentcommand)
{    
	queue<Command> replacmentQueue;
	while (!PriorityQueue.empty())
	{
		replacmentQueue.push(PriorityQueue.front());
		PriorityQueue.pop();
	}
	PriorityQueue.push(Currentcommand);
	while (!replacmentQueue.empty())
	{
		PriorityQueue.push(replacmentQueue.front());
		replacmentQueue.pop();
	}
}

bool Services::isExist(int Id)
{ 
	queue<Command> TemporaryQueue = PriorityQueue; //copy the original queue to the temporary queue

while (!TemporaryQueue.empty())
{
    Command currentCommand = TemporaryQueue.front();
	if (Id == currentCommand.Id)return true;
    //std::cout << currentCommand <<"\n";
    TemporaryQueue.pop();
} 
	return false;
}
