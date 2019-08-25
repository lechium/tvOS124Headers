/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class <MTLDevice>, MPSCommandBufferImageCache, MTLTextureDescriptor;

typedef struct _NSZone* NSZoneRef;

typedef struct MPSPixelInfo {
	unsigned pixelFormat : 10;
	unsigned chunkSize : 6;
	unsigned chunkWidth : 4;
	unsigned chunkHeight : 4;
	unsigned pixelStyle : 4;
	unsigned colorModel : 4;
	unsigned bitDepth : 8;
	unsigned isSigned : 1;
	unsigned isClamped : 1;
	unsigned isInteger : 1;
	unsigned canFilter : 1;
	unsigned canRender : 1;
	unsigned canWrite : 1;
	unsigned canMultisample : 1;
	unsigned isSupported : 1;
	unsigned isCompressed : 1;
	unsigned chunkSizePlane2 : 6;
	unsigned log2MinAlignment : 4;
	unsigned _padding : 5;
} MPSPixelInfo;

typedef struct atomic<void *> {
	Av __a_;
} atomic<void *>;

typedef struct {
	unsigned long long size;
	unsigned long long align;
} SCD_Struct_MP3;

typedef struct {
	<MTLDevice>* device;
} SCD_Struct_MP4;

typedef struct {
	MPSCommandBufferImageCache* cache;
} SCD_Struct_MP5;

typedef struct {
	MTLTextureDescriptor* _descriptor;
	/*function pointer*/void* ;
	SCD_Struct_MP4 _tex;
	SCD_Struct_MP5) _temporary;
} SCD_Struct_MP6;

typedef struct {
	MPSAutoTexture parent;
	unsigned subRangeStart;
	unsigned subRangeSize;
} SCD_Struct_MP7;

typedef struct MPSAutoTexture {
	atomic<void *> _texture;
	SCD_Struct_MP3 _resourceSize;
	unsigned long long _rowBytes;
	/*function pointer*/void* ;
	SCD_Struct_MP7 _subTex;
	SCD_Struct_MP6) ;
	unsigned char _type;
	unsigned char _twiddled;
} MPSAutoTexture;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MP9;

typedef struct {
	SCD_Struct_MP9 field1;
	SCD_Struct_MP9 field2;
} SCD_Struct_MP10;

typedef struct {
	unsigned mpsKernelVersion : 8;
	unsigned intermediateObjectVersion : 8;
	unsigned version : 16;
} SCD_Struct_MP11;

typedef union {
	unsigned bits;
	SCD_Struct_MP11 field2;
} SCD_Union_MP12;

