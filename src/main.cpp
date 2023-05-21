#include "anagrams.cpp"

int main() {
    // Given vector
    vector<string> vec = {"code", "viles", "evil", "save", "war", "coed", "elvis", "doce", "live", "lives", "raw", "vile", "vase" };
    // Sort the vector alphabetically 
    sort(vec.begin(), vec.end());
    // Output the anagrams
    output_anagrams(vec);

    return 0;
}
