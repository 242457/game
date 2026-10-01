#include <iostream>
int error(int token)
{
	if(token==1)
	{
		std::cerr<<"\033[1;31mERROR!!!NO THIS INPUT!!!\033[0m";
		return 0;
	}
	else if(token==2)
	{
		std::cerr<<"\033[1;31mERROR!!!BAD INPUT!!!\033[0m";
		return 0;
	}
	else if(token==3)
	{
		std::cerr<<"\033[1;31mERROR!!!VALUE TOO BIG!!!\033[0m";
		return 0;
	}
	else if(token==4)
	{
		std::cerr<<"\033[1;31mERROR!!!INVALID COMMAND!!!\033[0m";
		return 0;
	}
	return -1;
}
