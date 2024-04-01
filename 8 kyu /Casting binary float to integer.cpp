int convert_to_int( float f ) {
  return *reinterpret_cast< int* >( &f );
}
