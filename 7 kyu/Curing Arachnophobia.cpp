typedef std::string S;
S draw_spider( int l, int b, char m, char e ) {
  const S L[]{ "╱\\", "^", "/\\", "/╲", "╱╲" }, E( 1 << ( b - 1 ), e );
  return L[ l ] + S( b, '(' ) + E + m + E + S( b, ')' ) + ( l == 3 ? *L : L[ l ] );
}
