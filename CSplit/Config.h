#pragma once

#include "Task.h"

class Config : public Task
{

private:
	std::string id = "config";

public:
	virtual void run(int argc, std::string* argv)
	{
		if (argc == 1)
		{

		}
		else if (argc == 2)
		{

		}
		else
		{

		}
		std::cout << "config called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

