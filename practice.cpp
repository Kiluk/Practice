
#include <iostream>
#include <vector>
using namespace std;




int main()
{
    std::vector < int > dane;
    dane.push_back( 5 );
    dane.push_back( 2 );
    dane.push_back( 3 );
    dane.push_back( 1 );
   
    for( size_t i = 0; i < dane.size(); i++ )
         cout <<  dane[ i ] << ", " ;
   
    printf( "\n\nKoniec\n" );
    return 0;
}

