#include <iostream>
#include <string>


using namespace std;

//output should be 19:05:45

string timeConversion(string s)
{
	int to_int;
	string result;
	string element;
	
	if(s.at(8) == 'P')
	{
		if(s.at(0) == '1' && s.at(1) == '2')
		{	
			for(int i = 0; i < 8; ++i)
			{
				result += s[i];
			}
			
			return result;	
		}
		
		else
		{
			element = element + s[0] + s[1];
			to_int = stoi(element) + 12;
			result = to_string(to_int) + ":" + s[3] + s[4] + ":" + s[6] + s[7];
			return result;	
		}
		
	}
	
	else if(s.at(8) == 'A')
	{
		if(s.at(0) == '1' && s.at(1) == '2')
		{
			element = element + s[0] + s[1];
			to_int = stoi(element) - 12;
			result = to_string(to_int) + "0" + ":" + s[3] + s[4] + ":" + s[6] + s[7];
			return result;	
		}
		
		else
		{
			for(int i = 0; i < 8; ++i)
			{
				result += s[i];
			}
			
			return result;	
		}
		
	}
	
}

int main()
{
	string s = "12:45:54PM";
	
	cout << timeConversion(s);
	
	
}
