/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMFMessageDispatcher, NSMutableSet, NSObject, NSString, HMDMediaEndpoint, HMDMediaSessionState, NSUUID, NSMutableArray, HMFTimer, NSArray, NSSet;

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {

	HMFMessageDispatcher* _msgDispatcher;
	NSMutableSet* _mediaProfiles;
	BOOL _connected;
	BOOL _currentAccessorySession;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSString* _sessionIdentifier;
	HMDMediaEndpoint* _endpoint;
	HMDMediaSessionState* _state;
	NSString* _logID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uuid;
	NSMutableArray* _setPlaybackStateCompletionHandlers;
	HMFTimer* _setPlaybackStateTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                               //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDMediaEndpoint * endpoint;                                                //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) HMDMediaSessionState * state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * setPlaybackStateCompletionHandlers;                        //@synthesize setPlaybackStateCompletionHandlers=_setPlaybackStateCompletionHandlers - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                          //@synthesize connected=_connected - In the implementation block
@property (assign,getter=isCurrentAccessorySession,nonatomic) BOOL currentAccessorySession;              //@synthesize currentAccessorySession=_currentAccessorySession - In the implementation block
@property (nonatomic,retain) NSString * logID;                                                           //@synthesize logID=_logID - In the implementation block
@property (nonatomic,retain) HMFTimer * setPlaybackStateTimer;                                           //@synthesize setPlaybackStateTimer=_setPlaybackStateTimer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher;                                     //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;                                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * mediaProfiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)sessionForCurrentAccessory:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isConnected;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)dumpState;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)registerForSessionUpdates:(BOOL)arg1 ;
-(id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3 ;
-(void)updateWithResponses:(id)arg1 message:(id)arg2 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg1 ;
-(void)readProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)logID;
-(void)updateEndpoint:(id)arg1 ;
-(id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3 ;
-(id)_initWithMediaProfiles:(id)arg1 state:(id)arg2 ;
-(HMFTimer *)setPlaybackStateTimer;
-(void)setSetPlaybackStateTimer:(HMFTimer *)arg1 ;
-(BOOL)isCurrentAccessorySession;
-(void)_postNotificationOfPlaybackStateUpdateWithError:(id)arg1 inResponseToMessage:(id)arg2 ;
-(void)_getPlaybackStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleGetPlaybackState:(id)arg1 ;
-(void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1 ;
-(void)_postNotificationOfPlaybackStateUpdateWithPayload:(id)arg1 ;
-(void)handleMediaPlaybackStateNotification:(id)arg1 ;
-(NSMutableArray *)setPlaybackStateCompletionHandlers;
-(void)_queueSetPlaybackStateCompletion:(/*^block*/id)arg1 ;
-(void)_setPlaybackState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSetPlayback:(id)arg1 ;
-(void)_handleMediaSessionSetAudioControl:(id)arg1 ;
-(void)_handleMediaUpdateVolume:(id)arg1 ;
-(void)_handleMediaUpdateMuted:(id)arg1 ;
-(void)_registerForSessionUpdates:(BOOL)arg1 ;
-(void)handleRefreshPlayback:(id)arg1 ;
-(void)handleSetPlayback:(id)arg1 ;
-(void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3 ;
-(void)handleMediaSessionSetAudioControl:(id)arg1 ;
-(NSArray *)mediaProfiles;
-(void)addMediaProfile:(id)arg1 ;
-(void)removeMediaProfile:(id)arg1 ;
-(void)setEndpoint:(HMDMediaEndpoint *)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(void)setCurrentAccessorySession:(BOOL)arg1 ;
-(void)setLogID:(NSString *)arg1 ;
-(void)setSetPlaybackStateCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)uuid;
-(HMDMediaSessionState *)state;
-(void)setState:(HMDMediaSessionState *)arg1 ;
-(NSString *)sessionIdentifier;
-(HMDMediaEndpoint *)endpoint;
@end

