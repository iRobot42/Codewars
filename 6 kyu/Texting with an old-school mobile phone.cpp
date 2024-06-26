std::string send_message( const std::string& message ) {
  std::unordered_map< char, std::string > m{
    { '1', "1-" }, { '.', "1" }, { ',', "11" }, { '?', "111" }, { '!', "1111" },
    { '2', "2-" }, { 'a', "2" }, { 'b', "22" }, { 'c', "222" },
    { '3', "3-" }, { 'd', "3" }, { 'e', "33" }, { 'f', "333" },
    { '4', "4-" }, { 'g', "4" }, { 'h', "44" }, { 'i', "444" },
    { '5', "5-" }, { 'j', "5" }, { 'k', "55" }, { 'l', "555" },
    { '6', "6-" }, { 'm', "6" }, { 'n', "66" }, { 'o', "666" },
    { '7', "7-" }, { 'p', "7" }, { 'q', "77" }, { 'r', "777" }, { 's', "7777" },
    { '8', "8-" }, { 't', "8" }, { 'u', "88" }, { 'v', "888" },
    { '9', "9-" }, { 'w', "9" }, { 'x', "99" }, { 'y', "999" }, { 'z', "9999" },
    { '*', "*-" }, { '\'',"*" }, { '-', "**" }, { '+', "***" }, { '=', "****" },
    { '0', "0-" }, { ' ', "0" },
    { '#', "#-" }};
  std::string s;
  for ( bool u{}; const char c : message ) {
    if ( isalpha( c ) && u != !!isupper( c )) s += '#', u = !u;
    if ( m[ tolower( c ) ].front() == s.back() ) s += ' ';
    s += m[ tolower( c ) ];
  }
  return s;
}
