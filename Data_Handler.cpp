
#include "Data_Handler.h"


	DataHandler::DataHandler(std::string filename) :
		fileName(filename)
	{ }

	void DataHandler::read() {
		for (int i = 0; i < info.size(); i++) {
			std::cout << info[i] << std::endl;
        }
	}
	void  DataHandler::data()
	{
		std::ifstream file(fileName);
		while (file.good()) {
			std::string line;
			getline(file, line, ',');
			info.push_back(line);
		}
	}
int main() {
	DataHandler o1("titanic.csv");
	o1.data();
	o1.read();
	return 0;
}