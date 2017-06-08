#pragma once

#include "Task.h"

class Help : public Task
{

private:
	std::string id = "help";

public:
	virtual void run(int argc, std::string* argv)
	{
		if(argc==1)
			std::cout << "help called";
		else
			std::cout << "help called with args";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

