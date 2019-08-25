/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMConnectionMonitorDelegate;
@class NSString;

@interface IMConnectionMonitor : NSObject {

	NSString* _remoteHost;
	id<IMConnectionMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isImmediatelyReachable; 
@property (nonatomic,readonly) BOOL requiresDataConnectionActivation; 
@property (assign,setter=setDataConnectionActive:,nonatomic) BOOL isDataConnectionActive; 
@property (assign,nonatomic) id<IMConnectionMonitorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * remoteHost;                                           //@synthesize remoteHost=_remoteHost - In the implementation block
+(id)alloc;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(NSString *)remoteHost;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(BOOL)isImmediatelyReachable;
-(void)goDisconnected;
-(BOOL)isDataConnectionActive;
-(BOOL)requiresDataConnectionActivation;
-(void)_setup;
-(void)dealloc;
-(void)setDelegate:(id<IMConnectionMonitorDelegate>)arg1 ;
-(id<IMConnectionMonitorDelegate>)delegate;
-(void)clear;
@end

