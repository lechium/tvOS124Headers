/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDecimalNumber, PKTransitPassProperties, PKFelicaPassProperties;

@interface PKPaymentApplication : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsContactlessPayment;
	BOOL _supportsInAppPayment;
	BOOL _supportsOptionalAuthentication;
	BOOL _requiresDeferredAuthorization;
	BOOL _inAppPINRequired;
	BOOL _auxiliary;
	BOOL _supportsInstantFundsIn;
	NSString* _dpanIdentifier;
	NSString* _dpanSuffix;
	NSString* _sanitizedDPAN;
	NSString* _applicationIdentifier;
	NSString* _secureElementIdentifier;
	long long _state;
	NSString* _suspendedReason;
	NSArray* _supportedExpressModes;
	NSArray* _automaticSelectionCriteria;
	NSString* _appletCurrencyCode;
	long long _paymentNetworkIdentifier;
	NSDecimalNumber* _inAppPINRequiredAmount;
	NSString* _inAppPINRequiredCurrency;
	unsigned long long _paymentType;
	NSString* _displayName;
	long long _contactlessPriority;
	long long _inAppPriority;
	NSString* _appletDataFormat;
	PKTransitPassProperties* _transitProperties;
	NSArray* _supportedTransitNetworkIdentifiers;

}

