/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField {

	NSString* _buttonTitle;
	NSString* _detailTitle;
	NSString* _detailSubtitle;
	NSString* _detailBody;
	NSString* _businessChatButtonTitle;
	NSString* _businessChatIdentifier;
	NSString* _businessChatIntentName;
	unsigned long long _alingment;

}

@property (nonatomic,copy) NSString * buttonTitle;                          //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSString * detailTitle;                          //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,copy) NSString * detailSubtitle;                       //@synthesize detailSubtitle=_detailSubtitle - In the implementation block
@property (nonatomic,copy) NSString * detailBody;                           //@synthesize detailBody=_detailBody - In the implementation block
@property (nonatomic,copy) NSString * businessChatButtonTitle;              //@synthesize businessChatButtonTitle=_businessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;               //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * businessChatIntentName;               //@synthesize businessChatIntentName=_businessChatIntentName - In the implementation block
@property (assign,nonatomic) unsigned long long alingment;                  //@synthesize alingment=_alingment - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
-(void)updateWithConfiguration:(id)arg1 ;
-(unsigned long long)fieldType;
-(id)submissionString;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)setCurrentValue:(id)arg1 ;
-(void)_commonUpdate;
-(void)setDetailTitle:(NSString *)arg1 ;
-(void)setDetailSubtitle:(NSString *)arg1 ;
-(void)setDetailBody:(NSString *)arg1 ;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(void)setBusinessChatButtonTitle:(NSString *)arg1 ;
-(void)setBusinessChatIntentName:(NSString *)arg1 ;
-(void)setAlingment:(unsigned long long)arg1 ;
-(NSString *)detailTitle;
-(NSString *)detailSubtitle;
-(NSString *)detailBody;
-(NSString *)businessChatButtonTitle;
-(NSString *)businessChatIdentifier;
-(NSString *)businessChatIntentName;
-(unsigned long long)alingment;
-(NSString *)title;
-(id)displayString;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
@end
