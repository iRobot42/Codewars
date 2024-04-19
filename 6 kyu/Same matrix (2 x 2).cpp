#include <unordered_set>
int count_different_matrices( const std::vector< std::array< int, 4 >>& matrices ) {
  std::unordered_set< int > unique;
  auto rot{ []( int a, int b, int c, int d ){ return a * 1000 + b * 100 + c * 10 + d; }};
  for ( const auto& m : matrices ) unique.insert( std::min(
    std::min( rot( m[ 0 ], m[ 1 ], m[ 2 ], m[ 3 ] ), rot( m[ 2 ], m[ 0 ], m[ 3 ], m[ 1 ] )),
    std::min( rot( m[ 3 ], m[ 2 ], m[ 1 ], m[ 0 ] ), rot( m[ 1 ], m[ 3 ], m[ 0 ], m[ 2 ] ))));
  return unique.size();
}
