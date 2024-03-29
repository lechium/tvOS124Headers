/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet;

@interface UISnapshottingAssertionManager : NSObject {

	opaque_pthread_mutex_t lock;
	NSMutableSet* _heldAssertions;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)relinquishAssertion:(id)arg1 ;
-(void)withLock:(/*^block*/id)arg1 ;
-(id)acquireNewAssertion;
-(void)executeIfNoActiveAssertions:(/*^block*/id)arg1 ;
@end

