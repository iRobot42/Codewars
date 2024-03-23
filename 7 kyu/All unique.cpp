bool hasUniqueChars( std::string s ) {
  int f[ 128 ]{};
  for ( char c : s )
    if ( ++f[ c ] > 1 )
      return false;
  return true;
}
