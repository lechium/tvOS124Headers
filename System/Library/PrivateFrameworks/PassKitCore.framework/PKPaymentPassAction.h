/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSDate, NSArray, PKEnteredValueActionItem;

@interface PKPaymentPassAction : NSObject <NSSecureCoding> {

	NSDictionary* _rawDictionary;
	NSDictionary* _localizations;
	BOOL _hasRemoteContent;
	BOOL _featured;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _title;
	NSString* _actionDescription;
	NSString* _confirmationTitle;
	NSString* _relevantPropertyIdentifier;
	NSDate* _availableFrom;
	NSDate* _availableUntil;
	NSString* _unavailableBeforeReason;
	NSString* _unavailableAfterReason;
	NSString* _serviceProviderIdentifier;
	NSString* _serviceProviderCountryCode;
	NSArray* _serviceProviderSupportedNetworks;
	unsigned long long _serviceProviderCapabilities;
	PKEnteredValueActionItem* _enteredValueItem;
	NSString* _headerText;
	NSString* _footerText;
	NSArray* _selectedActionItems;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteContent;                                        //@synthesize hasRemoteContent=_hasRemoteContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionDescription;                            //@synthesize actionDescription=_actionDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationTitle;                            //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,readonly) BOOL featured;                                                //@synthesize featured=_featured - In the implementation block
@property (nonatomic,copy,readonly) NSString * relevantPropertyIdentifier;                   //@synthesize relevantPropertyIdentifier=_relevantPropertyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * availableFrom;                                  //@synthesize availableFrom=_availableFrom - In the implementation block
@property (nonatomic,copy,readonly) NSDate * availableUntil;                                 //@synthesize availableUntil=_availableUntil - In the implementation block
@property (nonatomic,copy,readonly) NSString * unavailableBeforeReason;                      //@synthesize unavailableBeforeReason=_unavailableBeforeReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * unavailableAfterReason;                       //@synthesize unavailableAfterReason=_unavailableAfterReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderCountryCode;                   //@synthesize serviceProviderCountryCode=_serviceProviderCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderSupportedNetworks;              //@synthesize serviceProviderSupportedNetworks=_serviceProviderSupportedNetworks - In the implementation block
@property (nonatomic,readonly) unsigned long long serviceProviderCapabilities;               //@synthesize serviceProviderCapabilities=_serviceProviderCapabilities - In the implementation block
@property (nonatomic,readonly) PKEnteredValueActionItem * enteredValueItem;                  //@synthesize enteredValueItem=_enteredValueItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerText;                                   //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * footerText;                                   //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedActionItems;                           //@synthesize selectedActionItems=_selectedActionItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)serviceProviderIdentifier;
-(NSString *)serviceProviderCountryCode;
-(NSArray *)serviceProviderSupportedNetworks;
-(unsigned long long)serviceProviderCapabilities;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSDate *)availableFrom;
-(NSDate *)availableUntil;
-(NSString *)unavailableBeforeReason;
-(NSString *)unavailableAfterReason;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(id)_localizableKeys;
-(id)actionUpdatedWithDictionary:(id)arg1 ;
-(BOOL)hasRemoteContent;
-(NSString *)actionDescription;
-(NSString *)confirmationTitle;
-(BOOL)featured;
-(NSString *)relevantPropertyIdentifier;
-(PKEnteredValueActionItem *)enteredValueItem;
-(NSString *)footerText;
-(NSArray *)selectedActionItems;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)headerText;
@end

