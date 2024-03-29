/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPStoreAssetInfoPlaybackCacheRequest : NSObject <NSCopying> {

	unsigned long long _accountID;
	unsigned long long _delegatedAccountID;
	long long _requestType;
	NSString* _redownloadParameters;
	NSString* _cloudUniversalLibraryID;
	long long _storeSubscriptionAdamID;
	unsigned long long _storeCloudID;
	long long _storePurchasedAdamID;
	long long _storeRadioAdamID;

}

@property (assign,nonatomic) unsigned long long accountID;                       //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) unsigned long long delegatedAccountID;              //@synthesize delegatedAccountID=_delegatedAccountID - In the implementation block
@property (assign,nonatomic) long long requestType;                              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * redownloadParameters;                      //@synthesize redownloadParameters=_redownloadParameters - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                   //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                  //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                    //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                     //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (assign,nonatomic) long long storeRadioAdamID;                         //@synthesize storeRadioAdamID=_storeRadioAdamID - In the implementation block
-(long long)requestType;
-(void)setRequestType:(long long)arg1 ;
-(long long)storeSubscriptionAdamID;
-(NSString *)cloudUniversalLibraryID;
-(unsigned long long)storeCloudID;
-(long long)storePurchasedAdamID;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setRedownloadParameters:(NSString *)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(NSString *)redownloadParameters;
-(unsigned long long)accountID;
-(void)setAccountID:(unsigned long long)arg1 ;
-(unsigned long long)delegatedAccountID;
-(void)setDelegatedAccountID:(unsigned long long)arg1 ;
-(long long)storeRadioAdamID;
-(void)setStoreRadioAdamID:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

