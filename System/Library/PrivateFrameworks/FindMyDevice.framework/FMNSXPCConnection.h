/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FMNSXPCConnecting.h>

@class NSXPCConnection, FMFuture, NSString;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting> {

	BOOL __testMockConnection;
	NSXPCConnection* _connection;
	FMFuture* _future;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) FMFuture * future;                         //@synthesize future=_future - In the implementation block
@property (assign,nonatomic) BOOL _testMockConnection;                  //@synthesize _testMockConnection=__testMockConnection - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFuture:(FMFuture *)arg1 ;
-(FMFuture *)future;
-(id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2 ;
-(void)destroyXPCConnection;
-(BOOL)_testMockConnection;
-(void)set_testMockConnection:(BOOL)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)invalidate;
-(id)initWithConfiguration:(id)arg1 ;
-(id)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

