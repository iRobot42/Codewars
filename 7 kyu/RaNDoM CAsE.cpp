std::string randomCase( std::string x ) {
  for ( char& c : x )
    c = rand() & 1 ? toupper( c ) : tolower( c );
  return x;
}
