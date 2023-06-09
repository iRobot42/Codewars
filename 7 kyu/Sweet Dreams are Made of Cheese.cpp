std::string payCheese( std::vector< int > arr ) {
  int t{ 99 }; for ( const int i : arr ) t += i;
  return "£" + std::to_string( t / 100 * 35 );
}
