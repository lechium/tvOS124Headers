/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MCTeslaServicer : NSObject {

	BOOL _isBusy;
	/*^block*/id _callback;
	NSXPCConnection* _connection;

}

@property (nonatomic,copy) id callback;                                 //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL isBusy;                               //@synthesize isBusy=_isBusy - In the implementation block
-(void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)unenrollWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestDidFailWithError:(id)arg1 ;
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(id)connectionError;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isBusy;
-(void)setIsBusy:(BOOL)arg1 ;
@end

