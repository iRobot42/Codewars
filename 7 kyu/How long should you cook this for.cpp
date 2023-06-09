using namespace std;
string cookingTime( const string& N, int m, int s, const string& P ) {
  int r{ int( ( 60.0 * m + s ) * stod( N ) / stod( P ) + 0.999 ) };
  return to_string( r / 60 ) + " minutes " + to_string( r % 60 ) + " seconds";
}
