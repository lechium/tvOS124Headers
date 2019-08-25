/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SSVPlayActivityEnqueuerProperties;

@interface MPCReportingIdentityProperties : NSObject {

	BOOL _hasSubscriptionPlaybackCapability;
	NSString* _householdID;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	SSVPlayActivityEnqueuerProperties* _enqueuerProperties;

}

@property (nonatomic,copy) NSString * householdID;                                              //@synthesize householdID=_householdID - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                                 //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                                             //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionPlaybackCapability;                            //@synthesize hasSubscriptionPlaybackCapability=_hasSubscriptionPlaybackCapability - In the implementation block
@property (nonatomic,copy) SSVPlayActivityEnqueuerProperties * enqueuerProperties;              //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(NSString *)storeFrontID;
-(SSVPlayActivityEnqueuerProperties *)enqueuerProperties;
-(NSString *)householdID;
-(void)setEnqueuerProperties:(SSVPlayActivityEnqueuerProperties *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(unsigned long long)storeAccountID;
-(void)setHasSubscriptionPlaybackCapability:(BOOL)arg1 ;
-(BOOL)hasSubscriptionPlaybackCapability;
@end

