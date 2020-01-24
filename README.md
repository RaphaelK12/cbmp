# cbmp

C header library for loading/saving 24-bit BMP

## Usage

Include cbmp.h into a c file. see main_test.c for an exemple
``gcc main_test.c``


## Functions

```c
Bmp *bmp_load(const char *file_name)
```

Load a file into a Bmp struct.
Return NULL and free all data if an error occur.
The Bmp struct has to be delete with bmp_delete.


```c
int bmp_save(unsigned long H, unsigned long W, Pix **img, const char *file_name)
```

Save a 24-bit bmp image.
Return 0 if fail.

```c
void set_pix(Pix *pix, unsigned char R, unsigned char G, unsigned char B)
```

Set the pixel to the wanted color.

```c
void bmp_delete(Bmp *file)
```

Delete the selected Bmp struct.

## Data structure

```c
typedef struct  t_pix {
  unsigned char R;	
  unsigned char G;	
  unsigned char B;
}               Pix;
```
```c
typedef struct  t_bmp {
  Pix**         img;
  unsigned char *data;
  long          pad;
  unsigned long size;
  unsigned long H;
  unsigned long W;
}               Bmp;
```
