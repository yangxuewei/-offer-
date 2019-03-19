#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> array = { 0,5,7,19,58 };
	//´¦ÀíÍ·
	cout << "[";
	int start = 0;
	int length = array.size();
	if (array[0] - start == 0)
	{
		
	}
	else if (array[0] - start == 1)
	{
		cout << 0 << ",";
	}
	else if (array[0] - start >= 2)
	{
		cout << "0-" << array[0] - 1<<",";
	}
	for (int i = 1; i < length - 1; ++i)
	{
		if (array[i] - array[i - 1] == 1)
		{

		}
		else if (array[i] - array[i - 1] == 2)
		{
			cout << array[i] + 1 << ",";
		}
		else if (array[i] - array[i - 1] > 2)
		{
			cout << array[i-1] + 1 << "-" << array[i] - 1 << ",";
		}
	}
	if (99 - array[length - 1] == 0)
	{
		cout << "]" << endl;
	}
	else if (99 - array[length - 1] == 1)
	{
		cout << 99 << "]" << endl;
	}
	else if (99 - array[length - 1] >= 2)
	{
		cout << array[length - 1] + 1 << "-" << 99 << "]" << endl;
	}
	return 0;
}