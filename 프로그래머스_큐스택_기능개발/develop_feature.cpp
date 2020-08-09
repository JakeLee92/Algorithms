// https://programmers.co.kr/learn/courses/30/lessons/42586

#include <iostream>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

// 100 - pro / spped > day * speed + pro
vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> vtAnwser;
	queue<int> queRate;

	// 수식 세우기
	for (int i = 0; i < progresses.size(); i++)
	{
		int iRate = (99 - progresses[i]) / speeds[i] + 1;

		if (queRate.empty())
		{
			queRate.push(iRate);
		}
		else
		{
			if (queRate.front() < iRate)
			{
				queue<int> queSwapRate;
				vtAnwser.push_back(queRate.size());
				queRate.swap(queSwapRate);
			}

			queRate.push(iRate);
		}
	}

	vtAnwser.push_back(queRate.size());

	return vtAnwser;
}

int main()
{
	vector<int> progresses; vector<int> speeds; vector<int> vtReturn;

	progresses.push_back(93);
	progresses.push_back(30);
	progresses.push_back(55);

	speeds.push_back(1);
	speeds.push_back(30);
	speeds.push_back(5);

	vtReturn = solution(progresses, speeds);
	for (auto i : vtReturn)
	{
		cout << i << endl;
	}

	return 0;
}