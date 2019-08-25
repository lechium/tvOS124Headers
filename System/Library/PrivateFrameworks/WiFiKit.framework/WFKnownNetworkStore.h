/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, WFClient;

@interface WFKnownNetworkStore : NSObject {

	BOOL _hasHS20Networks;
	NSObject*<OS_dispatch_queue> _knownNetworksQueue;
	NSSet* _knownNetworks;
	NSSet* _managedNetworkNames;
	WFClient* _wifiClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> knownNetworksQueue;              //@synthesize knownNetworksQueue=_knownNetworksQueue - In the implementation block
@property (nonatomic,retain) NSSet * knownNetworks;                                        //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (nonatomic,retain) NSSet * managedNetworkNames;                                  //@synthesize managedNetworkNames=_managedNetworkNames - In the implementation block
@property (assign,nonatomic,__weak) WFClient * wifiClient;                                 //@synthesize wifiClient=_wifiClient - In the implementation block
@property (nonatomic,readonly) BOOL hasHS20Networks;                                       //@synthesize hasHS20Networks=_hasHS20Networks - In the implementation block
+(id)sharedInstance;
-(NSSet *)knownNetworks;
-(id)initWithClient:(id)arg1 ;
-(void)_forceUpdateKnownNetworksAndWait:(BOOL)arg1 ;
-(void)_clientServerRestarted:(id)arg1 ;
-(void)_preferredNetworksDidChange:(id)arg1 ;
-(id)_networkProfileFromNetworkAttributes:(id)arg1 ;
-(void)_forceUpdateKnownNetworks;
-(WFClient *)wifiClient;
-(NSSet *)managedNetworkNames;
-(void)setManagedNetworkNames:(NSSet *)arg1 ;
-(id)networkProfileWithSSID:(id)arg1 securityMode:(long long)arg2 ;
-(void)updateKnownNetworks;
-(id)networkProfileForNetwork:(id)arg1 ;
-(id)networkProfileWithSSID:(id)arg1 ;
-(BOOL)saveNetworkProfile:(id)arg1 forReason:(unsigned long long)arg2 error:(out id*)arg3 ;
-(BOOL)removeNetworkProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAutoJoinEnabled:(BOOL)arg1 forProfile:(id)arg2 error:(out id*)arg3 ;
-(BOOL)networkMatchesManagedProfile:(id)arg1 ;
-(id)getGeoTagsForNetworkProfile:(id)arg1 ;
-(id)getScoreForNetworkProfile:(id)arg1 ;
-(BOOL)hasHS20Networks;
-(NSObject*<OS_dispatch_queue>)knownNetworksQueue;
-(void)setKnownNetworksQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setKnownNetworks:(NSSet *)arg1 ;
-(void)setWifiClient:(WFClient *)arg1 ;
-(id)init;
@end

