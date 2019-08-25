/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CTCarrierSpace/CTCarrierSpace-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpacePlanGroupOptionInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _planSubscriptionStatus;
	BOOL _planPurchasable;
	NSString* _planId;
	NSString* _planLabel;
	NSString* _planValue;
	NSString* _planDetailsURL;
	NSString* _planTermsURL;

}

@property (nonatomic,retain) NSString * planId;                                 //@synthesize planId=_planId - In the implementation block
@property (nonatomic,retain) NSString * planLabel;                              //@synthesize planLabel=_planLabel - In the implementation block
@property (nonatomic,retain) NSString * planValue;                              //@synthesize planValue=_planValue - In the implementation block
@property (assign,nonatomic) unsigned char planSubscriptionStatus;              //@synthesize planSubscriptionStatus=_planSubscriptionStatus - In the implementation block
@property (assign,nonatomic) BOOL planPurchasable;                              //@synthesize planPurchasable=_planPurchasable - In the implementation block
@property (nonatomic,retain) NSString * planDetailsURL;                         //@synthesize planDetailsURL=_planDetailsURL - In the implementation block
@property (nonatomic,retain) NSString * planTermsURL;                           //@synthesize planTermsURL=_planTermsURL - In the implementation block
@property (nonatomic,readonly) long long planStatus; 
+(BOOL)supportsSecureCoding;
-(NSString *)planId;
-(NSString *)planLabel;
-(NSString *)planValue;
-(long long)planStatus;
-(BOOL)planPurchasable;
-(NSString *)planDetailsURL;
-(NSString *)planTermsURL;
-(unsigned char)planSubscriptionStatus;
-(void)setPlanId:(NSString *)arg1 ;
-(void)setPlanLabel:(NSString *)arg1 ;
-(void)setPlanValue:(NSString *)arg1 ;
-(void)setPlanSubscriptionStatus:(unsigned char)arg1 ;
-(void)setPlanPurchasable:(BOOL)arg1 ;
-(void)setPlanDetailsURL:(NSString *)arg1 ;
-(void)setPlanTermsURL:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
