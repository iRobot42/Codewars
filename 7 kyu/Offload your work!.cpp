std::string workNeeded( int m, std::vector< std::pair< int, int >> f ) {
  for ( const auto& p : f ) m -= p.first * 60 + p.second;
  return m > 0 ? "I need to work " + std::to_string( m / 60 ) +
    " hour(s) and " + std::to_string( m % 60 ) + " minute(s)" :
    "Easy Money!";
}
