/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber, NSArray, NSDictionary, PKPaymentDigitalIssuanceMetadata;

@interface PKPaymentProvisioningMethodMetadata : NSObject {

	NSString* _productIdentifier;
	NSString* _currency;
	NSDecimalNumber* _depositAmount;
	NSDecimalNumber* _minLoadedBalance;
	NSDecimalNumber* _maxLoadedBalance;
	NSArray* _requiredFields;
	NSDictionary* _readerModeMetadata;
	PKPaymentDigitalIssuanceMetadata* _digitalIssuanceMetadata;
	NSDictionary* _readerModeResources;
	NSDecimalNumber* _minimumReaderModeBalance;

}

@property (nonatomic,copy,readonly) NSString * productIdentifier;                                       //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                                //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * depositAmount;                                    //@synthesize depositAmount=_depositAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minLoadedBalance;                                 //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxLoadedBalance;                                 //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredFields;                                           //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeMetadata;                                  //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,readonly) PKPaymentDigitalIssuanceMetadata * digitalIssuanceMetadata;              //@synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeResources;                                 //@synthesize readerModeResources=_readerModeResources - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minimumReaderModeBalance;                         //@synthesize minimumReaderModeBalance=_minimumReaderModeBalance - In the implementation block
-(NSString *)productIdentifier;
-(NSString *)currency;
-(NSDecimalNumber *)minLoadedBalance;
-(NSDecimalNumber *)maxLoadedBalance;
-(NSDecimalNumber *)depositAmount;
-(NSArray *)requiredFields;
-(NSDictionary *)readerModeMetadata;
-(PKPaymentDigitalIssuanceMetadata *)digitalIssuanceMetadata;
-(NSDictionary *)readerModeResources;
-(NSDecimalNumber *)minimumReaderModeBalance;
-(id)initWithDictionary:(id)arg1 ;
@end

