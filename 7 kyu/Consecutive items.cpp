bool consecutive( std::vector< int > arr, int a, int b ) {
  const auto i{ find( arr.cbegin(), arr.cend(), a )};
  return ( i > arr.cbegin() && *( i-1 ) == b )
      || ( i < arr.cend()-1 && *( i+1 ) == b );
}
