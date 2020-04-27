#include <iostream>
#include <string>
using namespace std;
class Link {
public:
	string value;
	Link(const string& v, Link*p = nullptr, Link* s = nullptr) : value{ v }, prev{ p }, succ{ s } {}
	Link* insert(Link* n);
	Link* add(Link* n);
	Link* erase();
	Link* find(const string&s);
	const Link* find(const string& s) const;
	Link* next() const { return succ; }
	Link* previous() const { return prev; }
private:
	Link* succ;
	Link* prev;
};
Link* Link::insert(Link* n)    // insert n before this object; return n
{
	if (n == nullptr) return this;
	if (this == nullptr) return n;
	n->succ = this;              // this object comes after n
	if (prev) prev->succ = n;
	n->prev = prev;            // this object’s predecessor becomes n’s predecessor
	prev = n;                        // n becomes this object’s predecessor
	return n;
}
Link* Link::add(Link* n)    // insert n after this object; return n
{
	if (n == nullptr) return this;
	if (this == nullptr) return n;
	n->succ = this;              // this object comes after n
	if (succ) succ->succ = n;
	n->prev = succ;            // this object’s predecessor becomes n’s successor
	succ = n;                        // n becomes this object’s successor
	return n;
}
Link* Link::erase() {
	if (this == nullptr)
		return nullptr;
	else if (succ) {

		succ->prev = prev;
	}
	else if (prev)
		prev->succ = succ;
	return this;
}
Link* Link::find(const string& s) {
	Link* p = this;
	while (p) {
		if (p->value == s) { return p; }
		p = p->succ;
	}
	return nullptr;
	
}
const Link* Link::find(const string&s) const {
	const Link*p = this;
	while (p) {
		if (p->value == s) {
			return p;
		}
		p = p->succ;
	}
	return nullptr;
}
void print_all(Link* p)
{
	cout << "{ ";
	while (p) {
		cout << p->value;
		if (p = p->next()) cout << ", ";
	}
	cout << " }";
}

int main() {
	Link* norse_gods = new Link{ "Thor" };
	norse_gods = norse_gods->insert(new Link{ "Odin" });
	norse_gods = norse_gods->insert(new Link{ "Zues" });
	norse_gods = norse_gods->insert(new Link{ "Freia" });
	Link* greek_gods = new Link{ "Hera" };
	greek_gods = greek_gods->insert(new Link{ "Athena" });
	greek_gods = greek_gods->insert(new Link{ "Mars" });
	greek_gods = greek_gods->insert(new Link{ "Poseidon" });
	Link* p = greek_gods->find("Mars");
	if (p) p-> value = "Ares";
	Link* p2 = norse_gods->find("Zeus");
	if (p2) {
		if (p2 == norse_gods) {
			norse_gods = p2->next();	
		}
		p2->erase();
		greek_gods->add(p2);
	}
	print_all(norse_gods);
	cout << "\n";

	print_all(greek_gods);
	cout << "\n";
	cout << "Why do we define two versions of find()?\n";
	cout << "The first version Link* find(const string&s) is used for lists where the members and the list itself can be modified.";
	cout << "\nThe second const Link* find(const string&s) const is used for a list where the member variables and the list itself cannot be modified and all its values are constant.";

	return 0;
}