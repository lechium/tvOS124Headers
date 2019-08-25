/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TXROptions : NSObject <NSCopying> {

	BOOL _cubemapFromVerticallyStackedImage;
	unsigned long long _originOperation;
	unsigned long long _colorSpaceHandling;
	BOOL _multiplyAlpha;

}

@property (assign,nonatomic) BOOL cubemapFromVerticallyStackedImage;              //@synthesize cubemapFromVerticallyStackedImage=_cubemapFromVerticallyStackedImage - In the implementation block
@property (assign,nonatomic) unsigned long long originOperation;                  //@synthesize originOperation=_originOperation - In the implementation block
@property (assign,nonatomic) unsigned long long colorSpaceHandling;               //@synthesize colorSpaceHandling=_colorSpaceHandling - In the implementation block
@property (assign,nonatomic) BOOL multiplyAlpha;                                  //@synthesize multiplyAlpha=_multiplyAlpha - In the implementation block
-(BOOL)cubemapFromVerticallyStackedImage;
-(void)setCubemapFromVerticallyStackedImage:(BOOL)arg1 ;
-(unsigned long long)originOperation;
-(unsigned long long)colorSpaceHandling;
-(BOOL)multiplyAlpha;
-(void)setOriginOperation:(unsigned long long)arg1 ;
-(void)setColorSpaceHandling:(unsigned long long)arg1 ;
-(void)setMultiplyAlpha:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

