std::string encode( const std::string& s ) {
  std::string encoded{ s };
  for ( char& c : encoded )
    switch ( c ) {
      case 'G': case 'g': c -= 6; break;
      case 'A': case 'a': c += 6; break;
      case 'D': case 'd': c += 1; break;
      case 'E': case 'e': c -= 1; break;
      case 'R': case 'r': c += 7; break;
      case 'Y': case 'y': c -= 7; break;
      case 'P': case 'p': c -= 1; break;
      case 'O': case 'o': c += 1; break;
      case 'L': case 'l': c += 9; break;
      case 'U': case 'u': c -= 9; break;
      case 'K': case 'k': c -= 2; break;
      case 'I': case 'i': c += 2; break;
    }
  return encoded;
}

std::string decode( const std::string& s ) {
  return encode( s );
}
