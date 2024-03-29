/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface AMSLookupItemOffer : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,readonly) NSString * offerType; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * subscriptionType; 
-(NSNumber *)price;
-(NSDictionary *)lookupDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSString *)offerType;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(id)actionTextForType:(id)arg1 ;
-(NSString *)subscriptionType;
@end

