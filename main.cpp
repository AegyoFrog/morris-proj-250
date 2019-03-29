///Name: Jordon
///Course: CS 250 Saturday Morris
///Project: Project 1
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cmath>
#include <sstream>
#include <fstream>
#include "car.h"
using namespace std;


int main()
{   string ss;
    int FileNum;
    int p;
    int i;
    string FN = ss.str();
    string basename = "Speed Test";
    string filename;
    double s = 10.0;
    double x;
    double y;
    double xdest;
    double ydest;
    int leg;
    int Endleg;
    int lap = 0;
    int path[8][2];
    int GoAround;
    cout << "How many times do you want the car to go around? " << endl;
    cout << "^*^*^^*^^*^*^^*^*^*^*^*^*^*^**^*^^*^*^^*^***^"<< endl;
    cin >> GoAround;

    void Race(default_random_engine*gptr, int s, int leg)
    {
     normal_distribution<double>Mdist(0,4);
     speed = s;
     int FileNum = 0;
     string FN;
     string basename = "car_data";
     string filename;
     int leg, lap = 1, EndLeg;
     double x,y,xdest, ydest;
     int path[6][2];
     int GoAround = l;

	fstream fin;
    fstream fout;


    fin.open("GoAround_Derby.txt,",ios::in);
    for(int L=0; L<6; L++)
    {
     while(D>s)
     {
        dx = s*Dx/D;
        x = x + dx + Mdist(*gptr);
        dy = s*Dy/D;
        y = y + dy + Mdist(*gptr);
     }
    }
    FN = to_string(FileNum);
    FileNum++;
    filename = basename+FN+".txt";
    fout.open(filename.c_str(),ios::out);
    for(int p=0; i<=8; i++)
    {
    	for(int p=0; p<3; p++)
    	{
    		fin >> path[i][p];
    		cout<<path[i][p];
    		if(p==0)(cout<<", ");
    		else(cout<<endl);
		}
	}
	cout<<endl;
	cout << " Path Loaded" << endl;

	cout << "3...2...1...Go!" << endl;
	leg = 0;
	Endleg = leg + 1;

	x = path[leg][0];
	y = path[leg][i];
	xdest = path[Endleg][0];
	ydest = path[Endleg][i];

	cout<<"starting point:   "<<x<<", "<<y<<endl;
	cin>>x>>y>>endl;
	cout<<"Destination:   "<<xdest<<", "<<ydest<<endl;
	cin>>xdest>>ydest>>endl;
	fout<<"starting point  " <<x<<",  "<<y<<endl;
	fout<<"Destination:  "<<xdest<<",  "<<ydest<<endl;
	fout.close();
	float Dx, Dy;
	Dx = xdest - x;
	Dy = ydest - y;
	float Distance;
	float dx, dy;
	Distance = sqrt(pow(Dx,2) * pow(Dy,2));

  while(lap<=GoAround)
	{
   while(fin!eof())
   {
   while(Distance>s)
   {
   	dx = s*Dx/Distance;
   	x = x +dx;
   	dy = s*Dy/Distance;
   	y = y+ dy;
   	cout<<"current placements: "<<x<<", "<<y<<endl;
   	fout<<"current placements: "<<x<<", "<<y<<endl;
   	Dx = xdest-x;
   	Dy = ydest-y;
   	Distance = sqrt(pow(Dx,2) + pow(Dy,2));
   }
   FN = to_string(FileNum);
   FileNum++;
   filename = basename+FN+". txt";
   fout.open(filename.c_str(),ios::out);
        x = xdest;
		y = ydest;

		fin >>xdest;
		fin >>ydest;
		cout<<"starting point: "<<x<<", "<<y<<endl;
		cout<< "Destination:  "<<xdest<<", "<<ydest<<endl;

		fout<<"starting point: "<<x<<", "<<y<<endl;
		fout<<"Destination: "<<xdest<<", "<<ydest<<endl;
		fout.close();
		Dx = xdest - x;
		Dy = ydest - y;
		Distnace = sqrt(pow(Dx,2) + pow(Dy,2));

	}
	if(fin.eof())
	{
		cout<<"end of lap number: "<<lap<<endl<<endl;
		fout<<"end of lap number: "<<lap<<endl<<endl;
	}
	fin.close();
	fin.open("racetrack_data.txt".ios::in);
	lap++;
    car C1;
    C1.setMake("Ford");
    C1.setFace(2);


    return 0;
}


