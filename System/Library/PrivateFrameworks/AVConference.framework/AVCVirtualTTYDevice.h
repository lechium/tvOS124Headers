/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient;

@interface AVCVirtualTTYDevice : NSObject {

	AVConferenceXPCClient* _connection;
	id _delegate;
	BOOL _isStarted;

}

@property (assign,nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)sendCharacter:(unsigned short)arg1 ;
-(BOOL)sendText:(NSString*)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 streamToken:(long long)arg3 ;
-(id)initWithStreamToken:(long long)arg1 error:(id*)arg2 ;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<AVCVirtualTTYDeviceDelegate>)arg1 ;
-(id<AVCVirtualTTYDeviceDelegate>)delegate;
-(void)stop;
-(void)start;
@end
