/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject;

@interface AVCAudioPowerSpectrumMeter : NSObject {

	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	double _audioSpectrumRefreshRate;
	unsigned short _audioSpectrumBinCount;
	unsigned _sessionToken;

}

@property (nonatomic,readonly) id<AVCAudioPowerSpectrumMeterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned sessionToken;                                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(void)deregisterBlocksForService;
-(void)registerBlocksForNotifications;
-(id)initWithConfig:(AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)registerPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)unregisterPowerSpectrumForStreamToken:(long long)arg1 ;
-(unsigned)sessionToken;
-(void)dealloc;
-(id<AVCAudioPowerSpectrumMeterDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end
