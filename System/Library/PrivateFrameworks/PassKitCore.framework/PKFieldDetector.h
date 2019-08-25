/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PKFieldDetectorDelegate;
#import <PassKitCore/PassKitCore-Structs.h>
@class NSHashTable, PKFieldProperties, NSObject;

@interface PKFieldDetector : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _observers;
	PKFieldProperties* _fieldProperties;
	NSObject*<OS_dispatch_queue> _fieldDetectorSerialQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	id<PKFieldDetectorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) PKFieldProperties * fieldProperties; 
@property (assign,nonatomic,__weak) id<PKFieldDetectorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(PKFieldProperties *)fieldProperties;
-(void)setPersistentFieldDetectionEnabled:(BOOL)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PKFieldDetectorDelegate>)arg1 ;
-(id<PKFieldDetectorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
