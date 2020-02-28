#ifndef Method_H	
#define Method_H


class Method
{
	private:
		string name;
		string type;
	public:
		Method(string n, string t);

		~Method();

		void print();

		string ret();
};

#endif
