/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {

	void* _discoverySession;
	void* _callbackToken;
	NSString* _routingContextUID;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpoints;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpoints;                       //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                            //@synthesize routingContextUID=_routingContextUID - In the implementation block
-(BOOL)devicePresenceDetected;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)routingContextUID;
-(long long)discoveryMode;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endpointsDidChange:(id)arg1 ;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(NSMutableDictionary *)endpoints;
-(void)setEndpoints:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDiscoveryMode:(long long)arg1 ;
@end

