std::string solve( std::string time ) {
  int h{ stoi( time ) }, m{ stoi( time.substr( 3 )) }, f{ m > 30 };
  const std::string w[]{ "midnight","one","two","three","four","five",
    "six","seven","eight","nine","ten","eleven","twelve","thirteen",
    "fourteen","quarter","sixteen","seventeen","eighteen","nineteen",
    "twenty","twenty one","twenty two","twenty three","twenty four",
    "twenty five","twenty six","twenty seven","twenty eight",
    "twenty nine","half" };
  if ( f ) ++h, m = 60 - m;
  if ( h > 12 ) h %= 12;
  return m ? w[ m ] + ( m == 1 ? " minute" : m % 15 ? " minutes" : "" )
    + ( f ? " to " : " past " ) + w[ h ] : h ? w[ h ] + " o'clock" : *w;
}
