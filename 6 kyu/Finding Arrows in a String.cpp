#define V 1

#if V == 1
int arrow_search( const std::string& s ) {
  int score{}, l1{}, l2{}, r1{}, r2{};
  for ( const char c : s )
    if ( c == '<' )
      score -= l1 + l2, l1 = 1, l2 = r1 = r2 = 0;
    else if ( c == '>' )
      if ( l1 || l2 ) l1 = l2 = 0;
      else if ( r1 ) score += r1 + 1, r1 = 0;
      else if ( r2 ) score += r2 + 2, r2 = 0;
      else ++score;
    else if ( c == '-' )
      if ( l2 ) score -= l2, l2 = 0, r1 = 1;
      else if ( r2 ) r2 = 0, r1 = 1;
      else if ( l1 ) ++l1;
      else if ( r1 ) ++r1;
      else r1 = 1;
    else if ( c == '=' )
      if ( l1 == 1 ) l1 = 0, l2 = 4;
      else if ( l1 ) score -= l1, l1 = 0, r2 = 2;
      else if ( l2 ) l2 += 2;
      else if ( r2 ) r2 += 2;
      else if ( r1 ) r1 = 0, r2 = 2;
      else r2 = 2;
    else // .
      if ( r1 || r2 ) r1 = r2 = 0;
      else score -= l1 + l2, l1 = l2 = 0;
  return score - l1 - l2;
}

#elif V == 2
#include <numeric>
#include <regex>
int arrow_search( const std::string& s ) {
  const std::regex left{ "<-+|<=+|<" }, right{ "-*>|=*>" };
  const auto score{ [ & ]( const auto& re ){ return accumulate(
    std::sregex_iterator( s.cbegin(), s.cend(), re ),
    std::sregex_iterator(), 0, []( const int acc, const auto& it ){
      const auto t{ it.str() };
      return acc + ( t.size() << ( t.find( '=' ) != t.npos )); }); }};
  return score( right ) - score( left );
}

#endif
