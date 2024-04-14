#include <unordered_set>
bool validate( const std::array< std::array< int, 9 >, 9 >& board ) {
  for ( size_t i{}; i < 9; ++i ) {
    std::unordered_set< int > rset, cset, bset;
    for ( size_t j{}, k{ i / 3 * 3 }; j < 9; ++j )
      if ( !board[ i ][ j ]
        || !rset.insert( board[ i ][ j ] ).second
        || !cset.insert( board[ j ][ i ] ).second
        || !bset.insert( board[ j / 3 + k ][ j % 3 + k ] ).second )
        return false;
  } return true;
}
