#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;
string solution(vector<string> participant, vector<string> completion) 
{
	string strAnwser;
	
	map<string , int> mapParticipant ;
	
	// INSERT Participant(vector) to MAP
	for(auto pc : participant)
	{
		if(mapParticipant.find(pc) != mapParticipant.end())
		{
			mapParticipant[pc]++;
		}
		else
		{
			mapParticipant.insert(make_pair(pc , 1));	
		}
		
	}
	
	// FIND Completion
	for(auto cn : completion)
	{
		if(mapParticipant.find(cn) != mapParticipant.end())
		{
			mapParticipant[cn]--;
			
			if(mapParticipant[cn] <= 0) mapParticipant.erase(cn);
		}
	}
	
	if(mapParticipant.size() > 0) strAnwser = mapParticipant.begin()->first;
	
	
	return strAnwser ;
}
