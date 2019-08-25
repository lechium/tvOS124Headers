/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableDictionary, NSMutableArray;

@interface CKDAcceptSharesOperation : CKDDatabaseOperation {

	/*^block*/id _acceptCompletionBlock;
	NSMutableDictionary* _clientProvidedMetadatasByURL;
	NSMutableArray* _shareURLsToAccept;
	NSMutableArray* _acceptedShareURLsToFetch;
	NSMutableDictionary* _shareMetadatasToAcceptByURL;
	unsigned long long _numShareAcceptAttempts;

}

@property (nonatomic,retain) NSMutableDictionary * clientProvidedMetadatasByURL;              //@synthesize clientProvidedMetadatasByURL=_clientProvidedMetadatasByURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareURLsToAccept;                              //@synthesize shareURLsToAccept=_shareURLsToAccept - In the implementation block
@property (nonatomic,retain) NSMutableArray * acceptedShareURLsToFetch;                       //@synthesize acceptedShareURLsToFetch=_acceptedShareURLsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareMetadatasToAcceptByURL;               //@synthesize shareMetadatasToAcceptByURL=_shareMetadatasToAcceptByURL - In the implementation block
@property (assign,nonatomic) unsigned long long numShareAcceptAttempts;                       //@synthesize numShareAcceptAttempts=_numShareAcceptAttempts - In the implementation block
@property (nonatomic,copy) id acceptCompletionBlock;                                          //@synthesize acceptCompletionBlock=_acceptCompletionBlock - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setAcceptCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3 ;
-(void)_fetchMetadataForShares;
-(void)_prepareShareMetadata;
-(void)_fetchAcceptedShares;
-(void)_decryptShareMetadata;
-(BOOL)_acceptShares;
-(NSMutableArray *)shareURLsToAccept;
-(NSMutableArray *)acceptedShareURLsToFetch;
-(id)acceptCompletionBlock;
-(void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)shareMetadatasToAcceptByURL;
-(BOOL)_fillInPublicKeyIntoAcceptMetadata:(id)arg1 serviceType:(unsigned long long)arg2 keyVersion:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_callingParticipantOONForShareMetadata:(id)arg1 ;
-(unsigned long long)numShareAcceptAttempts;
-(void)setNumShareAcceptAttempts:(unsigned long long)arg1 ;
-(void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3 ;
-(NSMutableDictionary *)clientProvidedMetadatasByURL;
-(id)_keySwapForOONParticipant:(id)arg1 ;
-(BOOL)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1 ;
-(void)setShareURLsToAccept:(NSMutableArray *)arg1 ;
-(void)setClientProvidedMetadatasByURL:(NSMutableDictionary *)arg1 ;
-(void)setAcceptedShareURLsToFetch:(NSMutableArray *)arg1 ;
-(void)setShareMetadatasToAcceptByURL:(NSMutableDictionary *)arg1 ;
-(void)main;
@end

