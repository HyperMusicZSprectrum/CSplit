#pragma once

#include "Task.h"

class Pull : public Task
{

private:
	std::string id = "pull";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "pull called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

