class Complex{
private:
	int real;
	int imaginary;
public:
	Complex(int real,int imaginary){
		this->real = real;
		this->imaginary = imaginary;
	}

	void add( Complex c2){
		real = real+c2.real;
		imaginary = imaginary+c2.imaginary;
	}

	void Print(){
		cout<<real<<"+"<<imaginary<<"i";
	}
};