/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, NSString, NSUUID, NSDate, HMHome, HMDevice, HMUser, _HMContext, HMMutableArray, NSArray;

@interface HMTrigger : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	BOOL _enabled;
	NSString* _name;
	NSUUID* _uniqueIdentifier;
	NSDate* _lastFireDate;
	NSUUID* _uuid;
	HMHome* _home;
	HMDevice* _ownerDevice;
	HMUser* _owner;
	_HMContext* _context;
	HMMutableArray* _currentActionSets;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentActionSets;                              //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSDate * lastFireDate;                                             //@synthesize lastFireDate=_lastFireDate - In the implementation block
@property (nonatomic,retain) HMDevice * ownerDevice;                                          //@synthesize ownerDevice=_ownerDevice - In the implementation block
@property (assign,nonatomic,__weak) HMUser * owner;                                           //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionSets; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(HMDevice *)ownerDevice;
-(void)_addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateActionSet:(id)arg1 add:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enable:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addActionSetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleTriggerFired:(id)arg1 ;
-(void)_handleUpdatedActionSetNotification:(id)arg1 ;
-(void)_handleTriggerRenamedNotification:(id)arg1 ;
-(void)_handleTriggerActivatedNotification:(id)arg1 ;
-(void)_handleTriggerFiredNotification:(id)arg1 ;
-(NSDate *)lastFireDate;
-(id)creatorDevice;
-(void)setOwnerDevice:(HMDevice *)arg1 ;
-(BOOL)compatibleWithApp;
-(void)removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addActionSetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enable:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)actionSets;
-(void)setCurrentActionSets:(HMMutableArray *)arg1 ;
-(HMMutableArray *)currentActionSets;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)creator;
-(void)_registerNotificationHandlers;
-(id)_serializeForAdd;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(_HMContext *)context;
-(void)_invalidate;
-(id)initWithName:(id)arg1 ;
-(HMUser *)owner;
-(void)setOwner:(HMUser *)arg1 ;
-(NSUUID *)uniqueIdentifier;
@end

