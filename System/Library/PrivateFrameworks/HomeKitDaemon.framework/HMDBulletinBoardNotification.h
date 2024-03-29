/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSPredicate, HMDBulletinBoardNotificationServiceGroup, NSUUID, HMDService, NSObject, HMFMessageDispatcher, NSString;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {

	BOOL _enabled;
	NSPredicate* _condition;
	HMDBulletinBoardNotificationServiceGroup* _notificationServiceGroup;
	NSUUID* _targetUUID;
	HMDService* _service;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                                       //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                       //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                                                    //@synthesize service=_service - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSPredicate * condition;                                                          //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) HMDBulletinBoardNotificationServiceGroup * notificationServiceGroup;              //@synthesize notificationServiceGroup=_notificationServiceGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsBulletinNotificationGroup:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDService *)service;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(id)initWithService:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSUUID *)targetUUID;
-(void)_registerNotificationHandlers;
-(void)configureMsgDispatcher:(id)arg1 ;
-(void)configureBulletinNotification:(/*^block*/id)arg1 ;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDBulletinBoardNotificationServiceGroup *)notificationServiceGroup;
-(void)_handleBulletinBoardNotificationCommitRequest:(id)arg1 ;
-(void)setNotificationServiceGroup:(HMDBulletinBoardNotificationServiceGroup *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSPredicate *)condition;
-(void)setCondition:(NSPredicate *)arg1 ;
@end

