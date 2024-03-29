/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CommerceRemoteUIDelegateDelegate.h>

@protocol PSCloudStorageOffersManagerDelegate;
@class CommerceRemoteUIDelegate, NSString;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate> {

	CommerceRemoteUIDelegate* _commerceDelegate;
	BOOL _shouldOfferFamilySharePlansOnly;
	BOOL _shouldOfferDeviceOffers;
	BOOL _skipRetryWithoutToken;
	BOOL _skipCompletionAlert;
	BOOL _supportsModernAlerts;
	id<PSCloudStorageOffersManagerDelegate> _delegate;
	unsigned long long _requiredStorageThreshold;

}

@property (assign,nonatomic,__weak) id<PSCloudStorageOffersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long requiredStorageThreshold;                          //@synthesize requiredStorageThreshold=_requiredStorageThreshold - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferFamilySharePlansOnly;                                 //@synthesize shouldOfferFamilySharePlansOnly=_shouldOfferFamilySharePlansOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferDeviceOffers;                                         //@synthesize shouldOfferDeviceOffers=_shouldOfferDeviceOffers - In the implementation block
@property (assign,nonatomic) BOOL skipRetryWithoutToken;                                           //@synthesize skipRetryWithoutToken=_skipRetryWithoutToken - In the implementation block
@property (assign,nonatomic) BOOL skipCompletionAlert;                                             //@synthesize skipCompletionAlert=_skipCompletionAlert - In the implementation block
@property (assign,nonatomic) BOOL supportsModernAlerts;                                            //@synthesize supportsModernAlerts=_supportsModernAlerts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldOfferFamilySharePlansOnly;
-(void)setShouldOfferFamilySharePlansOnly:(BOOL)arg1 ;
-(BOOL)shouldOfferDeviceOffers;
-(void)setShouldOfferDeviceOffers:(BOOL)arg1 ;
-(BOOL)skipRetryWithoutToken;
-(void)setSkipRetryWithoutToken:(BOOL)arg1 ;
-(BOOL)skipCompletionAlert;
-(void)setSkipCompletionAlert:(BOOL)arg1 ;
-(BOOL)supportsModernAlerts;
-(void)setSupportsModernAlerts:(BOOL)arg1 ;
-(void)_setupFlowWithNavigationController:(id)arg1 modally:(BOOL)arg2 ;
-(unsigned long long)requiredStorageThreshold;
-(void)commerceDelegateDidCancel:(id)arg1 ;
-(void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3 ;
-(void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)commerceDelegate:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(BOOL)arg5 ;
-(void)setRequiredStorageThreshold:(unsigned long long)arg1 ;
-(void)beginFlowWithNavigationController:(id)arg1 modally:(BOOL)arg2 ;
-(void)cancelLoad;
-(void)dealloc;
-(void)setDelegate:(id<PSCloudStorageOffersManagerDelegate>)arg1 ;
-(id<PSCloudStorageOffersManagerDelegate>)delegate;
@end

