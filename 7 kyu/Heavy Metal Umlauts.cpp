std::string heavyMetalUmlauts( std::string boringText ) {
  std::string metalText;
  metalText.reserve( boringText.size() );
  for ( const char c : boringText )
    switch ( c ) {
      case 'A': metalText += "\u00c4"; break;
      case 'E': metalText += "\u00cb"; break;
      case 'I': metalText += "\u00cf"; break;
      case 'O': metalText += "\u00d6"; break;
      case 'U': metalText += "\u00dc"; break;
      case 'Y': metalText += "\u0178"; break;
      case 'a': metalText += "\u00e4"; break;
      case 'e': metalText += "\u00eb"; break;
      case 'i': metalText += "\u00ef"; break;
      case 'o': metalText += "\u00f6"; break;
      case 'u': metalText += "\u00fc"; break;
      case 'y': metalText += "\u00ff"; break;
      default : metalText += c;
    }
  return metalText; // 🤘
}
