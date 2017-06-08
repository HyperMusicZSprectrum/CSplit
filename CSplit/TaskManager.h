#pragma once

#include <iostream>

#include "Task.h"
#include "Commands.h"

class TaskManager
{
public:
	TaskManager();
	~TaskManager();

private:
	Task **tasks;
	int taskCount = 10;

public:
	void run(int argc, std::string* argv);
};

