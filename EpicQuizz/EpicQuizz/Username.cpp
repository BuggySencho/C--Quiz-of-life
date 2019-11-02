#include "Username.h"

Username::Username(std::string aName)
	:name(aName)
{

}

Username::~Username()
{

}

std::string Username::GetName()
{
	return name;
}
