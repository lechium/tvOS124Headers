/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKInAppPaymentService, NSMutableDictionary, NSObject, NSHashTable;

@interface PKAMPEnrollmentManager : NSObject {

	PKInAppPaymentService* _service;
	NSMutableDictionary* _promiseMap;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	os_unfair_lock_s _lockObservers;
	NSHashTable* _observers;

}
+(id)sharedManager;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)enrollmentStatusForPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 progress:(/*^block*/id)arg3 ;
-(void)enrollPaymentPass:(id)arg1 isDefault:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)init;
@end

