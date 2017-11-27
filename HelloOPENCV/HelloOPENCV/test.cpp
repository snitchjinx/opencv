for (int y = img->height / 2; y < img->height; y++)
{
	uchar* ptr = (uchar*)(img->imageData + y*img->widthStep);
	for (int x = img->width / 2; x < img->width; x++)
	{
		ptr[x + 1] = 255;
		ptr[x + 2] = 255;
		ptr[x + 3] = 255;

		/*也可以是
		*(ptr+3*x+1) = 255;
		*(ptr+3*x+2) = 255;
		*(ptr+3*x+2) = 255;
		*/
	}
}