using S = std::string;
S plant( char seed, int water, int fert, int temp ) {
  if ( temp < 20 || temp > 30 ) return S( water * water, '-' ) + seed;
  S cluster{ S( water, '-' ) + S( fert, seed )}, plant;
  while ( water-- ) plant += cluster;
  return plant;
}
