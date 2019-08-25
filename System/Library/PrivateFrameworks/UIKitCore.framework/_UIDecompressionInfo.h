/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject, NSData;

@interface _UIDecompressionInfo : NSObject {

	unsigned long long jpegDecodeRequestID;
	NSObject*<OS_dispatch_semaphore> syncSemaphore;
	NSObject*<OS_dispatch_semaphore> metadataSemaphore;
	NSData* imageData;
	CGSize maxSize;
	int renderingIntent;
	BOOL decompressionComplete;
	BOOL metadataComplete;

}
-(id)initWithData:(id)arg1 maxSize:(CGSize)arg2 renderingIntent:(int)arg3 ;
@end
