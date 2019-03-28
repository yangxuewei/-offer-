#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


string scanDigital(string s, int &begin)
{
	string number;
	while (begin < s.length() && s[begin] <= '9'&&s[begin] >= '0')
	{
		number += s[begin];
		begin++;
	}
	return number;
}

void scanNoDigital(string s, int &pos)
{
	while (pos < s.length() && s[pos]!='-'&&s[pos]!='+'&&(s[pos]<'0'||s[pos]>'9'))
	{
		pos++;
	}
}

int main()
{
	string s = "as-200-50as+1aa-a+ad5";
	int pos = 0;
	int flag = 1;//正负号，初始化为1
	vector<string> result;
	vector<int> number;
	string temp="";
	while (pos < s.length())
	{
		if (s[pos] == '-')
		{
			flag = -1;
			pos++;
			temp = scanDigital(s, pos);
			if (!temp.empty())
			{
				temp = "-" + temp;
				result.push_back(temp);
			}
		}
		else if (s[pos] == '+')
		{
			flag = 1;
			pos++;
			temp = scanDigital(s, pos);
			if (!temp.empty())
			{
				result.push_back(temp);
			}
		}
		else if (s[pos] <= '9'&&s[pos] >= '0')
		{
			flag = 1;
			temp = scanDigital(s, pos);
			if (!temp.empty())
			{
				result.push_back(temp);
			}
		}
		scanNoDigital(s, pos);
	}
	for (int i = 0; i < result.size(); ++i)
	{
		number.push_back(stoi(result[i]));
	}
	return 0;
}
