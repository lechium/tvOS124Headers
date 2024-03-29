/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion, NSXPCConnection;

@interface _TVServiceProviderConnection : NSObject {

	BKSProcessAssertion* _procAssertion;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) BKSProcessAssertion * procAssertion;              //@synthesize procAssertion=_procAssertion - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
-(void)setProcAssertion:(BKSProcessAssertion *)arg1 ;
-(BKSProcessAssertion *)procAssertion;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

