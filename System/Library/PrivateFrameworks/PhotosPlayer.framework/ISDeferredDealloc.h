/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ISDeferredDealloc : NSObject {

	NSObject*<OS_dispatch_queue> _deferredDeallocQueue;

}
+(id)sharedInstance;
-(void)_performDeferredDealloc:(id)arg1 ;
-(void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2 ;
-(id)init;
-(void)dealloc;
@end
