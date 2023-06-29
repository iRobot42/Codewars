#define V1

#ifdef V1
int solve( std::string s ) {
  int n{};
  const std::string d{ "0123456789" };
  size_t i{}, j;
  while (( i = s.find_first_of( d, i )) != std::string::npos )
    j = s.find_first_not_of( d, i ),
    n = std::max( n, stoi( s.substr( i, j - i ))), i = j;
  return n;
}

#elif defined( V2 )
int solve( std::string s ) {
  for ( char& c : s ) if ( !isdigit( c )) c = 32;
  int n{}, i{}; std::istringstream ss{ s };
  while ( ss >> i ) n = std::max( n, i );
  return n;
}

#endif
