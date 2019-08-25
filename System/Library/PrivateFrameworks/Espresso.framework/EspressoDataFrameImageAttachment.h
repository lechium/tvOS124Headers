/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment {

	vImage_Buffer* buffer;
	int _nChannels;

}

@property (assign) int nChannels;              //@synthesize nChannels=_nChannels - In the implementation block
+(CVBufferRef)createCVPixelBufferFromvImage:(vImage_Buffer*)arg1 withPixelFormat:(unsigned)arg2 ;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(vImage_Buffer*)copyAsImageGrayscaleOrBGRA;
-(int)nChannels;
-(void)setNChannels:(int)arg1 ;
@end

