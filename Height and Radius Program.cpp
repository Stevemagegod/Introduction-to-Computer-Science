# include <iostream>
# include <cmath>
using namespace std;


void checkdimension (double &);
double calculate (double &, double &);


int main()
{
double volume = 0;
double surfaceArea = 0;
double π =3.14159;
double radius;
double height;

cout<<"Please enter the height and the radius of the cylinder:12.6 5.9. with a height of 12.6 and a radius of 5.9";
cin>>radius;
checkdimension (radius);
cout<<"Please enter the height of the cylinder. ";
cin>>height;
checkdimension (height);
cout<<endl;

calculate(height, radius);

cout<<"A cylinder with a radius of "<<radius<<" and a height of "<<height<<endl;
cout<<"has a volume of "<<volume<<" and a surface area of "<<surfaceArea<<".";

return 0;
}

void checkdimension (double &refVar)
{


while (refVar <= 0)
{
cout<<refVar<<" is not a valid entry for the "<<refVar<<"!"<<endl;
cout<<"Please enter a value that is greater than 0 for the "<<refVar<<". ";
cin>>refVar;
}
}

double calculate (double &refVar1, double &refVar2)
{
double surfaceArea;
double volume;

surfaceArea = (2 * 3.14159 * pow(refVar2,2.0)) + (2 * 3.14159 * refVar2 * refVar1);

volume = (3.14159 * (pow(refVar2,2.0)) * refVar1);

return surfaceArea;
return volume;
}
