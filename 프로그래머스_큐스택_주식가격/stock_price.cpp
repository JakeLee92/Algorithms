#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;

	for (int i = 0 ; i < prices.size(); i++)
	{
		int iTime = 0;
		for (int j = i + 1; j < prices.size(); j++)
		{
			if (prices[i] <= prices[j])
			{
				iTime++;
			}
			else
			{
				iTime++;
				break;
			}
		}
		answer.push_back(iTime);
	}
	return answer;
}

int main()
{
	// INPUT
	vector<int> prices;

	prices.push_back(1);
	prices.push_back(2);
	prices.push_back(3);
	prices.push_back(2);
	prices.push_back(3);

	// OUTPUT
	vector<int> vtReturn;
	vtReturn = solution(prices);

	for (auto i : vtReturn)
	{
		cout << i << endl;
	}

	return 0;
}