/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIRadiositySurface : NSObject {

	IOSurfaceRef _surface;
	CGImageRef _image;
	unsigned long long _bytesPerRow;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
-(CGSize)size;
-(void)dealloc;
-(CGImageRef)CGImage;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void*)baseAddress;
-(unsigned long long)bytesPerRow;
-(IOSurfaceRef)IOSurface;
@end

