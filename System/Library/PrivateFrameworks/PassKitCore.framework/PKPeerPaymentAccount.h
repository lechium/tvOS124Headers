/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKCurrencyAmount, NSDecimalNumber, NSDate, NSURL, NSArray, NSDictionary;

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding> {

	BOOL _accountStateDirty;
	BOOL _identityVerificationForDisbursementsRequired;
	BOOL _identityVerificationRequired;
	BOOL _termsAcceptanceRequired;
	unsigned long long _state;
	unsigned long long _stage;
	NSString* _countryCode;
	PKCurrencyAmount* _currentBalance;
	NSDecimalNumber* _maximumBalance;
	NSDate* _lastUpdated;
	double _proactiveFetchPeriod;
	NSURL* _associatedPassURL;
	long long _pendingPaymentCount;
	NSArray* _supportedFeatureDescriptors;
	NSString* _termsIdentifier;
	NSURL* _termsURL;
	NSString* _associatedPassSerialNumber;
	NSString* _associatedPassTypeIdentifier;

}

@property (nonatomic,readonly) NSDictionary * minimumTransferAmounts; 
@property (nonatomic,readonly) NSDictionary * maximumTransferAmounts; 
@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long stage;                                       //@synthesize stage=_stage - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * currentBalance;                                //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumBalance;                                 //@synthesize maximumBalance=_maximumBalance - In the implementation block
@property (assign,nonatomic) BOOL identityVerificationRequired;                              //@synthesize identityVerificationRequired=_identityVerificationRequired - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                           //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) double proactiveFetchPeriod;                                    //@synthesize proactiveFetchPeriod=_proactiveFetchPeriod - In the implementation block
@property (assign,nonatomic) BOOL termsAcceptanceRequired;                                   //@synthesize termsAcceptanceRequired=_termsAcceptanceRequired - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                                       //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                                 //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSURL * associatedPassURL;                                        //@synthesize associatedPassURL=_associatedPassURL - In the implementation block
@property (nonatomic,copy) NSString * associatedPassSerialNumber;                            //@synthesize associatedPassSerialNumber=_associatedPassSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * associatedPassTypeIdentifier;                          //@synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * supportedFeatureDescriptors;                            //@synthesize supportedFeatureDescriptors=_supportedFeatureDescriptors - In the implementation block
@property (assign,nonatomic) long long pendingPaymentCount;                                  //@synthesize pendingPaymentCount=_pendingPaymentCount - In the implementation block
@property (assign,nonatomic) BOOL identityVerificationForDisbursementsRequired;              //@synthesize identityVerificationForDisbursementsRequired=_identityVerificationForDisbursementsRequired - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions; 
@property (assign,getter=isAccountStateDirty,nonatomic) BOOL accountStateDirty;              //@synthesize accountStateDirty=_accountStateDirty - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(NSArray *)defaultSuggestions;
-(PKCurrencyAmount *)currentBalance;
-(void)setCurrentBalance:(PKCurrencyAmount *)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(NSString *)associatedPassTypeIdentifier;
-(NSString *)associatedPassSerialNumber;
-(id)associatedPassUniqueID;
-(void)setAccountStateDirty:(BOOL)arg1 ;
-(id)_featureWithIdentifier:(id)arg1 ;
-(BOOL)termsAcceptanceRequired;
-(BOOL)supportsCardBalancePromotion;
-(id)loadFromCardFeatureDescriptor;
-(id)sendToUserFeatureDescriptor;
-(void)setTermsAcceptanceRequired:(BOOL)arg1 ;
-(NSURL *)termsURL;
-(void)setTermsURL:(NSURL *)arg1 ;
-(NSURL *)associatedPassURL;
-(void)setAssociatedPassURL:(NSURL *)arg1 ;
-(void)setAssociatedPassTypeIdentifier:(NSString *)arg1 ;
-(void)setAssociatedPassSerialNumber:(NSString *)arg1 ;
-(id)instantWithdrawalPromotionFeatureDescriptor;
-(id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2 ;
-(BOOL)isAccountOutOfDate;
-(BOOL)identityVerificationRequired;
-(NSDecimalNumber *)maximumBalance;
-(void)setMaximumBalance:(NSDecimalNumber *)arg1 ;
-(BOOL)isAccountStateDirty;
-(double)proactiveFetchPeriod;
-(void)setProactiveFetchPeriod:(double)arg1 ;
-(long long)pendingPaymentCount;
-(void)setPendingPaymentCount:(long long)arg1 ;
-(BOOL)identityVerificationForDisbursementsRequired;
-(void)setIdentityVerificationForDisbursementsRequired:(BOOL)arg1 ;
-(NSArray *)supportedFeatureDescriptors;
-(void)setSupportedFeatureDescriptors:(NSArray *)arg1 ;
-(void)setIdentityVerificationRequired:(BOOL)arg1 ;
-(id)transferToBankFeatureDescriptor;
-(id)requestFromUserFeatureDescriptor;
-(id)cardBalancePromotionFeatureDescriptor;
-(BOOL)supportsLoadFromCard;
-(BOOL)supportsTransferToBank;
-(BOOL)supportsSendToUser;
-(BOOL)supportsRequestFromUser;
-(BOOL)supportsInstantWithdrawal;
-(NSDictionary *)minimumTransferAmounts;
-(NSDictionary *)maximumTransferAmounts;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)stage;
-(void)setStage:(unsigned long long)arg1 ;
@end

