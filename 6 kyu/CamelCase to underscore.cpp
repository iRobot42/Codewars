struct CamelCaseTranslator {
  static std::string toUnderScore( std::string_view s ) {
    std::string _s{ s.front() };
    for ( size_t i{ 1 }; i < s.size(); ++i )
      _s += _s.back() != '_' && ( isupper( s[ i ] ) || ( isdigit( s[ i ] )
        && !isdigit( _s.back() ))) ? "_" : "", _s += s[ i ];
    return _s;
  }
};
