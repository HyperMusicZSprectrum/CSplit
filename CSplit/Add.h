#pragma once

#include "Task.h"

class Add : public Task
{

private:
	std::string id = "add";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "add called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

