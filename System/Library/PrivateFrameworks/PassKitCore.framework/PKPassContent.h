/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKImage, NSString, NSArray, PKPassPersonalization, NSDictionary;

@interface PKPassContent : PKContent <NSSecureCoding> {

	long long _transitType;
	PKImage* _footerImage;
	NSString* _logoText;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;
	NSArray* _balanceFields;
	PKPassPersonalization* _personalization;
	NSDictionary* _semantics;
	NSDictionary* _allSemantics;
	NSString* _businessChatIdentifier;

}

@property (assign,nonatomic) long long transitType;                              //@synthesize transitType=_transitType - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                              //@synthesize footerImage=_footerImage - In the implementation block
@property (nonatomic,copy) NSString * logoText;                                  //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,copy) NSArray * frontFieldBuckets;                          //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * backFieldBuckets;                           //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * balanceFields;                              //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,copy) PKPassPersonalization * personalization;              //@synthesize personalization=_personalization - In the implementation block
@property (nonatomic,copy) NSDictionary * semantics;                             //@synthesize semantics=_semantics - In the implementation block
@property (nonatomic,copy) NSDictionary * allSemantics;                          //@synthesize allSemantics=_allSemantics - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;                    //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * primaryFields; 
+(BOOL)supportsSecureCoding;
-(void)setTransitType:(long long)arg1 ;
-(long long)transitType;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(NSString *)businessChatIdentifier;
-(void)setSemantics:(NSDictionary *)arg1 ;
-(NSDictionary *)semantics;
-(NSArray *)balanceFields;
-(void)flushFormattedFieldValues;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(PKImage *)footerImage;
-(NSString *)logoText;
-(NSArray *)primaryFields;
-(PKPassPersonalization *)personalization;
-(NSDictionary *)allSemantics;
-(void)setFooterImage:(PKImage *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setFrontFieldBuckets:(NSArray *)arg1 ;
-(void)setBackFieldBuckets:(NSArray *)arg1 ;
-(void)setBalanceFields:(NSArray *)arg1 ;
-(void)setPersonalization:(PKPassPersonalization *)arg1 ;
-(void)setAllSemantics:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

