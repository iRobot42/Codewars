#include <queue>
int ferryLoading( const int length, std::vector< std::pair< int, std::string >> loads ) {
  std::queue< int > bank[ 2 ];
  for ( const auto& [ length, side ] : loads )
    bank[ side.front() == 'r' ].push( length );
  int cars( loads.size() ), cm{ length * 100 }, side{}, crossings{};
  while ( cars ) {
    int available_length{ cm };
    while ( !bank[ side ].empty() && bank[ side ].front() <= available_length )
      available_length -= bank[ side ].front(), bank[ side ].pop(), --cars;
    ++crossings, side = !side;
  }
  return crossings;
}
