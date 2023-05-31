class Guesser {
  int number, lives;
public:
  Guesser( int n, int l ) : number( n ), lives( l ) {}
  bool guess( int n ) {
    if ( !lives ) throw std::exception();
    else if ( n == number ) return true;
    else { --lives; return false; }
  }
};
