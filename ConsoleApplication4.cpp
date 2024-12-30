#include <iostream>
#include "Encoding.h"

int main() {
    const std::string originalString = "Hello, encoding world!";

    {
        std::unique_ptr<Encoder> utf8Encoder = EncoderFactory::createEncoder(EncodingType::UTF8);
        std::string encodedUTF8 = utf8Encoder->encode(originalString);
        std::string decodedUTF8 = utf8Encoder->decode(encodedUTF8);

        std::cout << "UTF-8 Encoding:\n";
        std::cout << "Original: " << originalString << '\n';
        std::cout << "Encoded:  " << encodedUTF8 << '\n';
        std::cout << "Decoded:  " << decodedUTF8 << '\n';
    }

    {
        std::unique_ptr<Encoder> asciiEncoder = EncoderFactory::createEncoder(EncodingType::ASCII);
        std::string encodedASCII = asciiEncoder->encode(originalString);
        std::string decodedASCII = asciiEncoder->decode(encodedASCII);

        std::cout << "\nASCII Encoding:\n";
        std::cout << "Original: " << originalString << '\n';
        std::cout << "Encoded:  " << encodedASCII << '\n';
        std::cout << "Decoded:  " << decodedASCII << '\n';
    }

    return 0;
}


