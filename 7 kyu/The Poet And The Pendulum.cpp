std::vector<int> Pendulum( std::vector< int > values ) {
  sort( values.begin(), values.end() );
  std::deque< int > pendulum;
  for ( bool dir{}; const int value : values )
    if ( dir = !dir ) pendulum.push_front( value );
    else pendulum.push_back( value );
  return { pendulum.cbegin(), pendulum.cend() };
}
