#include "simdjson.h"
using namespace simdjson::builtin; // for ondemand
int main(void) {
    ondemand::parser parser;
    ondemand::document tweets = parser.iterate(simdjson::padded_string::load("twitter.json"));
    std::cout << uint64_t(tweets["search_metadata"]["count"]) << " results." << std::endl;
}
