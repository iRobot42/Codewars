std::string uncensor( const std::string& infected,
                      const std::string& discovered ) {
  std::string uncensored;
  for ( size_t i{}; const char c : infected )
    uncensored += c == '*' ? discovered[ i++ ] : c;
  return uncensored;
}
