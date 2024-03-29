/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATSocket.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_tcp_connection, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSString, NSObject;

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {

	BOOL _connected;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSString* _hostname;
	unsigned short _port;
	NSObject*<OS_tcp_connection> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSObject*<OS_dispatch_source> _source;
	char _readBuffer[65536];
	BOOL _enableTLS;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) BOOL enableTLS;                        //@synthesize enableTLS=_enableTLS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(BOOL)_connect;
-(void)setEnableTLS:(BOOL)arg1 ;
-(void)closeDescriptor;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(BOOL)enableTLS;
-(BOOL)open;
@end

