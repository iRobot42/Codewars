bool am_i_afraid( const std::string& day, int num ) {
  const std::string d{ day.substr( 0, 2 ) };
  return d == "Mo" ? num == 12
       : d == "Tu" ? num > 95
       : d == "We" ? num == 34
       : d == "Th" ? !num
       : d == "Fr" ? !( num & 1 )
       : d == "Sa" ? num == 56
       : abs( num ) == 666;
}
