#pragma once
#ifndef _TEMPLATENODE_H_
#define _TEMPLATENODE_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TemplateNode
{
public:
	vector<TemplateNode*> childrens;
	string content = "bad";
	TemplateNode() = default;
	~TemplateNode() = default;

	TemplateNode(string value) : content(value) {}
	void addChild(TemplateNode* new_node)
	{
		childrens.push_back(new_node);
	}
	bool hasChild() 
	{
		if (childrens.empty())
		{
			return false;
		}
		else {
			for (auto it = this->childrens.begin(); it != this->childrens.end(); ++it) {
				if (!((*it)->isMeaningful())) {
					return false;
				}
			}
			return true;
		}
	}
	bool isMeaningful()
	{
		return ((content.compare("bad") == 0 ? false : true));
	}
};

void printGrammarTree(TemplateNode * pNode, const string& prefix="")

#endif
;