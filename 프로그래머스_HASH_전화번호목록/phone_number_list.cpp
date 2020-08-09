#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    for( int i= 0 ; i < phone_book.size() ; i ++ )
    {
        for( int j= 0 ; j < phone_book.size() ; j ++ )
        {
            if( i == j || phone_book[i].length() > phone_book[j].length())
            {
                continue ;
            }
            else
            {
                if(phone_book[i] == phone_book[j].substr(0, phone_book[i].length()))
                {
                    return false;
                }
            }
        }
    }
    
    
    return answer;
}