int sumOfIntegers( const std::string& s ) {
  int sum{}, num{};
  for ( const char c : s )
    if ( isdigit( c )) ( num *= 10 ) += c-'0';
    else sum += num, num = 0;
  return sum + num;
}
