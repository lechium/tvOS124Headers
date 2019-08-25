/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance {

	NSArray* _validators;

}

@property (nonatomic,retain) NSArray * validators;              //@synthesize validators=_validators - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setValidators:(NSArray *)arg1 ;
-(id)initWithValidators:(id)arg1 ;
-(NSArray *)validators;
-(id)CKPropertiesDescription;
@end

