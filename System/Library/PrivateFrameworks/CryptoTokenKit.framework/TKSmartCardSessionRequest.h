/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject {

	NSDictionary* _parameters;
	/*^block*/id _reply;
	NSXPCConnection* _connection;

}

@property (retain) NSDictionary * parameters;                 //@synthesize parameters=_parameters - In the implementation block
@property (copy) id reply;                                    //@synthesize reply=_reply - In the implementation block
@property (__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)reply;
-(void)setReply:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

