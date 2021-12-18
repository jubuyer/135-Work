#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("Caesar Cipher Theory Tests") {
  SUBCASE("Basic") {
    CHECK(encryptCaesar("Way to Go!",5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("I l!Ke to cOde and s@y lies", 8) == "Q t!Sm bw kWlm ivl a@g tqma");
    CHECK(encryptCaesar("I don't Know lol", 21) == "D yji'o Fijr gjg");
  }
  SUBCASE("Extreme") {
    CHECK(encryptCaesar(" ", 2) == " ");
    CHECK(encryptCaesar("@*&#!@", 2) == "@*&#!@");
    CHECK(encryptCaesar("Is this a dream?", 26) == "Is this a dream?");
  }
}

TEST_CASE("Decrypt Caesar Cipher Theory Tests") {
  SUBCASE("Basic") {
    CHECK(decryptCaesar("Bfd yt Lt!",5) == "Way to Go!");
    CHECK(decryptCaesar("Q t!Sm bw kWlm ivl a@g tqma", 8) == "I l!Ke to cOde and s@y lies");
    CHECK(decryptCaesar("D yji'o Fijr gjg", 21) == "I don't Know lol");
  }
  SUBCASE("Extreme") {
    CHECK(decryptCaesar(" ", 2) == " ");
    CHECK(decryptCaesar("@*&#!@", 2) == "@*&#!@");
    CHECK(decryptCaesar("Is this a dream?", 26) == "Is this a dream?");
  }
}

TEST_CASE("Vigenere Cipher Theory Tests") {
  SUBCASE("Basic") {
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("i @m test1ng vigenere", "code") == "k @a wiuh1qk xwjipsui");
    CHECK(encryptVigenere("coding is not that easy", "python") == "rmwpbt xq gvh gwym lofn");

  }
  SUBCASE("Extreme") {
    CHECK(encryptVigenere("Hello, World!", "CAKE") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Birthday", "birthday") == "Cqimogaw");
    CHECK(encryptVigenere("Long", "Longer") == "Wcam");

  }
}

TEST_CASE("Decrypt Vigenere Cipher Theory Tests") {
  SUBCASE("Basic") {
    CHECK(decryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!");
    CHECK(decryptVigenere("k @a wiuh1qk xwjipsui","code") == "i @m test1ng vigenere");
    CHECK(decryptVigenere("rmwpbt xq gvh gwym lofn","python") == "coding is not that easy");
  }
  SUBCASE("Extreme") {
    CHECK(decryptVigenere("Wcam","Longer") == "Long");
    CHECK(decryptVigenere("Cqimogaw","birthday") == "Birthday");
    CHECK(decryptVigenere("Jevpq, Wyvnd!","CAKE") == "Hello, World!");
  }
}
