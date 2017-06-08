#include "stdafx.h"
#include "Initialize.h"


Initialize::Initialize()
{
	id = "init";
}


Initialize::~Initialize()
{
}

void Initialize::run()
{
	std::cout << "called init";
}

bool Initialize::isTask(std::string id)
{
	return id.compare(this->id) == 0;
}
