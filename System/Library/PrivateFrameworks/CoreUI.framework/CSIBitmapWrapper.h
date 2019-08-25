/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmapContext;
	NSData* _pixelData;
	unsigned _pixelFormat;
	unsigned _width;
	unsigned _height;
	unsigned long long _rowbytes;
	BOOL _allowsMultiPassEncoding;
	BOOL _allowsOptimalRowbytesPacking;
	BOOL _allowsCompactCompression;
	BOOL _allowsPaletteImageCompression;
	BOOL _allowsHevcCompression;
	BOOL _allowsDeepmapImageCompression;
	BOOL _flipped;
	CGImageRef _sourceImage;
	long long _texturePixelFormat;
	unsigned _imageAlpha;
	double _compressionQuality;
	long long _compressionType;
	unsigned long long _colorSpaceID;
	long long _textureInterpretation;
	int _exifOrientation;

}

@property (assign,nonatomic) unsigned pixelFormat;                         //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) BOOL allowsMultiPassEncoding;                           //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (assign) BOOL allowsOptimalRowbytesPacking;                      //@synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking - In the implementation block
@property (assign) BOOL allowsCompactCompression; 
@property (assign) BOOL allowsPaletteImageCompression;                     //@synthesize allowsPaletteImageCompression=_allowsPaletteImageCompression - In the implementation block
@property (assign) BOOL allowsHevcCompression;                             //@synthesize allowsHevcCompression=_allowsHevcCompression - In the implementation block
@property (assign) BOOL allowsDeepmapImageCompression;                     //@synthesize allowsDeepmapImageCompression=_allowsDeepmapImageCompression - In the implementation block
@property (assign,nonatomic) BOOL flipped;                                 //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) double compressionQuality;                    //@synthesize compressionQuality=_compressionQuality - In the implementation block
@property (assign) long long compressionType;                              //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) unsigned long long colorSpaceID;              //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;              //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (assign,nonatomic) int exifOrientation;                          //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(long long)compressionType;
-(void)setCompressionType:(long long)arg1 ;
-(unsigned)sourceAlphaInfo;
-(BOOL)allowsCompactCompression;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(BOOL)allowsPaletteImageCompression;
-(void)setAllowsPaletteImageCompression:(BOOL)arg1 ;
-(BOOL)allowsHevcCompression;
-(void)setAllowsHevcCompression:(BOOL)arg1 ;
-(BOOL)allowsDeepmapImageCompression;
-(void)setAllowsDeepmapImageCompression:(BOOL)arg1 ;
-(long long)textureInterpretation;
-(id)compressedData:(BOOL)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned*)arg3 ;
-(BOOL)allowsMultiPassEncoding;
-(unsigned long long)rowbytes;
-(void)setAllowsMultiPassEncoding:(BOOL)arg1 ;
-(BOOL)allowsOptimalRowbytesPacking;
-(void)setAllowsOptimalRowbytesPacking:(BOOL)arg1 ;
-(void)setTextureInterpretation:(long long)arg1 ;
-(id)pixelData;
-(void)setPixelData:(id)arg1 ;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 width:(unsigned)arg2 height:(unsigned)arg3 texturePixelFormat:(long long)arg4 ;
-(void)setSourceAlphaInfo:(unsigned)arg1 ;
-(void)setAllowsCompactCompression:(BOOL)arg1 ;
-(void)setColorSpaceID:(unsigned long long)arg1 ;
-(unsigned long long)colorSpaceID;
-(void)setFlipped:(BOOL)arg1 ;
-(BOOL)flipped;
-(void)dealloc;
-(unsigned)width;
-(unsigned)height;
-(int)exifOrientation;
-(void)setExifOrientation:(int)arg1 ;
-(CGContextRef)bitmapContext;
@end

