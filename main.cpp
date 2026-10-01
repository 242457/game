
# include<iostream>
# include<string>
int gamestart(int* score);
int main()
{
	std::cout<<"\033[2J\033[HPlease input password:";
	std::string password;
	std::cin>>password;
	if(password!="game")
	{
		return 1;
	}
	int score=10;
	gamestart(&score);
}
