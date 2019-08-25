/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIStoreFPSKeyLoaderDelegate;
@class NSURL, NSNumber, NSObject, TVPPlaybackReportingEventCollection, NSData, NSMutableArray, TVPContentKeyRequest, NSDate, TVPContentKeySession;

@interface VUIStoreFPSKeyLoader : NSObject {

	BOOL _didSkipRentalCheckout;
	BOOL _hasLoadedAnyStreamingKeyRequests;
	NSURL* _secureInvalidationNonceURL;
	NSNumber* _secureInvalidationDSID;
	NSObject*<VUIStoreFPSKeyLoaderDelegate> _delegate;
	TVPPlaybackReportingEventCollection* _eventCollection;
	NSNumber* _rentalID;
	NSURL* _certificateURL;
	NSURL* _keyServerURL;
	long long _state;
	NSData* _certificateData;
	NSMutableArray* _requestsAwaitingCertFetch;
	TVPContentKeyRequest* _savedRequestToUseForStopping;
	NSDate* _keyExpirationDate;
	NSDate* _rentalPlaybackStartDate;
	TVPContentKeySession* _contentKeySession;

}

@property (nonatomic,copy) NSURL * certificateURL;                                                 //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                                   //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,nonatomic) long long state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSData * certificateData;                                             //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestsAwaitingCertFetch;                           //@synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch - In the implementation block
@property (nonatomic,retain) TVPContentKeyRequest * savedRequestToUseForStopping;                  //@synthesize savedRequestToUseForStopping=_savedRequestToUseForStopping - In the implementation block
@property (nonatomic,retain) NSDate * keyExpirationDate;                                           //@synthesize keyExpirationDate=_keyExpirationDate - In the implementation block
@property (nonatomic,retain) NSDate * rentalPlaybackStartDate;                                     //@synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedAnyStreamingKeyRequests;                                //@synthesize hasLoadedAnyStreamingKeyRequests=_hasLoadedAnyStreamingKeyRequests - In the implementation block
@property (nonatomic,retain) TVPContentKeySession * contentKeySession;                             //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (nonatomic,retain) NSURL * secureInvalidationNonceURL;                                   //@synthesize secureInvalidationNonceURL=_secureInvalidationNonceURL - In the implementation block
@property (nonatomic,retain) NSNumber * secureInvalidationDSID;                                    //@synthesize secureInvalidationDSID=_secureInvalidationDSID - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<VUIStoreFPSKeyLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;                //@synthesize eventCollection=_eventCollection - In the implementation block
@property (nonatomic,retain) NSNumber * rentalID;                                                  //@synthesize rentalID=_rentalID - In the implementation block
@property (assign,nonatomic) BOOL didSkipRentalCheckout;                                           //@synthesize didSkipRentalCheckout=_didSkipRentalCheckout - In the implementation block
+(void)initialize;
+(void)_loadAndCacheCertificateDataForValidURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_loadFPSURLsFromStoreBagWithCompletion:(/*^block*/id)arg1 ;
+(void)preFetchFPSCertificate;
-(NSURL *)keyServerURL;
-(NSNumber *)rentalID;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(void)setDelegate:(NSObject*<VUIStoreFPSKeyLoaderDelegate>)arg1 ;
-(long long)state;
-(NSObject*<VUIStoreFPSKeyLoaderDelegate>)delegate;
-(void)setState:(long long)arg1 ;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(NSURL *)certificateURL;
-(NSMutableArray *)requestsAwaitingCertFetch;
-(void)setCertificateData:(NSData *)arg1 ;
-(void)_startKeyRequestsInBatches:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_failKeyRequests:(id)arg1 withError:(id)arg2 ;
-(void)_loadCertificateDataWithCompletion:(/*^block*/id)arg1 ;
-(TVPContentKeyRequest *)savedRequestToUseForStopping;
-(void)_sendKeyRequestsToServer:(id)arg1 isStopRequest:(BOOL)arg2 isSecureInvalidationRequest:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_startKeyRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSData *)certificateData;
-(void)setSavedRequestToUseForStopping:(TVPContentKeyRequest *)arg1 ;
-(void)setHasLoadedAnyStreamingKeyRequests:(BOOL)arg1 ;
-(id)_bodyJSONDataForRequests:(id)arg1 isStopRequest:(BOOL)arg2 ;
-(NSNumber *)secureInvalidationDSID;
-(void)_handleResponseForKeyRequests:(id)arg1 responseData:(id)arg2 URLResponse:(id)arg3 error:(id)arg4 ;
-(void)_handleResponseDicts:(id)arg1 forKeyRequests:(id)arg2 ;
-(void)_handleResponseDict:(id)arg1 forKeyRequest:(id)arg2 ;
-(NSDate *)keyExpirationDate;
-(void)setKeyExpirationDate:(NSDate *)arg1 ;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(id)_errorForStoreResponseStatus:(long long)arg1 deviceLimit:(id)arg2 ;
-(id)_jsonDictionaryForRequest:(id)arg1 isStopRequest:(BOOL)arg2 ;
-(BOOL)didSkipRentalCheckout;
-(id)initWithCertificateURL:(id)arg1 keyServerURL:(id)arg2 ;
-(void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendStopRequest;
-(NSURL *)secureInvalidationNonceURL;
-(void)setSecureInvalidationNonceURL:(NSURL *)arg1 ;
-(void)setSecureInvalidationDSID:(NSNumber *)arg1 ;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
-(void)setRentalID:(NSNumber *)arg1 ;
-(void)setDidSkipRentalCheckout:(BOOL)arg1 ;
-(BOOL)hasLoadedAnyStreamingKeyRequests;
-(void)setRequestsAwaitingCertFetch:(NSMutableArray *)arg1 ;
-(TVPContentKeySession *)contentKeySession;
-(void)setContentKeySession:(TVPContentKeySession *)arg1 ;
@end
