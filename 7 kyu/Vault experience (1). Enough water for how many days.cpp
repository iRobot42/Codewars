int thirstyIn( int water, std::vector< int > ageOfDweller ) {
  if ( ageOfDweller.empty() ) return -1;
  double consumption{};
  for ( const int age : ageOfDweller )
    consumption += age < 18 ? 1 : age > 50 ? 1.5 : 2;
  return water / consumption;
}
