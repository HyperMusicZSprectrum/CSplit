// CSplit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TaskManager.h"
#include <string>

int main(int argc, char* argv[])
{
	TaskManager manager;
	if (argc > 1)
	{
		std::string* command = new std::string[argc - 1];
		for (int i = 0; i < argc - 1; i++)
			command[i] = argv[i + 1];
		manager.run(argc - 1, command);
	}
    return 0;
}

