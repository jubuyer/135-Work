#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("CAESAR CIPHER SOLVER") {
  SUBCASE("Basic Tests") {
    std::string test1 = "P't uva zbyl pm aopz dvyrz zv pt nvpun av dypal 3hsva "
    "dpao tpzahrlz huk zll pm aolylz huf pzzblz 921 iljhbzl p jvbskua' mpnbl "
    " vba aol pzzbl";
    std::string ans1 = "I'm not sure if this works so im going to write 3alot "
    "with mistakes and see if theres any issues 921 because i couldnt' figue "
    " out the issue";
    std::string test2 = "Pm ol ohk hufaopun jvumpkluaphs av zhf, ol dyval pa pu "
    "jpwoly, aoha pz, if zv johunpun aol vykly vm aol slaalyz vm aol hswohila, "
    "aoha uva h dvyk jvbsk il thkl vba.";
    std::string ans2 = "If he had anything confidential to say, he wrote it in "
    "cipher, that is, by so changing the order of the letters of the alphabet, "
    "that not a word could be made out.";
    std::string test3 = "Lwtc hdbtdct rjghth iwtn vd, &%#&@ pcs iwtc pgt gtegxb"
    "pcsts udg iwtxg itggxqat apcvjpvt pcs qtwpkxdg. Hd xchitps iwtn hwdjas "
    "hetpz xc rxewtg hd iwpi cdq0sn rpc itaa.";
    std::string ans3 = "When someone curses they go, &%#&@ and then are reprim"
    "anded for their terrible language and behavior. So instead they should "
    "speak in cipher so that nob0dy can tell.";
    CHECK(solve(test1) == ans1);
    CHECK(solve(test2) == ans2);
    CHECK(solve(test3) == ans3);
  }

  SUBCASE("Short Cipher Test") {
    CHECK(solve("wtaad") != "hello");
    CHECK(solve("Ocdn dn ojj ncjmo, ndm!") == "This is too short, sir!");
    CHECK(solve("Ubj fubeg?") != "How short?");
  }

  SUBCASE("Plaintext Test") {
    CHECK(solve("This should theoretically return the same thing") == "This sho"
    "uld theoretically return the same thing");
  }
}
