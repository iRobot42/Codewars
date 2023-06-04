typedef std::function< void( void )> F;
void _if( bool v, F a, F b ) { return v ? a() : b(); }
