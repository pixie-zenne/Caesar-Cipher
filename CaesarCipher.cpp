#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>

std::string CaesarCipher(const std::string& InputText, uint8_t InputShift, bool InputEncrypt) {
  std::string Result = "";
  int Shift = InputEncrypt ? InputShift : -InputShift;

  for (char CH : InputText) {
    char Base = (CH >= 'A' && CH <= 'Z') ? 'A' : 'a';

    if (CH >= 'A' && c <= 'Z' || CH >= 'a' && c <= 'z') {
      Result += char(int(c + direction - Base + 26) % 26 + Base);
    }
    else {
      Result += CH;
    }
  }

  return Result;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
    return 1;
  }

  return 0;
}
