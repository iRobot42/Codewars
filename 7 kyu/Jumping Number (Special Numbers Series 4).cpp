std::string jumpingNumber( int n ) {
  int d{ n % 10 };
  while ( n /= 10 )
    if ( const int t{ n % 10 }; abs( d - t ) == 1 ) d = t;
    else return "Not!!";
  return "Jumping!!";
}
