int solve( int n, int bound ) {
  int sum{}, line{ 1 }, cnt{ 1 };
  while ( ++line ) {
    int num{};
    while ( ++num < line )
      if (!( cnt++ % n )) sum += num;
    if ( num++ == bound ) break;
    while ( --num )
      if (!( cnt++ % n )) sum += num;
  }
  return sum;
}
