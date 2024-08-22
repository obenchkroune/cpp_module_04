#pragma once

#include <string>

using std::string;

class Brain {
public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();

	void			setIdea(unsigned int idx, const string &value);
	const string	&getIdea(unsigned int idx) const;
private:
	string m_ideas[100];
};
