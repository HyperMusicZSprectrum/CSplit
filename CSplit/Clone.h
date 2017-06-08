#pragma once

#include "Task.h"

class Clone : public Task
{

private:
	std::string id = "clone";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "clone called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

