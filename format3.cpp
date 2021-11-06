/** Cho mot chuoi lien. Xoa het vung ki tu neu ki tu do xuat hien chan lan canh nhau. Chi de lai 1 ki tu neu ki tu do xuat hien le lan canh nhau. Xu li lien tuc chuoi.
VD: abbbccd -> abd
abccccba -> blank
*/

#include<iostream>
#include<string>

using namespace std;

string chuanhoa(const string &s) //s truyen toi copy cua value, &s truyen toi chinh value do
{
	string res;
	string _s = s;
	bool co = true;
	while(co)
	{
		co = false;
		int len = _s.length();
		res = "";
		
		for (int i = 0; i<len; )
		{
			if(_s[i] == _s[i+1])
			{
				co = true;
				i +=2;
			}
			else
			{
				res = res + _s[i];
				i++;
			}
		}
		_s = res;
	}
	return res;
}


int main()
{
	string s;
	getline (cin, s);
	cout<<chuanhoa(s);
	return 0;
}
