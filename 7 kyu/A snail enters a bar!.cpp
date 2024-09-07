bool canSnailReachEnd( double len, double spd, double inc ) {
  return len / 525600 < spd - inc;
}
