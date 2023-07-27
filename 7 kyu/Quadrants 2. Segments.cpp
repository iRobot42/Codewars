bool quadrant_segment( const coord& a, const coord& b ) {
  return a.x < 0 ^ b.x < 0 || a.y < 0 ^ b.y < 0;
}