@property (setter=setDPANIdentifier:,nonatomic,copy) NSString * dpanIdentifier;                              //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (setter=setDPANSuffix:,nonatomic,copy) NSString * dpanSuffix;                                      //@synthesize dpanSuffix=_dpanSuffix - In the implementation block
@property (setter=setSanitizedDPAN:,nonatomic,copy) NSString * sanitizedDPAN;                                //@synthesize sanitizedDPAN=_sanitizedDPAN - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                                                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                                               //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (assign,nonatomic) long long state;                                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * stateAsString; 
@property (nonatomic,copy) NSString * suspendedReason;                                                       //@synthesize suspendedReason=_suspendedReason - In the implementation block
@property (assign,nonatomic) BOOL supportsContactlessPayment;                                                //@synthesize supportsContactlessPayment=_supportsContactlessPayment - In the implementation block
@property (assign,nonatomic) BOOL supportsInAppPayment;                                                      //@synthesize supportsInAppPayment=_supportsInAppPayment - In the implementation block
@property (assign,nonatomic) BOOL supportsOptionalAuthentication;                                            //@synthesize supportsOptionalAuthentication=_supportsOptionalAuthentication - In the implementation block
@property (nonatomic,copy) NSArray * supportedExpressModes;                                                  //@synthesize supportedExpressModes=_supportedExpressModes - In the implementation block
@property (nonatomic,copy) NSArray * automaticSelectionCriteria;                                             //@synthesize automaticSelectionCriteria=_automaticSelectionCriteria - In the implementation block
@property (nonatomic,copy) NSString * appletCurrencyCode;                                                    //@synthesize appletCurrencyCode=_appletCurrencyCode - In the implementation block
@property (assign,nonatomic) BOOL requiresDeferredAuthorization;                                             //@synthesize requiresDeferredAuthorization=_requiresDeferredAuthorization - In the implementation block
@property (assign,nonatomic) long long paymentNetworkIdentifier;                                             //@synthesize paymentNetworkIdentifier=_paymentNetworkIdentifier - In the implementation block
@property (assign,nonatomic) BOOL inAppPINRequired;                                                          //@synthesize inAppPINRequired=_inAppPINRequired - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * inAppPINRequiredAmount;                                         //@synthesize inAppPINRequiredAmount=_inAppPINRequiredAmount - In the implementation block
@property (nonatomic,copy) NSString * inAppPINRequiredCurrency;                                              //@synthesize inAppPINRequiredCurrency=_inAppPINRequiredCurrency - In the implementation block
@property (assign,nonatomic) unsigned long long paymentType;                                                 //@synthesize paymentType=_paymentType - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                           //@synthesize displayName=_displayName - In the implementation block
@property (assign,getter=isAuxiliary,nonatomic) BOOL auxiliary;                                              //@synthesize auxiliary=_auxiliary - In the implementation block
@property (assign,nonatomic) long long contactlessPriority;                                                  //@synthesize contactlessPriority=_contactlessPriority - In the implementation block
@property (assign,nonatomic) long long inAppPriority;                                                        //@synthesize inAppPriority=_inAppPriority - In the implementation block
@property (assign,nonatomic) BOOL supportsInstantFundsIn;                                                    //@synthesize supportsInstantFundsIn=_supportsInstantFundsIn - In the implementation block
@property (nonatomic,copy) NSString * appletDataFormat;                                                      //@synthesize appletDataFormat=_appletDataFormat - In the implementation block
@property (nonatomic,copy) PKTransitPassProperties * transitProperties;                                      //@synthesize transitProperties=_transitProperties - In the implementation block
@property (nonatomic,copy) PKFelicaPassProperties * felicaProperties; 
@property (nonatomic,readonly) BOOL supportsTransit; 
@property (nonatomic,readonly) BOOL supportsSuica; 
@property (getter=isParsedTransitApplication,nonatomic,readonly) BOOL parsedTransitApplication; 
@property (nonatomic,readonly) BOOL generatesLocalTransactions; 
@property (nonatomic,readonly) BOOL supportsTransitHistory; 
@property (nonatomic,readonly) NSString * stationCodeProvider; 
@property (nonatomic,readonly) BOOL supportsExpressTransit; 
@property (nonatomic,readonly) BOOL supportsExpressSuica; 
@property (nonatomic,copy) NSArray * supportedTransitNetworkIdentifiers;                                     //@synthesize supportedTransitNetworkIdentifiers=_supportedTransitNetworkIdentifiers - In the implementation block
+(id)applicationWithProtobuf:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)paymentType;
-(void)setPaymentType:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)supportsExpressMode:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(BOOL)supportsExpress;
-(long long)paymentNetworkIdentifier;
-(BOOL)requiresDeferredAuthorization;
-(NSString *)sanitizedDPAN;
-(NSString *)dpanSuffix;
-(NSArray *)supportedTransitNetworkIdentifiers;
-(BOOL)supportsTransitHistory;
-(BOOL)supportsInstantFundsIn;
-(BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 ;
-(BOOL)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 ;
-(BOOL)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4 ;
-(long long)inAppPriority;
-(BOOL)inAppPINRequired;
-(NSString *)inAppPINRequiredCurrency;
-(NSDecimalNumber *)inAppPINRequiredAmount;
-(BOOL)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 paymentApplicationStates:(id)arg4 ;
-(BOOL)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4 paymentApplicationStates:(id)arg5 ;
-(BOOL)supportsInAppPayment;
-(NSString *)dpanIdentifier;
-(PKTransitPassProperties *)transitProperties;
-(PKFelicaPassProperties *)felicaProperties;
-(BOOL)isAuxiliary;
-(BOOL)supportsTransit;
-(NSString *)appletDataFormat;
-(BOOL)supportsContactlessPayment;
-(BOOL)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 clientOSVersion:(id)arg3 ;
-(id)initWithPaymentApplicationDictionary:(id)arg1 auxiliaryApplication:(BOOL)arg2 ;
-(void)setDPANIdentifier:(id)arg1 ;
-(void)setDPANSuffix:(id)arg1 ;
-(void)setSanitizedDPAN:(NSString *)arg1 ;
-(NSString *)suspendedReason;
-(void)setSuspendedReason:(NSString *)arg1 ;
-(void)setSupportsContactlessPayment:(BOOL)arg1 ;
-(void)setSupportsInAppPayment:(BOOL)arg1 ;
-(void)setPaymentNetworkIdentifier:(long long)arg1 ;
-(void)setInAppPINRequired:(BOOL)arg1 ;
-(void)setInAppPINRequiredAmount:(NSDecimalNumber *)arg1 ;
-(void)setInAppPINRequiredCurrency:(NSString *)arg1 ;
-(void)setAuxiliary:(BOOL)arg1 ;
-(void)setAutomaticSelectionCriteria:(NSArray *)arg1 ;
-(void)setInAppPriority:(long long)arg1 ;
-(id)protobuf;
-(void)setSupportsInstantFundsIn:(BOOL)arg1 ;
-(void)_createAutomaticSelectionCriteriaIfNecessary;
-(BOOL)isEqualToPaymentApplication:(id)arg1 ;
-(BOOL)isParsedTransitApplication;
-(BOOL)supportsSuica;
-(BOOL)supportsExpressForAutomaticPresentationTechnologyType:(long long)arg1 ;
-(BOOL)supportsExpressTransit;
-(void)setFelicaProperties:(PKFelicaPassProperties *)arg1 ;
-(BOOL)supportsExpressSuica;
-(BOOL)generatesLocalTransactions;
-(NSString *)stationCodeProvider;
-(BOOL)supportsOptionalAuthentication;
-(void)setSupportsOptionalAuthentication:(BOOL)arg1 ;
-(NSArray *)supportedExpressModes;
-(void)setSupportedExpressModes:(NSArray *)arg1 ;
-(NSArray *)automaticSelectionCriteria;
-(NSString *)appletCurrencyCode;
-(void)setAppletCurrencyCode:(NSString *)arg1 ;
-(void)setRequiresDeferredAuthorization:(BOOL)arg1 ;
-(long long)contactlessPriority;
-(void)setContactlessPriority:(long long)arg1 ;
-(void)setAppletDataFormat:(NSString *)arg1 ;
-(void)setTransitProperties:(PKTransitPassProperties *)arg1 ;
-(void)setSupportedTransitNetworkIdentifiers:(NSArray *)arg1 ;
-(NSString *)stateAsString;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSString *)displayName;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
@end

