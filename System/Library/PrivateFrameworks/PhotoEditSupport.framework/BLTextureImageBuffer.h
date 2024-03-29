/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLImageBuffer.h>

@class EAGLContext, CIImage;

@interface BLTextureImageBuffer : BLImageBuffer {

	unsigned _accumlatorTexture;
	unsigned _accumlatorFramebuffer;
	EAGLContext* _eaglContext;
	CIImage* _ciImage;

}
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
-(void)renderCIImage:(id)arg1 ;
-(void)readPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(id)ciImage;
-(void)dealloc;
@end

