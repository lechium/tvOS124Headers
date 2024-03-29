/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface TXRTextureInfo : NSObject {

	unsigned long long _pixelFormat;
	unsigned long long _alphaInfo;
	 _dimensions;
	unsigned long long _mipmapLevelCount;
	unsigned long long _arrayLength;
	BOOL _cubemap;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long alphaInfo;                     //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic)  dimensions;                                      //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) unsigned long long mipmapLevelCount;              //@synthesize mipmapLevelCount=_mipmapLevelCount - In the implementation block
@property (assign,nonatomic) unsigned long long arrayLength;                   //@synthesize arrayLength=_arrayLength - In the implementation block
@property (assign,nonatomic) BOOL cubemap;                                     //@synthesize cubemap=_cubemap - In the implementation block
@property (readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)alphaInfo;
-(BOOL)cubemap;
-(void)setCubemap:(BOOL)arg1 ;
-(void)setDimensions:;
-(void)setAlphaInfo:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-()dimensions;
-(NSError *)error;
@end

