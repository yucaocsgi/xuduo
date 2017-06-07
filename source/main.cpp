#include <iostream>
#include <string>
#include <memory>

#include "../include/main.hpp"

std::auto_ptr<main_entry> main_entry::m_instance(new main_entry);

int main_entry::run(int argc, char *argv[])
{
	return 0;
}

//-------------------------------------------
int main(int argc, char* argv[]) {
	PRT_DEBUG("main_entry::run\n");

	main_entry::instance()->run(argc, argv);

	PRT_DEBUG("Press enter key to continue ...\n");
	std::string _;
	std::getline(std::cin, _);
}
