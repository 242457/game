#include <string>
#include <iostream>
int is_all_digit(std::string s)
{
	if(s.size()==0)
	{
		return 1;
	}
	if(s.size()>10)
	{
		return 2;
	}
	for(size_t i=0;i<s.size();i++)
	{
		if(!(s[i] >= '0' && s[i] <= '9'))
		{
			return 1;	
		}
	}
	if(s.size()==10)
	{
		std::string max="2147483647";
		for(int i=0;i<10;i++)
		{
			if(!(s[i]<=max[i]&&s[i]>'0'))
			{
				return 2;
			}
		}
	}
	return 0;
}
