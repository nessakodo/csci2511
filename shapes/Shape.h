#ifndef SHAPE_H
#define SHAPE_H


class Shape { 
	
	private:
		int num;
		
	public:
	
		Shape();
		Shape(int num) : num(num) {};
		
		int getNum();
		void setNum(int num);
		virtual double returnArea() = 0;

};

#endif