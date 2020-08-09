#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    
    map<string, int> mapClothes;
    
    // Convert Vector to Map
    for(auto set : clothes)
    {
    	string clotheName = set[0];
    	string clotheType = set[1];
    	
    	if(mapClothes.find(clotheType) != mapClothes.end())
    	{
    		mapClothes[clotheType]++;
    	}
    	else
    	{
    		mapClothes.insert(make_pair( clotheType, 1) );
    	}
    }
    
    int iSum = 1;
    // Calculate Case 
    map< string , int >::iterator iter ;
    for(iter = mapClothes.begin(); iter != mapClothes.end(); iter++ )
    {
    	iSum *= (*iter).second + 1 ;
    }
    
    answer = iSum - 1;
    
    return answer;
}