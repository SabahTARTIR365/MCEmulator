#pragma once
#include <queue>
#include "Command.cpp"
class Services
{

public:
    std::queue<Command> PriorityQueue;
    void Add(Command command);
    void Excute();
    void Remove(int Id);
    void Abort();
    void pushOnTheFrontOfQueue(Command Currentcommand);
    bool isExist(int Id);
};

