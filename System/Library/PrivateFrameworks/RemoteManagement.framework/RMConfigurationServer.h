/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener, RMConfigurationServerDelegate;

@interface RMConfigurationServer : NSObject {

	NSXPCListener* _listener;
	RMConfigurationServerDelegate* _delegate;

}

@property (nonatomic,retain) NSXPCListener * listener;                              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) RMConfigurationServerDelegate * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(RMConfigurationServerDelegate *)arg1 ;
-(RMConfigurationServerDelegate *)delegate;
-(id)initWithTarget:(id)arg1 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
@end

