std::string getIssuer( const std::string& n ) {
  const std::string s{ n.substr( 0, 2 ) };
  switch ( n.size() ) {
    case 13: if ( n[ 0 ] == '4' ) return "VISA"; break;
    case 15: if ( s == "34" || s == "37" ) return "AMEX"; break;
    case 16: if ( n[ 0 ] == '4' ) return "VISA";
      else if ( n.substr( 0, 4 ) == "6011" ) return "Discover";
      else if ( stoi( s ) > 50 && stoi( s ) < 56 ) return "Mastercard";
  }
  return "Unknown";
}
