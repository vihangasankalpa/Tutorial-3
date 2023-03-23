#include<iostream>
using namespace std;

struct Box{
int width,height,length;
}Box1,Box2; //method 1

int volume(int height, int width, int length);

int main() {

 struct Box box1,box2;
 int totalVolume;

 
 cout << "Enter Box 1 Height : ";
 cin >> box1.Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.Length;

 cout << "Enter Box 2 Height : ";
 cin >> box2.Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.Length;


 totalVolume = volume(box1.Height ,box1.Width ,box1.Length )
 + volume(box2.Height ,box2.Width ,box2.Length  );


 cout << "Volume of Box is " << totalVolume << endl;

 return 0;
}

int volume(int height, int width, int length){
  int total
	total=height*width*length;
  return total;
}