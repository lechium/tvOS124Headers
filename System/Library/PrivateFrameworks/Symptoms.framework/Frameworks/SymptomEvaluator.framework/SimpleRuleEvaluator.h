/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol AdditionalInfoProtocol;
@class NSMutableArray, SimpleSyndromeHandler, NSString;

@interface SimpleRuleEvaluator : NSObject <ConfigurableObjectProtocol> {

	NSMutableArray* _conditionsToCheck;
	char* _stringToLog;
	unsigned long long _awd_code;
	SimpleSyndromeHandler* _syndromeToCall;
	id<AdditionalInfoProtocol> _additionalInfoGenerator;
	SEL _additionalInfoSelector;
	NSString* _signatureName;

}

@property (nonatomic,retain) NSString * signatureName;              //@synthesize signatureName=_signatureName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(id)objectWithName:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)setSignatureName:(NSString *)arg1 ;
-(void)evaluateSignatureForEvent:(id)arg1 ;
-(NSString *)signatureName;
-(NSString *)description;
@end

