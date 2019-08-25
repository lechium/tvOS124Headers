/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MCUserMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedClient;
-(void)_createAndStartMDMXPCConnection;
-(BOOL)supportsPerUserMDM;
-(void)getAssertionDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)processUserRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(id)processUserRequest:(id)arg1 outError:(id*)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(id)pushToken;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

