/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate, NSDictionary;

@interface PKSelectedItemActionItem : NSObject <NSSecureCoding> {

	BOOL _serviceProviderDataRequiresLocalBalance;
	NSString* _identifier;
	NSString* _title;
	NSDecimalNumber* _amount;
	NSString* _currency;
	NSDate* _newExpirationDate;
	NSDictionary* _serviceProviderData;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;                             //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                  //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDate * newExpirationDate;                           //@synthesize newExpirationDate=_newExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderData;                   //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,readonly) BOOL serviceProviderDataRequiresLocalBalance;              //@synthesize serviceProviderDataRequiresLocalBalance=_serviceProviderDataRequiresLocalBalance - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currency;
-(NSDictionary *)serviceProviderData;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(id)serviceProviderDataWithCurrentLocalBalance:(id)arg1 ;
-(NSDate *)newExpirationDate;
-(BOOL)serviceProviderDataRequiresLocalBalance;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 ;
-(NSDecimalNumber *)amount;
@end
