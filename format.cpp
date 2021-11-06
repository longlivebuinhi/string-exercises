#include<iostream>
#include<string>

using namespace std;

string chuanhoa(string s)
{
	while(s[0] == ' ')
	{
		s.erase(0,1);
	}
	while(s[s.length()-1] == ' ')
	{
		s.erase(s.length()-1, 1);
	}
	while(s.find("  ") != -1)
	{
		s.erase(s.find("  "),1);
	}
	s[0]=toupper(s[0]);
	
	for(int i=0; i<=s.length(); i++)
	{
		if(s[i] == ' ')
		{
			s[i+1]=toupper(s[i+1]);
		}
	}
	return s;
}

int main()
{
	string s;
	getline (cin, s);
	
	cout<<chuanhoa(s);
	
	return 0;
}
