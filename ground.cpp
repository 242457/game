#include <iostream>
int user_output(int token);
int ground(int* score)
{
	user_output(2);
	*score=*score+*score/10;
	std::cout<<"your score is "<<*score;
	return 0;
}
