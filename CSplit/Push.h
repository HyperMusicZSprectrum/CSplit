#pragma once

#include "Task.h"

class Push : public Task
{

private:
	std::string id = "push";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "push called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

