std::string chromosomeCheck( std::string sperm ) {
  return ( std::string )
    "Congratulations! You're going to have a " +
    ( sperm[ 1 ] == 'Y' ? "son" : "daughter" ) + '.';
}
