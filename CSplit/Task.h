#pragma once

#include <string>
#include <iostream>

class Task
{
private:

public:
	virtual bool isTask(std::string id) = 0;
	virtual void run(int, std::string*) = 0;
};