/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray, PKPaymentApplication, NSDate, PKCurrencyAmount;

@interface PKRemotePaymentInstrument : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsAutomaticSelection;
	BOOL _hasAssociatedPeerPaymentAccount;
	NSString* _passIdentifier;
	NSString* _organizationName;
	NSData* _manifestHash;
	NSString* _displayName;
	NSString* _primaryAccountNumberSuffix;
	NSString* _primaryAccountIdentifier;
	NSString* _issuerCountryCode;
	NSArray* _paymentApplications;
	PKPaymentApplication* _primaryPaymentApplication;
	NSDate* _ingestedDate;
	PKCurrencyAmount* _peerPaymentAccountBalance;
	unsigned long long _peerPaymentAccountState;
	NSArray* _associatedWebDomains;

}

@property (nonatomic,copy) NSString * passIdentifier;                                       //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                                     //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSData * manifestHash;                                           //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumberSuffix;                           //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;                             //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * issuerCountryCode;                                    //@synthesize issuerCountryCode=_issuerCountryCode - In the implementation block
@property (nonatomic,retain) NSArray * paymentApplications;                                 //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * primaryPaymentApplication;              //@synthesize primaryPaymentApplication=_primaryPaymentApplication - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;                                         //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (assign,nonatomic) BOOL supportsAutomaticSelection;                               //@synthesize supportsAutomaticSelection=_supportsAutomaticSelection - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentAccountBalance;                  //@synthesize peerPaymentAccountBalance=_peerPaymentAccountBalance - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPeerPaymentAccount;                          //@synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount - In the implementation block
@property (assign,nonatomic) unsigned long long peerPaymentAccountState;                    //@synthesize peerPaymentAccountState=_peerPaymentAccountState - In the implementation block
@property (nonatomic,retain) NSArray * associatedWebDomains;                                //@synthesize associatedWebDomains=_associatedWebDomains - In the implementation block
+(id)sortDescriptorForDefaultPaymentInstrument:(id)arg1 supportedNetworks:(id)arg2 merchantCapabilities:(unsigned long long)arg3 webService:(id)arg4 ;
+(id)remotePaymentInstrumentWithProtobuf:(id)arg1 ;
+(id)thumbnailCachePathForManifestHash:(id)arg1 size:(CGSize)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(NSData *)manifestHash;
-(NSString *)primaryAccountNumberSuffix;
-(id)initWithPaymentPass:(id)arg1 ;
-(NSDate *)ingestedDate;
-(NSArray *)associatedWebDomains;
-(unsigned long long)peerPaymentAccountState;
-(NSArray *)paymentApplications;
-(BOOL)supportsAutomaticSelection;
-(PKPaymentApplication *)primaryPaymentApplication;
-(PKCurrencyAmount *)peerPaymentAccountBalance;
-(void)setPaymentApplications:(NSArray *)arg1 ;
-(void)setAssociatedWebDomains:(NSArray *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setIssuerCountryCode:(NSString *)arg1 ;
-(void)setHasAssociatedPeerPaymentAccount:(BOOL)arg1 ;
-(id)sortedPaymentApplications:(id)arg1 ascending:(BOOL)arg2 ;
-(NSString *)issuerCountryCode;
-(void)setOrganizationName:(NSString *)arg1 ;
-(NSString *)organizationName;
-(id)protobuf;
-(void)setPassIdentifier:(NSString *)arg1 ;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSupportsAutomaticSelection:(BOOL)arg1 ;
-(void)setPeerPaymentAccountState:(unsigned long long)arg1 ;
-(void)setPeerPaymentAccountBalance:(PKCurrencyAmount *)arg1 ;
-(void)setPrimaryPaymentApplication:(PKPaymentApplication *)arg1 ;
-(NSString *)passIdentifier;
-(BOOL)isEqualToRemotePaymentInstrument:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

