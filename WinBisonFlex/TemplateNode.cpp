#include "TemplateNode.h"

void printGrammarTree(TemplateNode * pNode, const string & prefix)
{
	if (pNode != nullptr)
	{
		bool hasChild = pNode->hasChild();
		bool isMeaningful = pNode->isMeaningful();

		if (!hasChild || !isMeaningful)
		{
			return;
		}
		for (auto it = pNode->childrens.begin(); it != pNode->childrens.end(); ++it)
		{
			if ((*it) != pNode->childrens.back())
			{
				cout << prefix;
				cout << "©À©¤©¤ ";
			}
			else
			{
				cout << prefix;
				cout << "©¸©¤©¤ ";
			}
			cout << (*it)->content << endl;
			bool printStrand = ((*it)->hasChild());
			string newPrefix;
			if (printStrand && (it + 1) == pNode->childrens.end())
			{
				newPrefix = prefix + "    ";
			}
			else if (printStrand && (it + 1) != pNode->childrens.end())
			{
				newPrefix = prefix + "©¦   ";
			}
			printGrammarTree((*it), newPrefix);
		}

	}
	else {
		return;
	}
}
