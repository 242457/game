# include<iostream>
# include<string>
int gamestart(int* score);
int main()
{
	std::cout<<"\033[2J\033[H";
	int try_time=0;
	int all_time=3;
	again:
	std::cout<<"Please input password:";
	std::string password;
	std::cin>>password;
	if(password!="game")
	{
		try_time++;
		if(try_time>=all_time)
		{
			std::cout<<"\033[31mno mour try time\nexit...\n\033[0m";
			return 1;
		}
		else
		{
			std::cout<<"you hvae only "<<all_time-try_time<<"try chance\n";
			goto again;
		}
	}
	int score=10;
	gamestart(&score);
}
