#include <iostream>
#include <string>
using namespace std;

class Link;

struct List {
	List() : first() {}
	List(Link* l) : first(l) {}
	Link* first;
};
class Link {
public: 
	string value;
	Link(const string&v, Link* s = nullptr) :value(v), succ(s) {}
	Link* insert(List& l, Link* n);
	Link* add(Link*n);
	Link * erase(List& I);
	Link* find(const List& l, const string& s);
	Link * next() const { return succ; }
private:
	Link * succ;
};

Link* Link::insert(List& l, Link* n) {
	if (n == nullptr) return this;
	if (this == nullptr) return n;
	n->succ = this;
	if (l.first == this) {
		l.first = n;
		return n;
	}
}
Link* Link::add(Link* n) {
	if (n == nullptr) return this;
	if (this == nullptr) return n;
	n->succ = succ;
	succ = n;
	return n;
}
Link* Link::erase(List& l) {
	if (this == nullptr) return this;
	if (l.first == this) {
		l.first = succ;
	}
	Link* f = l.first;
	while (f->succ != this) {
		f = f->succ;
	}
	f->succ = succ;
	return succ;
}
Link* Link::find(const List&l, const string&s) {
	Link* f = l.first;
	while (f) {
		if (f->value == s)
			return f;
		f = f->succ;
	}
	return 0;
}
void print_all(List& l)
{
	Link* f = l.first;
	cout << "{ ";
	while (f) {
		cout << f->value;
		if (f = f->next()) cout << ", ";
	}
	cout << " }";
}
int main() {
	Link* norse_gods = new Link{ "Thor" };
	List norse(norse_gods);
	norse_gods = norse_gods->insert(norse,new Link{ "Odin" });
	norse_gods = norse_gods->insert(norse, new Link{ "Zues" });
	norse_gods = norse_gods->insert(norse, new Link{ "Freia" });
	Link* greek_gods = new Link{ "Hera" };
	List greek(greek_gods);
	greek_gods = greek_gods->insert(greek, new Link{ "Athena" });
	greek_gods = greek_gods->insert(greek, new Link{ "Mars" });
	greek_gods = greek_gods->insert(greek, new Link{ "Poseidon" });
	Link* p = greek_gods->find(greek, "Mars");
	if (p) p->value = "Ares";
	Link* p2 = norse_gods->find(norse, "Zeus");
	if (p2) {
		if (p2 == norse_gods){
			norse_gods = p2->next();
		}
		p2->erase(norse);
		greek_gods->add(greek, p2);
		greek_gods = greek.first;
	}
	print_all(norse);
	cout << "\n";

	print_all(greek);
	cout << "\n";
	return 0;
}

