using namespace std;
class EightiesKids2 {
public:
  static string findSpaceship( const string& m ) {
    size_t p{ m.find( 'X' ) };
    return p == string::npos ? "Spaceship lost forever." :
      '[' + to_string( p - 1 - m.rfind( '\n', p ) ) + ", " +
      to_string( count( &m[ p ], &m[ m.size() ], '\n' ) ) + ']';
  }
};
