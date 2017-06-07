#pragma once

#if defined _DEBUG
#define PRT_ERROR printf
#define PRT_INFO  printf
#define PRT_DEBUG printf
#else
#endif

class main_entry {
private:
	static std::auto_ptr<main_entry> m_instance;

public:
	main_entry() {}
	~main_entry() {}

	static std::auto_ptr<main_entry> instance() { return m_instance; }
	int run(int argc, char *argv[]);
};