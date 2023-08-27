//this file is for Valve Texture Format

#include "darkplaces.h"
#include "cl_screen.h"
#include "image.h"
#include "vtf.h"
//thanks to https://noskill.gitbook.io/titanfall2/documentation/textures/valve-texture-format-vtf

typedef struct tagVTFHEADER
{
    char            signature [4];
    unsigned int    version[2];
    unsigned int    headerSize;
    unsigned short  width;
    unsigned short  height;
    unsigned int    flags;
    unsigned short  frames;
    unsigned short  firstframes;
    unsigned char   padding0[4];
    float           reflectivity;
    unsigned char   padding1[4];
    float           bumpScale;
    unsigned int    higthResImageFormat;
    unsigned char   mipmapCount;
    unsigned int    lowResImageFormat;
    unsigned char   lowResImageWidth;
    unsigned char   lowResImageHeight;
    //7.2 and more
    unsigned short  depth;
    //7.3 and more
    unsigned chart  padding2[3];
    unsigned int    numRessources;

} VTFHEADER;