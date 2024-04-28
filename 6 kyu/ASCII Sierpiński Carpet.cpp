std::string sierpinskiCarpetString( int n ) {
  std::string carpet;
  int mask{ 0xFFFFFFFF / 3 }, size{ 1 << 2 * n };
  for ( int row{ --size }; row >= 0; --row ) {
    row ^= row & row >> 1 & mask;
    for ( int col{ size }; col >= 0; --col )
      col ^= col & col >> 1 & mask,
      carpet += row & col & mask ? "  " : "██";
    carpet += '\n';
  } carpet.pop_back();
  return carpet;
}
