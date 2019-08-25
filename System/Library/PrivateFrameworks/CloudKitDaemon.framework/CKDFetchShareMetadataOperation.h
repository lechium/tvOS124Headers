/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSMutableArray, NSMutableDictionary, NSSet;

@interface CKDFetchShareMetadataOperation : CKDOperation {

	BOOL _forceDSRefetch;
	BOOL _errorOnOON;
	BOOL _shouldFetchRootRecord;
	BOOL _clientWillDisplaySystemAcceptPrompt;
	/*^block*/id _shareMetadataFetchedBlock;
	NSMutableArray* _shareURLsToFetch;
	NSMutableDictionary* _shareTokenMetadatasToFetchByURL;
	NSSet* _rootRecordDesiredKeysSet;

}

@property (nonatomic,retain) NSMutableArray * shareURLsToFetch;                                  //@synthesize shareURLsToFetch=_shareURLsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareTokenMetadatasToFetchByURL;              //@synthesize shareTokenMetadatasToFetchByURL=_shareTokenMetadatasToFetchByURL - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                                         //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,retain) NSSet * rootRecordDesiredKeysSet;                                   //@synthesize rootRecordDesiredKeysSet=_rootRecordDesiredKeysSet - In the implementation block
@property (assign,nonatomic) BOOL clientWillDisplaySystemAcceptPrompt;                           //@synthesize clientWillDisplaySystemAcceptPrompt=_clientWillDisplaySystemAcceptPrompt - In the implementation block
@property (assign,nonatomic) BOOL forceDSRefetch;                                                //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
@property (assign,nonatomic) BOOL errorOnOON;                                                    //@synthesize errorOnOON=_errorOnOON - In the implementation block
@property (nonatomic,copy) id shareMetadataFetchedBlock;                                         //@synthesize shareMetadataFetchedBlock=_shareMetadataFetchedBlock - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setErrorOnOON:(BOOL)arg1 ;
-(void)setShareMetadataFetchedBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(NSMutableArray *)shareURLsToFetch;
-(BOOL)shouldFetchRootRecord;
-(void)_prepareShortTokens;
-(void)_fetchShortTokenMetadata;
-(BOOL)errorOnOON;
-(NSMutableDictionary *)shareTokenMetadatasToFetchByURL;
-(id)shareMetadataFetchedBlock;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(BOOL)forceDSRefetch;
-(void)setForceDSRefetch:(BOOL)arg1 ;
-(NSSet *)rootRecordDesiredKeysSet;
-(void)_handleTokenResolveWithLookupInfo:(id)arg1 shareMetadata:(id)arg2 responseCode:(id)arg3 urlByShortTokenLookupInfos:(id)arg4 tokensToFetchByURL:(id)arg5 ;
-(void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3 ;
-(id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2 ;
-(void)_decryptRootRecordsForShareURL:(id)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setShareURLsToFetch:(NSMutableArray *)arg1 ;
-(void)setShareTokenMetadatasToFetchByURL:(NSMutableDictionary *)arg1 ;
-(void)setRootRecordDesiredKeysSet:(NSSet *)arg1 ;
-(BOOL)clientWillDisplaySystemAcceptPrompt;
-(void)setClientWillDisplaySystemAcceptPrompt:(BOOL)arg1 ;
-(void)main;
@end

