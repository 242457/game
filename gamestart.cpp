#include <iostream>
#include <string>
int user_output(int token);
int error(int token);
int is_all_digit(std::string s);
int ground(int* score);
int gamestart(int* score)
{
	int type;
	std::cout<<"\033[2J\033[Hhello\n";
	while (true)
	{
		next:
		std::cin.clear();
		user_output(0);
		std::string type_s;
		std::cin>>type_s;
		int flag=is_all_digit(type_s);
		if(flag==0)
		{
			type=stoi(type_s);
		}
		else if(flag==1)
		{
			error(2);
			goto next;
		}
		else if(flag==2)
		{
			error(3);
			goto next;
		}
		if(type==0)
		{
			user_output(1);
			std::string exittype;
			std::cin>>exittype;
			if(exittype=="exit")
			{
				return 0;
			}
		}
		else if(type==1)
		{
			ground(score);
		}
		else
		{
			error(4);
		}
	}
	return 0;
}
