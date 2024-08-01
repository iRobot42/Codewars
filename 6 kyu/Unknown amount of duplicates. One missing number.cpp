#include <set>
std::pair< int, std::vector<int>> findDupsMiss( const std::vector< int >& arr ) {
  std::set< int > unique;
  std::vector< int > duplicates;
  for ( const int i : arr )
    if ( !unique.insert( i ).second )
      duplicates.push_back( i );
  sort( duplicates.begin(), duplicates.end() );
  int missing{ *unique.cbegin() };
  for ( const int i : unique )
    if ( i != missing ) break;
    else ++missing;
  return make_pair( missing, duplicates );
}
