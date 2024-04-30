uint32_t amount_of_pages( uint32_t s ) {
  uint32_t p{}, d{ 1 }, pd{ 9 }, sd{ 9 };
  while ( sd < s )
    p += pd, pd *= 10,
    s -= sd, sd = ++d * pd;
  return p + s / d;
}
