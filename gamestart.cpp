#include <iostream>
#include <string>
int user_output(int token);
int error(int token);
int ground(int* score);
int gamestart(int* score)
{
	std::cout<<"\033[2J\033[Hhello\n";
	while (true)
	{
		std::cin.clear();
		user_output(0);
		std::string type;
		std::cin>>type;
		if(std::cin.eof())
		{
			std::cout<<"\nexit...\n";
			break;
		}
		if(type=="0")
		{
			user_output(1);
			std::string exittype;
			std::cin>>exittype;
			if(exittype=="exit")
			{
				return 0;
			}
		}
		else if(type=="1")
		{
			ground(score);
		}
		else
		{
			error(1);
		}
	}
	return 0;
}
