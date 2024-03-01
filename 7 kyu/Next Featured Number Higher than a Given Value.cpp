long nextNumb( const long val ) {
  long num{ val + 3 - val % 3 };
  if (!( num & 1 )) num += 3;
  while ( num <= 9876543201 ) {
    bool digits[ 10 ]{}, flag{ true };
    auto temp{ num };
    do { const auto d{ temp % 10 };
      if ( digits[ d ] ) flag = false;
      else digits[ d ] = true, temp /= 10;
    } while ( flag && temp );
    if ( flag ) return num;
    num += 6;
  }
  return -1;
}
