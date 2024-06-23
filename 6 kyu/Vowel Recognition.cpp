#include <unordered_set>
uint64_t vowelRecognition( const std::string& str ) {
  const std::unordered_set< char > v{ 'a','e','i','o','u' };
  uint64_t c{};
  for ( size_t i{}, s{ str.size() }; i < s; ++i )
    if ( v.find( tolower( str[ i ] )) != v.cend() )
      c += ( i + 1 ) * ( s - i );
  return c;
}
