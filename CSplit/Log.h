#pragma once

#include "Task.h"

class Log : public Task
{

private:
	std::string id = "log";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "log called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

