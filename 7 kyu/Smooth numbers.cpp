std::string isSmooth( unsigned long n ) {
  constexpr std::array number_is{ "non-smooth",
    "power of 2", "3-smooth", "Hamming number", "humble number" };
  for ( int i : { 2, 3, 5, 7 }) {
    while (!( n % i )) n /= i;
    if ( n == 1 ) return number_is[ ++i/2 ];
  }
  return number_is.front();
}
