int lateRide( int n ) {
  return n/600 + n/60%10 + n%60/10 + n%10;
}
