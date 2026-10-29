#include <iostream>
int user_output(int token);
int ground(int* score)
{
	user_output(2);
	*score=*score+10+(*score%7);
	std::cout<<"\nyour score is "<<*score<<'\n';
	return 0;
}
