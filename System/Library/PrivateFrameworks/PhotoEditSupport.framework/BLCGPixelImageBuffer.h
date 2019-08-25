/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLPixelImageBuffer.h>

@class NSMutableData;

@interface BLCGPixelImageBuffer : BLPixelImageBuffer {

	CGContextRef _bitmapContext;
	unsigned long long _rowBytes;
	NSMutableData* _bitmapData;

}

@property (nonatomic,retain) NSMutableData * bitmapData;              //@synthesize bitmapData=_bitmapData - In the implementation block
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
-(void)setBitmapData:(NSMutableData *)arg1 ;
-(void)accessPixelsByContextInBlock:(/*^block*/id)arg1 ;
-(void)renderCIImage:(id)arg1 ;
-(void)accessPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(void)readPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(id)ciImage;
-(NSMutableData *)bitmapData;
@end
