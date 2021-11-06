/** 
Chuan hoa chuoi: Nhap vao 1 chuoi (chu cai va dau cach), viet ham chuan hoa:
Tai cac vi tri chan: ki tu in hoa
Tai cac vi tri le: ki tu thuong
coi vi tri dau tien la 1 ([0] = 1)
*/

#include<iostream>
#include<string>

using namespace std;

char toup(char c)
{
	if(c>='a' && c<='z')
	{
		return (char(c-32));
	}
	return c;
}

char tolow(char c)
{
	if(c>='A' && c<='Z')
	{
		return (char(c+32));
	}
	return c;
}

string chuanhoa(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(i%2==0){
			s[i]=toup(s[i]);
		}
		else{
			s[i]=tolow(s[i]);
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
