/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>
#import <libobjc.A.dylib/MRAVDistantRoutingDiscoveryClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString, NSXPCConnection, NSMutableDictionary;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	NSArray* _distantEndpoints;
	NSArray* _distantOutputDevices;
	NSString* _routingContextUID;
	int _serviceResetNotifyToken;
	BOOL _hostedRoutingConnectionDidInitialize;
	NSXPCConnection* _hostedRoutingSessionConnection;
	NSMutableDictionary* _distantExternalDevices;

}

@property (nonatomic,retain) NSXPCConnection * hostedRoutingSessionConnection;              //@synthesize hostedRoutingSessionConnection=_hostedRoutingSessionConnection - In the implementation block
@property (nonatomic,retain) NSArray * distantEndpoints; 
@property (nonatomic,retain) NSArray * distantOutputDevices; 
@property (nonatomic,retain) NSMutableDictionary * distantExternalDevices;                  //@synthesize distantExternalDevices=_distantExternalDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceInterface;
+(id)clientInterface;
-(id)availableOutputDevices;
-(void)availableEndpointsDidChange:(id)arg1 ;
-(void)availableOutputDevicesDidChange:(id)arg1 ;
-(void)_initializeHostedRoutingConnectionWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadHostedRoutingServiceDiscoveryMode;
-(id)_hostedRoutingConnection;
-(NSArray *)distantEndpoints;
-(NSArray *)distantOutputDevices;
-(void)_reloadAvailableDistantEndpoints;
-(void)_reloadAvailableDistantOutputDevices;
-(void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1 ;
-(void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1 ;
-(void)setHostedRoutingSessionConnection:(NSXPCConnection *)arg1 ;
-(id)initWithEndpointFeatures:(unsigned)arg1 ;
-(unsigned)endpointFeatures;
-(id)availableEndpoints;
-(void)setDistantEndpoints:(NSArray *)arg1 ;
-(void)setDistantOutputDevices:(NSArray *)arg1 ;
-(NSXPCConnection *)hostedRoutingSessionConnection;
-(NSMutableDictionary *)distantExternalDevices;
-(void)setDistantExternalDevices:(NSMutableDictionary *)arg1 ;
-(BOOL)devicePresenceDetected;
-(id)routingContextUID;
-(unsigned)discoveryMode;
-(void)setRoutingContextUID:(id)arg1 ;
-(void)dealloc;
-(void)setDiscoveryMode:(unsigned)arg1 ;
@end

