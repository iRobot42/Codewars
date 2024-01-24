std::string paul( const std::vector< std::string >& v ) {
  int score{};
  for ( const auto& s : v )
    switch ( s.front() ) {
      case 'e': score += 1; break;
      case 'k': score += 5; break;
      case 'P': score += 10; break;
    }
  return score < 40 ? "Super happy!"
       : score < 70 ? "Happy!"
       : score < 100 ? "Sad!"
       : "Miserable!";
}
