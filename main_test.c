
# include "cbmp.h"
# include <stdio.h>


int main() {
	Bmp *file = bmp_load("data/test.bmp");					//Load data/test.bmp
	set_pix(&(file->img[0][0]), 255, 0, 0);					//Set first pixel to red
	bmp_save(file->H, file->W, file->img, "data/res.bmp");	//Save as data/res.bmp
	bmp_delete(file);										//Free data
	return (1);
}