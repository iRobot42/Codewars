bool are_coprime( unsigned a, unsigned b ) {
  return std::__gcd( a, b ) == 1;
}
