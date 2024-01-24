std::string cake( int candles, std::string debris ) {
  int total{};
  for ( size_t i{}; i < debris.size(); ++i )
    total += debris[ i ] - i % 2 * 96;
  return total > candles * 0.7 ? "Fire!" : "That was close!";
}
