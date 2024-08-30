#include <cstring>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
	if (argc != 4)
		return 1;
	(void)argc;
	std::string filename(argv[1]);
    std::ifstream file(argv[1]);
    if (!file.is_open())
    	return 1;
    std::string file_str((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    std::string oldstring(argv[2]);
    std::string newstring(argv[3]);
    size_t i;
    while((i = file_str.find(oldstring)) != std::string::npos)
    {
    	file_str.erase(i, oldstring.length());
     	file_str.insert(i, newstring);
    }
    std::ofstream newfile(filename.append(".replace").c_str());
    newfile << file_str;
    return 0;
}
