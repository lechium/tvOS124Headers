/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSSet;

@interface AMSDeviceOffer : NSObject {

	BOOL _downgrading;
	BOOL _subscribed;
	NSNumber* _adamId;
	NSString* _description;
	NSSet* _serialNumbers;
	NSString* _offerIdentifier;
	unsigned long long _productType;

}

@property (nonatomic,copy) NSNumber * adamId;                                    //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,copy) NSString * description;                               //@synthesize description=_description - In the implementation block
@property (assign,getter=isDowngrading,nonatomic) BOOL downgrading;              //@synthesize downgrading=_downgrading - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                           //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long offerType; 
@property (nonatomic,readonly) NSSet * serialNumbers;                            //@synthesize serialNumbers=_serialNumbers - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;                //@synthesize subscribed=_subscribed - In the implementation block
@property (assign,nonatomic) unsigned long long productType;                     //@synthesize productType=_productType - In the implementation block
-(void)setAdamId:(NSNumber *)arg1 ;
-(NSNumber *)adamId;
-(NSString *)offerIdentifier;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(BOOL)isSubscribed;
-(unsigned long long)offerType;
-(void)setSubscribed:(BOOL)arg1 ;
-(unsigned long long)productType;
-(void)setProductType:(unsigned long long)arg1 ;
-(id)initWithOfferIdentifier:(id)arg1 ;
-(BOOL)isDowngrading;
-(NSSet *)serialNumbers;
-(id)initWithAdamId:(id)arg1 ;
-(void)setDowngrading:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
@end

