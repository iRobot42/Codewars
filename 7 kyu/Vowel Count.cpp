int getCount( const std::string& s ) {
  return count_if( s.cbegin(), s.cend(), []( auto c ){ switch ( c ) {
    case 'a': case 'e': case 'i': case 'o': case 'u': return true;
    default: return false; }} );
}
