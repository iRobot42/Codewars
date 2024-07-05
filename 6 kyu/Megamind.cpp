int64_t megaMind( int64_t hp, int64_t dps, int64_t shots, int64_t regen ) {
  int64_t damage{ dps * shots }, shot{ shots }, x{};
  if ( regen >= damage && damage < hp ) return -1;
  while ( hp > 0 )
    if ( shot-- ) ++x, hp -= dps;
    else shot = shots, hp += regen;
  return x;
}
