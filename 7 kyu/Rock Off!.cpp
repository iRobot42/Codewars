using namespace std;
string solve_rock_off( const vector< int >& alice, const vector< int >& bob ) {
  const vector< string > q{ "Alice made \"Kurt\" proud!", "Bob made \"Jeff\" proud!",
                            "that looks like a \"draw\"! Rock on!" };
  int a{}, b{};
  for ( size_t i{}; i < bob.size(); ++i )
         if ( alice[ i ] > bob[ i ] ) ++a;
    else if ( alice[ i ] < bob[ i ] ) ++b;
  return to_string( a ) + ", " + to_string( b ) + ": " + ( a == b ? q.back() : q[ a < b ] );
}
