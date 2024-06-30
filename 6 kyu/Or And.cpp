std::pair<uint64_t, uint64_t> orAnd( uint64_t A, uint64_t B ) {
  uint64_t a{ A | B }, b{ A & B };
  for ( uint64_t i{ 1 }, d{ B - A }; i <= d; i *= 2 )
    a |= i, b &= i + A;
  return { a, b };
}
