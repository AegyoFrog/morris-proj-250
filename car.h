#include <iostream>
#include <ctime>
#include <fstream>
#include <cmath>
using namespace std;

class car
{
public:
    ///constructor and destructor
    car(){make = "none"; x = -35; y = -35; face = 2; speed= 10;}
    ~car(){}

    /// accessors and mutators
    void setMake(string m){make = m;}
    void setX(int i){x = i;}
    void setY(int i){y = i;}
    void setFace(int i){face = i;}
    void setSpeed(int i){speed = i;}

    string getMake(){return make;}
    int getX(){return x;}
    int getY(){return y;}
    int getFace(){return face;}
    int getSpeed(){return speed;}


    void goForward(int i){
                    speed = i;
                    if(face==0){y=y+speed;}
                    else if(face==1){x=x+speed; y=y+speed;}
                    else if(face==2){x=x+speed;}
                    else if(face==3){x=x+speed; y=y-speed;}
                    else if(face==4){y=y-speed;}
                    else if(face==5){x=x-speed; y=y-speed;}
                    else if(face==6){x=x-speed;}
                    else {x=x-speed; y=y+speed;}
                    }

    void display(){
                   cout<<make<<" @ ("<<x<<", "<<y<<")"<<endl;
                   cout<<"current: ("<<X<<","<<Y<<")"<<endl;
                   cout<<"speed: " << speed << endl;
                   cout<<"destination: ("<< Dx <<", "<<Dy<<")"<<endl;

                  }

    void turnRight(int s){speed = s; face++; goForward(s);}
    void turnLeft(int s){speed = s; face--; goForward(s);}
    ///---------------------------

private:
    string make;
    int  x;
    int y;
    int X;
    int Y;
    double Dx;
    double Dy;
    int face;
    int speed;



///protected:  not used right now
};
