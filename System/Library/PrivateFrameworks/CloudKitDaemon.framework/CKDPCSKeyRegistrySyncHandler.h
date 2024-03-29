/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CKDPCSKeyRegistrySyncHandler : NSObject {

	NSMutableDictionary* _keyRegistrySyncMetadataByServiceName;
	NSMutableDictionary* _lastSuccessfulKeyRegistrySyncByServiceName;
	NSObject*<OS_dispatch_queue> _keyRegistrySyncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * keyRegistrySyncMetadataByServiceName;                    //@synthesize keyRegistrySyncMetadataByServiceName=_keyRegistrySyncMetadataByServiceName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastSuccessfulKeyRegistrySyncByServiceName;              //@synthesize lastSuccessfulKeyRegistrySyncByServiceName=_lastSuccessfulKeyRegistrySyncByServiceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> keyRegistrySyncQueue;                             //@synthesize keyRegistrySyncQueue=_keyRegistrySyncQueue - In the implementation block
+(id)sharedHandler;
-(NSObject*<OS_dispatch_queue>)keyRegistrySyncQueue;
-(NSMutableDictionary *)keyRegistrySyncMetadataByServiceName;
-(id)serviceKeyForServiceName:(id)arg1 ;
-(NSMutableDictionary *)lastSuccessfulKeyRegistrySyncByServiceName;
-(void)_registerAndPerformKeyRegistrySyncForService:(id)arg1 shouldThrottle:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)synchronizeUserKeyRegistryForService:(id)arg1 shouldThrottle:(BOOL)arg2 onBehalfOfContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setKeyRegistrySyncMetadataByServiceName:(NSMutableDictionary *)arg1 ;
-(void)setLastSuccessfulKeyRegistrySyncByServiceName:(NSMutableDictionary *)arg1 ;
-(void)setKeyRegistrySyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

