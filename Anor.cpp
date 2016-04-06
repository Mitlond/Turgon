#pragma once
class ADD{
	int a, b;
public:
	ADD(int a, int b);
	int add();
};
ADD::ADD(int a, int b){
	this->a = a;
	this->b = b;
}
int ADD::add(){
	return a + b;
}