# include<iostream>
# include<string>
std::string load();
void save(int score);
int gamestart(int* score);
int is_all_digit(std::string s);
int error(int token);
int main()
{
	int score=10;
	std::string score_s=load();
	int flag=is_all_digit(score_s);
	if(flag==0)
	{
		score=stoi(score_s);
	}
	else if(flag==1)
	{
		error(2);
	}
	else if(flag==2)
	{
		error(3);
	}
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
	gamestart(&score);
	save(score);
}
