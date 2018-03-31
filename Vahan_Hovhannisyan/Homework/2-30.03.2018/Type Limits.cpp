#include <limits>
#include <iostream>

template< typename T > void show_range( const char * type )
{
    typedef std::numeric_limits<T> limits ;
    std::cout << "type: " << type << " min: " << limits::min()
              << " max: " << limits::max() << '\n' ;
}

#define SHOW_RANGE( TYPE ) show_range<TYPE>( #TYPE )

int main()
{
   SHOW_RANGE(double) ;
   SHOW_RANGE(unsigned long long) ;
   SHOW_RANGE(int);
   SHOW_RANGE(float);
}