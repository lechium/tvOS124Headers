/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PDImageDecoder.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, PHRecyclableObjectVendor, NSObject;

@interface PDFigDecoder : PDImageDecoder {

	NSMutableDictionary* _containersByRequestID;
	os_unfair_lock_s _lock;
	PHRecyclableObjectVendor* _optionVendor;
	NSObject*<OS_dispatch_queue> _decodeFailureQueue;

}
+(id)sharedDecoder;
-(unsigned long long)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 applyOrientationTransform:(BOOL)arg4 waitUntilComplete:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelDecodeRequestForID:(unsigned long long)arg1 ;
-(id)init;
@end

