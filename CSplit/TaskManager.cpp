#include "stdafx.h"
#include "TaskManager.h"


TaskManager::TaskManager()
{
	tasks = new Task*[taskCount];
	tasks[0] = new Config;
	tasks[1] = new Clone;
	tasks[2] = new Status;
	tasks[3] = new Log;
	tasks[4] = new Pull;
	tasks[5] = new Push;
	tasks[6] = new Add;
	tasks[7] = new Commit;
	tasks[8] = new Merge;
	tasks[9] = new Help;
}


TaskManager::~TaskManager()
{
	delete[] tasks;
}

void TaskManager::run(int argc, std::string* argv)
{
	for (int i = 0; i < taskCount; i++)
		if (tasks[i]->isTask(argv[0]))
			return tasks[i]->run(argc, argv);
	std::cout << "command not found";
}
