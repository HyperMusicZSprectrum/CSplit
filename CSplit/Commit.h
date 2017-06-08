#pragma once

#include "Task.h"

class Commit : public Task
{

private:
	std::string id = "commit";

public:
	virtual void run(int argc, std::string* argv)
	{
		std::cout << "commit called";
	}

	virtual bool isTask(std::string id)
	{
		return id == this->id;
	}


};

