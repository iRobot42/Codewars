std::vector<int> firstNSmallest( std::vector< int > arr, int n ) {
  for ( size_t i{}, lim{ arr.size() - n }; i < lim; ++i )
    arr.erase( minmax_element( arr.cbegin(), arr.cend() ).second );
  return arr;
}
