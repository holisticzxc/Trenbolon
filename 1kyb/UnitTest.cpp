#include <UnitTest++/UnitTest++.h>
#include "interface.h"

SUITE(HelpTest){
    TEST(ShortHelp){
    Interface iface;
    const char* argv[] = {"test","-h", nullptr};
    int argc = sizeof argv / sizeof nullptr -1;
    REQUIRE CHECK(!iface.Parser(argc, argv));
    CHECK(!iface.getDescription().empty());
    }
    
    TEST(Help){
    Interface iface;
    const char* argv[] = {"test","--help", nullptr};
    int argc = sizeof argv / sizeof nullptr -1;
    REQUIRE CHECK(!iface.Parser(argc, argv));
    CHECK(!iface.getDescription().empty());
    }

    TEST(InputFile){
    Interface iface;
    const char* argv[] = {"test","-i", "input.txt", nullptr};
    int argc = sizeof argv / sizeof nullptr -1;
    REQUIRE CHECK(!iface.Parser(argc, argv));
    CHECK(!iface.getDescription().empty());
    }



}

int main(){
    return UnitTest::RunAllTests();
}
