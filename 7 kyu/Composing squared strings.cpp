struct ComposeSqStrings {
  static std::string compose( const std::string& s1,
                              const std::string& s2 ) {
    size_t len1{ 1 }, len2{ s1.find( '\n' )},
           pos1{ 0 }, pos2{ s2.size() - len2 };
    const size_t shift{ len2 + 1 };
    std::string s;
    s.reserve( len2 * shift );
    while ( len2 )
      s += s1.substr( pos1, len1++ ) +
           s2.substr( pos2, len2-- ) + '\n',
      pos1 += shift, pos2 -= shift;
    return s.pop_back(), s;
  }
};
