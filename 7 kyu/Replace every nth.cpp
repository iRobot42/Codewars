struct Kata {
  std::string replaceNth( std::string s, int n, char ov, char nv ) {
    if ( n < 1 ) return s;
    for ( int i{}; char& c : s ) if ( c == ov && !( ++i % n )) c = nv;
    return s;
  }
};
