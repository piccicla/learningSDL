#include <iostream>

class Point2D{
public:

    Point2D();
    Point2D(float x, float y);
    ~Point2D(){
        std::cout<< "Calling distructor" <<std::endl;
    };
    
    void SetX(float dx);
    void SetY(float dy);
    float GetX();
    float GetY();
    void Display();
    
    Point2D& RefOurselves();
    Point2D* PointerOurselves();
    
private:
    float mX;
    float mY;
};

Point2D::Point2D(): Point2D(0, 0){  
    
}
Point2D::Point2D(float x, float y): mX(x),mY(y) {

}

Point2D& Point2D::RefOurselves(){
    return *this;
}
Point2D* Point2D::PointerOurselves(){
    return this;
}


void Point2D::SetX(float dx){
        this->mX = dx;
}
void Point2D::SetY(float dy){
        this->mY = dy;
}
float Point2D::GetX(){
        return this->mX;
}
float Point2D::GetY(){
        return this->mY;
}
void Point2D::Display(){
        std::cout<<"X: "<<this->mX<<", Y:"<<this->mY<<std::endl;
        std::cout<<"Class size: "<<sizeof(this)<<std::endl;   // 2*4bites floats
}




int main(int argc, char **argv)
{
	Point2D p0 = Point2D(2,4);
    //p0.SetX(2);
    //p0.SetY(3);

    std::cout<<"X: "<<p0.GetX()<<", Y:"<<p0.GetY()<<std::endl;
    
    p0.Display();
    
     
     
    Point2D& refpoint =  p0.RefOurselves();
    Point2D* ptrpoint = p0.PointerOurselves();
    
    std::cout<<&refpoint<<" "<<ptrpoint<<" "<< &p0 << std::endl;

    return 0;
}

