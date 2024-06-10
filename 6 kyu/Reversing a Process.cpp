namespace process {
  std::string decode( const std::string& r ) {
    const int num{ stoi( r ) };
    if ( std::__gcd( num, 26 ) != 1 ) return "Impossible to decode";
    std::string s;
    for ( size_t i{ r.find_first_not_of( "0123456789" )}; i < r.size(); ++i )
      for ( int c{}, ch{ r[ i ]-'a' }; c < 26; ++c )
        if ( c * num % 26 == ch ) { s += c + 'a'; break; }
    return s;
  }
}
