/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreURLRequest, NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _activeURLRequest;
	BOOL _delegatedPlayback;
	NSString* _assetSourceStorefrontID;
	long long _requestType;
	/*^block*/id _willBeginExecutionHandler;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;
	unsigned long long _storeCloudID;
	long long _storeSubscriptionAdamID;
	long long _storePurchasedAdamID;
	NSString* _cloudUniversalLibraryID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                               //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (assign,getter=isDelegatedPlayback,nonatomic) BOOL delegatedPlayback;              //@synthesize delegatedPlayback=_delegatedPlayback - In the implementation block
@property (assign,nonatomic) long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) id willBeginExecutionHandler;                                     //@synthesize willBeginExecutionHandler=_willBeginExecutionHandler - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                           //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                               //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                                //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                              //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                                 //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                               //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
-(long long)requestType;
-(void)setRequestType:(long long)arg1 ;
-(void)setDelegatedPlayback:(BOOL)arg1 ;
-(BOOL)isDelegatedPlayback;
-(id)willBeginExecutionHandler;
-(void)setWillBeginExecutionHandler:(id)arg1 ;
-(long long)storeSubscriptionAdamID;
-(NSString *)cloudUniversalLibraryID;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(unsigned long long)storeCloudID;
-(long long)storePurchasedAdamID;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(NSString *)assetSourceStorefrontID;
-(ICStoreRequestContext *)requestContext;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)start;
@end

