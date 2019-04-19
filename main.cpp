#include <iostream>

class Point2D{
public:
    void SetX(float dx);
    void SetY(float dy);
    float GetX();
    float GetY();
    void Display();
private:
    float mX;
    float mY;
};

void Point2D::SetX(float dx){
        mX = dx;
}
void Point2D::SetY(float dy){
        mY = dy;
}
float Point2D::GetX(){
        return mX;
}
float Point2D::GetY(){
        return mY;
}
void Point2D::Display(){
        std::cout<<"X: "<<this->mX<<", Y:"<<this->mY<<std::endl;
        std::cout<<"Class size: "<<sizeof(this)<<std::endl;   // 2*4bites floats
}



/*
int main(int argc, char **argv)
{
	Point2D p0;
    p0.SetX(2);
    p0.SetY(3);    
    p0.Display();
    

    return 0;
}
*/
