
#include <iostream>
#include <vector>
using namespace std;




int main()
{
    std::vector < int > dane;
    dane.push_back( 5 );
    dane.push_back( 4 );
    dane.push_back( 3 );
    dane.push_back( 2 );
    dane.push_back( 1 );
    dane.push_back( 0 );
    dane.push_back( 1 );
   
    for( size_t i = 0; i < dane.size(); i++ )
         cout <<  dane[ i ] << ", " ;
   
    cout << "\nKoniec\n";

    dane.assign(dane.begin() +2,dane.begin() +6);


    for( size_t i = 0; i < dane.size(); i++ )
         cout <<  dane[ i ] << ", " ;
   
    return 0;
}

