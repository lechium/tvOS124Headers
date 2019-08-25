/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLImagePatch : NSObject {

	CGImageRef _imageRef;
	CGImageRef _maskRef;
	CGRect _rect;

}
+(id)patchFromRect:(CGRect)arg1 inImage:(CGImageRef)arg2 ;
+(id)patchFromRect:(CGRect)arg1 inImage:(CGImageRef)arg2 withMask:(CGImageRef)arg3 ;
-(id)initWithImageRef:(CGImageRef)arg1 andRect:(CGRect)arg2 andMask:(CGImageRef)arg3 ;
-(id)initWithImageRef:(CGImageRef)arg1 andRect:(CGRect)arg2 ;
-(void)translateOriginByPoint:(CGPoint)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(CGImageRef)image;
-(CGPoint)origin;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)rect;
@end

