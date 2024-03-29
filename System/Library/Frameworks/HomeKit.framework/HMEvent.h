/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class HMFUnfairLock, HMEventTrigger, NSUUID, _HMContext, NSString;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	BOOL _endEvent;
	HMEventTrigger* _eventTrigger;
	NSUUID* _uniqueIdentifier;
	_HMContext* _context;
	NSUUID* _uuid;
	NSString* _triggerType;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,getter=isEndEvent,nonatomic) BOOL endEvent;                                 //@synthesize endEvent=_endEvent - In the implementation block
@property (nonatomic,readonly) NSString * triggerType;                                        //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic,__weak) HMEventTrigger * eventTrigger;                            //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)sharedTriggerActivationSupportedForHome:(id)arg1 ;
+(BOOL)isSupportedForHome:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithDict:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2 ;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSString *)triggerType;
-(void)_registerNotificationHandlers;
-(HMEventTrigger *)eventTrigger;
-(BOOL)isEndEvent;
-(void)setEndEvent:(BOOL)arg1 ;
-(void)setEventTrigger:(HMEventTrigger *)arg1 ;
-(id)_serializeForAdd;
-(void)_updateTriggerType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)uuid;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
@end

