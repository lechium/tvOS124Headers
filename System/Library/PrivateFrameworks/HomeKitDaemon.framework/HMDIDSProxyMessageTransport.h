/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDIDSMessageTransport.h>

@class HMDWatchManager, HMDCompanionManager;

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport {

	HMDWatchManager* _watchManager;
	HMDCompanionManager* _companionManager;

}

@property (nonatomic,readonly) HMDWatchManager * watchManager;                      //@synthesize watchManager=_watchManager - In the implementation block
@property (nonatomic,readonly) HMDCompanionManager * companionManager;              //@synthesize companionManager=_companionManager - In the implementation block
+(unsigned long long)restriction;
+(long long)priorityForMessage:(id)arg1 ;
+(BOOL)transportSupportsDevice:(id)arg1 ;
-(long long)qualityOfService;
-(id)deviceForHandle:(id)arg1 ;
-(HMDWatchManager *)watchManager;
-(id)initWithAccountRegistry:(id)arg1 ;
-(BOOL)isDeviceConnected:(id)arg1 ;
-(id)remoteMessageFromMessage:(id)arg1 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)deviceForSenderContext:(id)arg1 ;
-(int)awdTransportType;
-(id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 error:(id*)arg7 ;
-(HMDCompanionManager *)companionManager;
-(id)watchDeviceForDevice:(id)arg1 ;
-(BOOL)isSecure;
@end

