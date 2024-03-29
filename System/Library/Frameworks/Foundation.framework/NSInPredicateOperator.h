/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {

	unsigned long long _flags;
	NSSubstringPredicateOperator* _stringVersion;

}
+(BOOL)supportsSecureCoding;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)stringVersion;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)flags;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(id)symbol;
@end

