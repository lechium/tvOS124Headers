/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextureIO/TextureIO-Structs.h>
@interface TXRAssetCatalogFileAttributes : NSObject {

	CGColorSpaceRef _colorSpace;
	unsigned char _exifOrientation;
	unsigned long long _fileFormat;

}

@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (assign,nonatomic) unsigned char exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fileFormat;              //@synthesize fileFormat=_fileFormat - In the implementation block
-(void)setFileFormat:(unsigned long long)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(unsigned long long)fileFormat;
-(id)init;
-(CGColorSpaceRef)colorSpace;
-(unsigned char)exifOrientation;
-(void)setExifOrientation:(unsigned char)arg1 ;
@end

