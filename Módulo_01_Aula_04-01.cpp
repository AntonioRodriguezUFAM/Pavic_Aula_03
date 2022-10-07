
// Módulo 01 Aula 04  Task 01 - 2022
// Greate a filter

/* 
* Antonio Souto Rodriguez
* PAVIC 2022
P3           # "P3" means this is a RGB color image in ASCII
3 2          # "3 2" is the width and height of the image in pixels
255          # "255" is the maximum value for each color
# The part above is the header
*/

#include<iostream>
#include<fstream> // Read and Write Images

using namespace std;

int main() {

	// Read Images
	ifstream image;
	//Write image
	ofstream newimage;

	// open images
	image.open("./images/monument01.ppm");
	newimage.open("./images/monument01_Output.ppm");

	// Copy over header
	// P3  # "P3" means this is a RGB color image in ASCII
	string type = "";
	// 3 2          # "3 2" is the width and height of the image in pixels
	string width = "", height = "";
	// 255          # "255" is the maximum value for each color
	string RGB = "";

	// Copy over header 
	image >> type;
	image >> width;
	image >> height;
	image >> RGB;


	// Copy Header to new Image
	newimage << type << endl;
	newimage << width << " " << height << endl;
	newimage << RGB << endl;

	// The part below is the image data : RGB triplets
	//255   0   0  # red

	string red = "", green = "", blue = "";

	while (!image.eof()) {
		image >> red;
		image >> green;
		image >> blue;

		newimage << red << " " << green << " " << blue << " ";

	}


	//close image

	image.close();
	newimage.close();
}
/*
	if (image.is_open()) {

		// The part above is the header
		// P3  # "P3" means this is a RGB color image in ASCII
		// 3 2          # "3 2" is the width and height of the image in pixels
		// 255          # "255" is the maximum value for each color

		// Header
		image << "P3" << endl;
		image << "100 100" << endl;
		image << "255" << endl;

		// Image Body  -  Size 100 x 100

		for (int ImgH = 0; ImgH < 100; ImgH++) {
			for (int ImhV = 0; ImhV < 100; ImhV++) {
				image << "255 0 100" << endl;		// Red
			}
		}
	}
	*/