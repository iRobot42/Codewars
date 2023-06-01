int ice_brick_volume( int radius, int bottle_length, int rim_length ) {
    return 2 * radius * radius * ( bottle_length - rim_length );
}
