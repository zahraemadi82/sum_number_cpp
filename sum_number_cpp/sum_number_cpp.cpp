//برنامه ای بنویسید که ۳ عدد را خوانده اعداد بین عدد اول و دوم را که مجموعه ارقام آنها برابر با اعداد سوم باشد را نمایش دهد.
#include <iostream> 
#include <string>
#include <vector>
using namespace std;
int main()
{
	int num1 = 0;
	cout << "Enter number : ";
	cin >> num1;

	int num2 = 0;
	cout << "Enter Number : ";
	cin >> num2;


	int num3 = 0;
	cout << "Enter number : ";
	cin >> num3;
	vector<int> oblist;
	for (int i = num1; i <= num2; i++)
	{
		string str = to_string(i);
		int sum = 0;
		for (char c : str) {
			int digit = c - '0';
			for(char c : str) {
				str += digit;
			}
			if (sum == num3) {
				oblist.push_back(sum);
			}
			
		}
	}
	for (const auto& element : oblist) {
		cout << element << " ";
	}

	return 0;
}