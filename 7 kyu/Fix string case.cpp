std::string solve( const std::string& s ) {
#define V2

#ifdef V1 // two-pass solution
  std::string result; result.reserve( s.size() );
  if ( size_t( count_if( s.cbegin(), s.cend(), isupper )) <= s.size() / 2 )
       for ( const char c : s ) result += tolower( c );
  else for ( const char c : s ) result += toupper( c );
  return result;

#elif defined( V2 ) // one-pass solution
  size_t count{};
  std::string lower, upper;
  lower.reserve( s.size() ), upper.reserve( s.size() );
  for ( const char c : s ) count += !!isupper( c ),
    lower += tolower( c ), upper += toupper( c );
  return count <= s.size() / 2 ? lower : upper;

#endif
}
