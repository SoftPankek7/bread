#include<iostream>
#include<fstream>
#include<filesystem>

std::string filename;
std::filesystem::path tmp_dir = "/tmp/bread/";
std::string cppname;

int create_tmp_dir_if_not_exist() {
    try {
        if (!std::filesystem::is_directory(tmp_dir)) {
            std::filesystem::create_directory(tmp_dir);
            std::cout << "created tmp directory, first start?" << std::endl;
        }
    } catch (const std::filesystem::filesystem_error &e) {
        std::cout << "could not create tmp directory, " << e.what() << std::endl;
        return 1;
    }
    return 0;
}


int compile_to_cpp(std::string filename) {
    std::ifstream breadfile;

    breadfile.open(filename);
    if (!breadfile.is_open()) {
        std::cerr << "error opening file" << std::endl;
        throw 500;
        return 1;
    }
    breadfile.close();
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "no arguments given, enter filename to compile .bread file" << std::endl;
        return 1;
    } else {
        filename = argv[1];
    }
    create_tmp_dir_if_not_exist();
    try {
        compile_to_cpp(filename);
    } catch (int ercode) {
        return 1;
    }
    return 0;
}