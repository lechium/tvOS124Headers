/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance {

	unsigned long long _operatorType;

}

@property (assign,nonatomic) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
-(unsigned long long)operatorType;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(void)setOperatorType:(unsigned long long)arg1 ;
-(id)CKPropertiesDescription;
@end
