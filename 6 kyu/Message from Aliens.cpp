std::string decode( const std::string& encoded ) {
  static const std::unordered_map< std::string, char > code{
    { "/\\",   'a' },{ "]3",   'b' },{ "(",      'c' },{ "|)",  'd' },
    { "[-",    'e' },{ "/=",   'f' },{ "(_,",    'g' },{ "|-|", 'h' },
    { "|",     'i' },{ "_T",   'j' },{ "/<",     'k' },{ "|_",  'l' },
    { "|\\/|", 'm' },{ "|\\|", 'n' },{ "()",     'o' },{ "|^",  'p' },
    { "()_",   'q' },{ "/?",   'r' },{ "_\\~",   's' },{ "~|~", 't' },
    { "|_|",   'u' },{ "\\/",  'v' },{ "\\/\\/", 'w' },{ "><",  'x' },
    { "`/",    'y' },{ "~/_",  'z' },{ "__",     ' ' }};
  std::string decoded, alien;
  for ( const char c : encoded )
    if ( c != encoded.back() ) alien += c;
    else if ( !alien.empty() ) decoded += code.at( alien ), alien.erase();
  return { decoded.crbegin(), decoded.crend() };
}
