int compose_packet( unsigned char* packet, unsigned id_number, unsigned char state,
                    unsigned long long scenario_mask, unsigned volume, unsigned status ) {
  if ( id_number > 0xFFFF || state > 0x7F || scenario_mask > 0xFFFF'FFFF'FFFF ||
       volume > 999'999 || status > 0xFFFF || status < 0xFF ) return -1;
  sprintf( ( char* )packet, "\x2%04X%02X%012llX%06u%04X\x3",
           id_number, state, scenario_mask, volume, status );
  packet[ 30 ] = crc8( packet + 1, 28 );
  return 1;
}
