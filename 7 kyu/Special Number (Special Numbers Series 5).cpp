std::string specialNumber( int n ) {
  do if ( n % 10 > 5 ) return "NOT!!";
  while ( n /= 10 );
  return "Special!!";
}
