class Person {
  int mx, my, mz;
public:
  Person( int x, int y, int z ) : mx( x ), my( y ), mz( z ) {}
  void location( int& x, int& y, int& z ) { x = mx; y = my; z = mz; }
};
