std::vector<long> numbersWithDigitInside( long number, long digit ) {
  long count{}, sum{}, product{ 1 };
  do { long temp{ number };
    do if ( temp % 10 == digit ) {
      ++count, sum += number, product *= number;
      break;
    } while ( temp /= 10 );
  } while ( --number );
  return { count, sum, count ? product : 0 };
}
