#include <iostream>
int user_output(int token)
{
	if(token==0)
	{
		std::cout<<"\nplease type 0 to exit ; please type 1 to go to ground to improve score :";
		return 0;
	}
	else if(token==1)
	{
		std::cout<<"\nplease type \033[33m\"exit\"\033[0m  to exit :";
		return 0;
	}
	else if(token==2)
	{
		std::cout<<"\033[1;30;42myou will meet a monster , try hard to kill it.\033[0m\n";
		return 0;
	}
	else
	{
		return 1;
	}
}
