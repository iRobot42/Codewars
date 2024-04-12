bool isValidTrainArrangement( std::string b, std::string a ) {
  if ( b.size() != a.size() ) return false;
  for ( size_t i{}, l{}, r{}; i < b.size(); ++i )
    if ( b[ i ] == '>' && ( ++r, l ) || b[ i ] == '<' && !l--
      || a[ i ] == '<' && ( ++l, r ) || a[ i ] == '>' && !r-- )
      return false;
  return true;
}
