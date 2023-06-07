unsigned short expressionsMatter( unsigned short a, unsigned short b, unsigned short c ) {
  return std::max( { a + b + c, ( a + b ) * c, a * ( b + c ), a * b * c } );
}
