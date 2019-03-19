#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;


int compute(vector<int> &array)
{
	unordered_set<int> arrayset;
	int length = array.size();
	int count = 0;//用于计算+1的次数
	for (int i = 0; i < length; ++i)
	{
		int temp = array[i];
		if (arrayset.find(temp) == end(arrayset))
		{
			arrayset.insert(temp);
			continue;
		}
		while (arrayset.find(temp) != end(arrayset))
		{
			temp = temp + 1;
			count++;
		}
		arrayset.insert(temp);
	}
	return count;
}


int main()
{
	vector<int> array = {2,5,6,7,15,17,15,5,49,55,12};
	int result = compute(array);
	cout << result << endl;
	return 0;
}