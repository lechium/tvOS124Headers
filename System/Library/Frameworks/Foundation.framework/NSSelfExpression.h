/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@interface NSSelfExpression : NSExpression
+(BOOL)_allowsEvaluation;
+(id)defaultInstance;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)_initPrivate;
-(id)predicateFormat;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
@end

