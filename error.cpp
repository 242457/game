#include <iostream>
int error(int token)
{
	if(token==1)
	{
		std::cerr<<"\033[1;31mERROR!!!INVALID COMMAND!!!\033[0m";
		return 0;
	}
	return -1;
}
