/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDeviceSetupSessionDelegate;
@class HMFUnfairLock, NSDictionary, NSUUID, _HMContext, NSString;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	BOOL _open;
	NSDictionary* _userInfo;
	id<HMDeviceSetupSessionDelegate> _delegate;
	NSUUID* _identifier;
	long long _role;
	_HMContext* _context;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                         //@synthesize open=_open - In the implementation block
@property (__weak,readonly) id<HMDeviceSetupSessionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long role;                                                          //@synthesize role=_role - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)homeManagerDestination;
+(id)logCategory;
-(id)initWithRole:(long long)arg1 delegate:(id)arg2 ;
-(void)sendExchangeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleDisconnection:(id)arg1 ;
-(void)__handleReceivedExchangeData:(id)arg1 ;
-(void)__handleClose:(id)arg1 ;
-(void)_handleOpenedSession;
-(void)__closeWithError:(id)arg1 ;
-(void)_reallySendExchangeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)role;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(id)messageDestination;
-(void)_closeWithError:(id)arg1 ;
-(void)__registerForMessages;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)isOpen;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id<HMDeviceSetupSessionDelegate>)delegate;
-(_HMContext *)context;
-(BOOL)open;
-(void)close;
@end

