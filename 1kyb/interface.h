#pragma once
#include <boost/program_options.hpp>
#include <string>
#include <sstream>
using namespace std;
namespace po = boost::program_options;
// СЃС‚СЂСѓРєС‚СѓСЂР° РґР»СЏ С…СЂР°РЅРµРЅРёСЏ РїРѕР»СѓС‡РµРЅРЅС‹С… РїР°СЂР°РјРµС‚СЂРѕРІ
struct Params {
    string inFileName;
    string inFileResult;
    string inFileData;
    int Port;
    string Address;
};

// РРЅС‚РµСЂС„РµР№СЃ
class UserInterface {
private:
    // РїСѓСЃС‚РѕР№ РїР°СЂСЃРµСЂ
    po::options_description desc;
    // РїРµСЂРµРјРµРЅРЅР°СЏ РґР»СЏ СЂРµР·СѓР»СЊС‚Р°С‚РѕРІ РїР°СЂСЃРёРЅРіР°
    po::variables_map vm;
    // СЂРµР·СѓР»СЊС‚Р°С‚С‹ РїР°СЂСЃРёРЅРіР° РїР°СЂР°РјРµС‚СЂРѕРІ
    Params params;
public:
    UserInterface();
    bool Parser(int argc, const char** argv);
    string getDescription();
    Params getParams() {
    return params;
    };
};
