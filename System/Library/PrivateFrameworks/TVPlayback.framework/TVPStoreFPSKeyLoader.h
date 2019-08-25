/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPSecureKeyDeliveryCoordinatorDelegate.h>
#import <TVPlayback/TVPSecureKeyLoaderDelegate.h>

@protocol TVPStoreFPSKeyLoaderDelegate;
@class NSObject, NSError, TVPPlaybackReportingEventCollection, NSString, NSNumber, TVPSecureKeyDeliveryCoordinator, TVPSecureKeyStandardLoader, NSMutableArray, NSURL;

@interface TVPStoreFPSKeyLoader : NSObject <TVPSecureKeyDeliveryCoordinatorDelegate, TVPSecureKeyLoaderDelegate> {

	BOOL _holdKeyResponses;
	BOOL _didSkipRentalCheckout;
	BOOL _includeGUID;
	BOOL _requiresExternalEntitlementCheck;
	NSObject*<TVPStoreFPSKeyLoaderDelegate> _delegate;
	NSError* _error;
	TVPPlaybackReportingEventCollection* _eventCollection;
	NSString* _serviceProviderID;
	NSNumber* _rentalID;
	TVPSecureKeyDeliveryCoordinator* _secureKeyDeliveryCoordinator;
	TVPSecureKeyStandardLoader* _secureKeyStandardLoader;
	NSMutableArray* _pendingKeyRequests;
	TVPSecureKeyStandardLoader* _fpsCertLoader;
	NSURL* _certificateDataURL;
	NSURL* _keyDataURL;

}

@property (nonatomic,retain) TVPSecureKeyDeliveryCoordinator * secureKeyDeliveryCoordinator;              //@synthesize secureKeyDeliveryCoordinator=_secureKeyDeliveryCoordinator - In the implementation block
@property (nonatomic,retain) TVPSecureKeyStandardLoader * secureKeyStandardLoader;                        //@synthesize secureKeyStandardLoader=_secureKeyStandardLoader - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingKeyRequests;                                         //@synthesize pendingKeyRequests=_pendingKeyRequests - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVPSecureKeyStandardLoader * fpsCertLoader;                                  //@synthesize fpsCertLoader=_fpsCertLoader - In the implementation block
@property (nonatomic,copy) NSURL * certificateDataURL;                                                    //@synthesize certificateDataURL=_certificateDataURL - In the implementation block
@property (nonatomic,copy) NSURL * keyDataURL;                                                            //@synthesize keyDataURL=_keyDataURL - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TVPStoreFPSKeyLoaderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;                       //@synthesize eventCollection=_eventCollection - In the implementation block
@property (assign,nonatomic) BOOL holdKeyResponses;                                                       //@synthesize holdKeyResponses=_holdKeyResponses - In the implementation block
@property (assign,nonatomic) BOOL didSkipRentalCheckout;                                                  //@synthesize didSkipRentalCheckout=_didSkipRentalCheckout - In the implementation block
@property (assign,nonatomic) BOOL includeGUID;                                                            //@synthesize includeGUID=_includeGUID - In the implementation block
@property (assign,nonatomic) BOOL requiresExternalEntitlementCheck;                                       //@synthesize requiresExternalEntitlementCheck=_requiresExternalEntitlementCheck - In the implementation block
@property (nonatomic,retain) NSString * serviceProviderID;                                                //@synthesize serviceProviderID=_serviceProviderID - In the implementation block
@property (nonatomic,retain) NSNumber * rentalID;                                                         //@synthesize rentalID=_rentalID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)preFetchFPSCertificate;
-(NSNumber *)rentalID;
-(void)loadSecureKeyRequest:(id)arg1 ;
-(void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4 ;
-(id)initWithCertificateDataURL:(id)arg1 keyDataURL:(id)arg2 ;
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1 ;
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3 ;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 ;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2 ;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3 ;
-(void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2 ;
-(void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 ;
-(void)_preFetchFPSCertificate;
-(TVPSecureKeyDeliveryCoordinator *)secureKeyDeliveryCoordinator;
-(NSMutableArray *)pendingKeyRequests;
-(void)setPendingKeyRequests:(NSMutableArray *)arg1 ;
-(void)_failPendingKeyRequestsWithError:(id)arg1 ;
-(NSURL *)certificateDataURL;
-(NSURL *)keyDataURL;
-(BOOL)holdKeyResponses;
-(void)setHoldKeyResponses:(BOOL)arg1 ;
-(BOOL)includeGUID;
-(void)setIncludeGUID:(BOOL)arg1 ;
-(BOOL)requiresExternalEntitlementCheck;
-(void)setRequiresExternalEntitlementCheck:(BOOL)arg1 ;
-(NSString *)serviceProviderID;
-(void)setServiceProviderID:(NSString *)arg1 ;
-(void)setSecureKeyStandardLoader:(TVPSecureKeyStandardLoader *)arg1 ;
-(void)setSecureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 ;
-(TVPSecureKeyStandardLoader *)secureKeyStandardLoader;
-(void)setFpsCertLoader:(TVPSecureKeyStandardLoader *)arg1 ;
-(TVPSecureKeyStandardLoader *)fpsCertLoader;
-(void)setCertificateDataURL:(NSURL *)arg1 ;
-(void)setKeyDataURL:(NSURL *)arg1 ;
-(void)setDelegate:(NSObject*<TVPStoreFPSKeyLoaderDelegate>)arg1 ;
-(NSObject*<TVPStoreFPSKeyLoaderDelegate>)delegate;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(BOOL)didSkipRentalCheckout;
-(void)sendStopRequest;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
-(void)setRentalID:(NSNumber *)arg1 ;
-(void)setDidSkipRentalCheckout:(BOOL)arg1 ;
@end

