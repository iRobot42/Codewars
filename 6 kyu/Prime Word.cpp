#include <cmath>
bool is_prime( int number ) {
  for ( int factor( sqrt( number )); factor > 1; --factor )
    if (!( number % factor )) return false;
  return number > 1; // true for this kata (c >= 65)
}
std::vector<int> prime_word( const std::vector< std::pair< std::string, int >>& list ) {
  std::vector< int > prime_words;
  for ( const auto& p : list )
    prime_words.push_back( any_of( p.first.cbegin(), p.first.cend(),
      [ &p ]( char c ){ return is_prime( c + p.second ); }));
  return prime_words;
}
