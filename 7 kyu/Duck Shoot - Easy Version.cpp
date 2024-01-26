std::string duckShoot( int ammo, double aim, std::string ducks ) {
  ammo *= aim;
  for ( char& c : ducks )
    if ( !ammo ) break;
    else if ( c == '2' )
      --ammo, c = 'X';
  return ducks;
}
