/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteMessageTransport.h>
#import <libobjc.A.dylib/HMDHTTPClientMessageTransportDelegate.h>
#import <libobjc.A.dylib/HMDHTTPServerMessageTransportDelegate.h>
#import <libobjc.A.dylib/HMFNetServiceBrowserDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSMutableDictionary, NSMutableArray, HMDHTTPDevice, HMDHTTPServerMessageTransport, NSObject, HMFNetServiceBrowser, NSArray, NSDictionary, NSString;

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPClientMessageTransportDelegate, HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate> {

	NSMutableSet* _residentDevices;
	NSMutableSet* _transientDevices;
	NSMutableDictionary* _txtRecord;
	NSMutableArray* _clientTransports;
	BOOL _serverEnabled;
	HMDHTTPDevice* _currentDevice;
	HMDHTTPServerMessageTransport* _serverTransport;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFNetServiceBrowser* _clientBrowser;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                     //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                   //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMDHTTPServerMessageTransport * serverTransport;              //@synthesize serverTransport=_serverTransport - In the implementation block
@property (nonatomic,readonly) HMFNetServiceBrowser * clientBrowser;                         //@synthesize clientBrowser=_clientBrowser - In the implementation block
@property (nonatomic,readonly) NSArray * clientTransports; 
@property (nonatomic,readonly) HMDHTTPDevice * currentDevice;                                //@synthesize currentDevice=_currentDevice - In the implementation block
@property (getter=isServerEnabled) BOOL serverEnabled;                                       //@synthesize serverEnabled=_serverEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * TXTRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)restriction;
+(BOOL)shouldHostMessageServer;
+(id)shortDescription;
-(long long)qualityOfService;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAccountRegistry:(id)arg1 ;
-(HMFNetServiceBrowser *)clientBrowser;
-(id)clientTransportForDevice:(id)arg1 ;
-(id)_serviceForDevice:(id)arg1 ;
-(HMDHTTPServerMessageTransport *)serverTransport;
-(BOOL)isDeviceConnected:(id)arg1 ;
-(void)_sendMessage:(id)arg1 destination:(id)arg2 timeout:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_connectToDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)deviceForHTTPDevice:(id)arg1 ;
-(void)handleServerEnabled:(BOOL)arg1 ;
-(void)_startServerWithDevice:(id)arg1 ;
-(void)_stopServer;
-(void)setTXTRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeTXTRecordValueForKey:(id)arg1 ;
-(void)setCurrentDevice:(HMDHTTPDevice *)arg1 ;
-(NSArray *)clientTransports;
-(void)removeAllClientTransports;
-(BOOL)isServerEnabled;
-(void)setServerTransport:(HMDHTTPServerMessageTransport *)arg1 ;
-(NSDictionary *)TXTRecord;
-(void)addClientTransport:(id)arg1 ;
-(void)_handleReceivedRequestMessage:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)clientTransportForService:(id)arg1 ;
-(void)removeClientTransport:(id)arg1 ;
-(void)client:(id)arg1 didStopWithError:(id)arg2 ;
-(void)client:(id)arg1 didReceiveMessage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)server:(id)arg1 didStopWithError:(id)arg2 ;
-(void)server:(id)arg1 didAddDevice:(id)arg2 ;
-(void)server:(id)arg1 didRemoveDevice:(id)arg2 ;
-(void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)netServiceBrowser:(id)arg1 didAddService:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(void)setServerEnabled:(BOOL)arg1 ;
-(void)configureWithDevice:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(HMDHTTPDevice *)currentDevice;
-(id)shortDescription;
@end

