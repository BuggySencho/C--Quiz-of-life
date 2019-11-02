#pragma once
#include<string>
class Username
{
public:
	Username(std::string aName);
	~Username();
	std::string GetName();
private:
	std::string name;
};

