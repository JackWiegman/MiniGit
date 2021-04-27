// #include <filesystem>
// namespace fs = std::filesystem;


struct doubleNode {
    int commintNumber;
    singleNode * head;
    doubleNode * prev;
    doubleNode * next;
    
};

struct singleNode {
    std::string fileName;
    std::string fileVersion;

};