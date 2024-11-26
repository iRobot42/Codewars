std::string fire_and_fury( const std::string& tweet ) {
  std::string result, word;
  for ( const char c : tweet ) switch ( c ) {
    case 'F': word = c; break;
    case 'I': [[ fallthrough ]];
    case 'U':
      if ( word == "F" ) word += c;
      else word.erase();
      break;
    case 'R':
      if ( word == "FI" || word == "FU" ) word += c;
      else word.erase();
      break;
    case 'E':
      if ( word == "FIR" ) result += result.empty() ? "You"
        : result.back() == 'u' ? " and you" : " furious. You";
      word.erase();
      break;
    case 'Y':
      if ( word == "FUR" ) result += result.empty() ? "I am"
        : result.back() == 'u' ? " are fired! I am" : " really";
      word.erase();
      break;
    default: return "Fake tweet.";
  }
  return result.empty() ? "Fake tweet." :
    result + ( result.back() == 'u' ? " are fired!" : " furious." );
}
