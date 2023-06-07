std::string update_light( std::string s ) {
  return s[ 0 ] == 'g' ? "yellow" : s[ 0 ] == 'y' ? "red" : "green";
}
