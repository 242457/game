# include<iostream>
# include<string>
bool enableAnsiVT();
std::string load();
void save(int score);
int gamestart(int* score);
std::string load();
int error(int token);
int main()
{
	enableAnsiVT();
	int score;
	std::string score_s=load();
	score=stoi(score_s);
	std::cout<<"\033[2J\033[H";
	int try_time=0;
	int all_time=3;
	again:
	std::cin.clear();
	std::cout<<"Please input password:";
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
			std::cout<<"\033[31mno more try time\nexit...\n\033[0m";
			return 1;
		}
		else
		{
			std::cout<<"you have only "<<all_time-try_time<<" try chance\n";
			goto again;
		}
	}
	gamestart(&score);
	save(score);
}
