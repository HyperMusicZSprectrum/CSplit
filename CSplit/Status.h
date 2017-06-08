#pragma once

#include "Task.h"

class Status : public Task
{

private:
	std::string id = "status";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "status called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

