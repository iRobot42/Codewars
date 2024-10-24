int solve( int x, int y ) {
  constexpr auto rotated{ []( const int num ) {
    int rot{}, tmp{ num }, d;
    do switch ( rot *= 10, d = tmp % 10 ) {
      case 0: case 1: case 8: rot += d; break;
      case 6: rot += 9; break;
      case 9: rot += 6; break;
      default: return false;
    } while ( tmp /= 10 );
    return rot == num; }};
  int count{};
  do count += rotated( x );
  while ( ++x < y );
  return count;
}
