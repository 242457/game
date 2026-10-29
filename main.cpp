# include<iostream>
# include<string>
bool enableAnsiVT();
std::string load();
void save(int score);
int gamestart(int* score);
int error(int token);
int main()
{
	enableAnsiVT();
	int score=10;
	try
	{
		score=stoi(load());
	}
	catch(const std::invalid_argument&)
	{
		score=10;
	}
	std::cout<<"\033[2J\033[H";
	int try_time=0;
	int all_time=3;
	again:
	std::cin.clear();
	std::cout<<"\nPlease input password:";
	std::string password;
	std::cin>>password;
	if(std::cin.eof())
	{
		std::cout<<"\nexit...\n";
		return 1;
	}
	if(password!="game")
	{
		try_time++;
		if(try_time>=all_time)
		{
			std::cout<<"\n\033[31mno more try time\nexit...\n\033[0m\n";
			return 1;
		}
		else
		{
			std::cout<<"\nyou have only "<<all_time-try_time<<" try chances\n";
			goto again;
		}
	}
	gamestart(&score);
	save(score);
	return 0;
}
