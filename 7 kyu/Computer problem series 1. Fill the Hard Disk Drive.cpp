int save( std::vector< int > sizes, int hd ) {
  int files{};
  for ( const int size : sizes )
    if (( hd -= size ) < 0 ) break;
    else ++files;
  return files;
}
