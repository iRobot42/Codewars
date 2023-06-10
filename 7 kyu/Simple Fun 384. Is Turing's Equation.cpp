using namespace std;
bool is_turing_equation( string s ) {
#define INIT( x ) while ( isdigit( s[ --S ] ) ) x += s[ S ]
  string a, b, c; size_t S{ s.size() };
  INIT( c ); INIT( b ); INIT( a );
  return stoi( a ) + stoi( b ) == stoi( c );
}
