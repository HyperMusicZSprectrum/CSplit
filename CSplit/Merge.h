#pragma once

#include "Task.h"

class Merge : public Task
{

private:
	std::string id = "merge";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "merge called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

