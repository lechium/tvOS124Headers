/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSStringPredicateOperator.h>

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

	int _contextLock;
	SCD_Struct_NS54* _regexContext;

}
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 ;
-(BOOL)_shouldEscapeForLike;
-(void)_clearContext;
-(void)dealloc;
-(SEL)selector;
-(id)symbol;
@end
