/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSPredicateUtilities : NSObject
+(unsigned long long)_getITypeFor:(const char*)arg1 ;
+(unsigned long long)_getCommonTypeFor:(id)arg1 ;
+(id)sum:(id)arg1 ;
+(id)average:(id)arg1 ;
+(id)_doTokenization:(id)arg1 locale:(id)arg2 ;
+(id)_processAndTokenize:(id)arg1 flags:(unsigned long long)arg2 locale:(id)arg3 ;
+(id)_collapseAndTokenize:(id)arg1 flags:(unsigned long long)arg2 locale:(id)arg3 ;
+(id)_convertStringToNumber:(id)arg1 ;
+(id)_parserableStringDescription:(id)arg1 ;
+(id)_parserableCollectionDescription:(id)arg1 ;
+(id)count:(id)arg1 ;
+(id)min:(id)arg1 ;
+(id)max:(id)arg1 ;
+(id)median:(id)arg1 ;
+(id)mode:(id)arg1 ;
+(id)stddev:(id)arg1 ;
+(id)add:(id)arg1 to:(id)arg2 ;
+(id)from:(id)arg1 subtract:(id)arg2 ;
+(id)multiply:(id)arg1 by:(id)arg2 ;
+(id)divide:(id)arg1 by:(id)arg2 ;
+(id)modulus:(id)arg1 by:(id)arg2 ;
+(id)sqrt:(id)arg1 ;
+(id)log:(id)arg1 ;
+(id)ln:(id)arg1 ;
+(id)raise:(id)arg1 toPower:(id)arg2 ;
+(id)exp:(id)arg1 ;
+(id)floor:(id)arg1 ;
+(id)ceiling:(id)arg1 ;
+(id)abs:(id)arg1 ;
+(id)trunc:(id)arg1 ;
+(id)tokenize:(id)arg1 using:(id)arg2 ;
+(id)uppercase:(id)arg1 ;
+(id)lowercase:(id)arg1 ;
+(id)length:(id)arg1 ;
+(id)castObject:(id)arg1 toType:(id)arg2 ;
+(id)random;
+(id)randomn:(id)arg1 ;
+(id)objectFrom:(id)arg1 withIndex:(id)arg2 ;
+(id)now;
+(id)distanceToLocation:(id)arg1 fromLocation:(id)arg2 ;
+(id)bitwiseAnd:(id)arg1 with:(id)arg2 ;
+(id)bitwiseOr:(id)arg1 with:(id)arg2 ;
+(id)bitwiseXor:(id)arg1 with:(id)arg2 ;
+(id)leftshift:(id)arg1 by:(id)arg2 ;
+(id)rightshift:(id)arg1 by:(id)arg2 ;
+(id)onesComplement:(id)arg1 ;
+(id)noindex:(id)arg1 ;
+(id)indexed:(id)arg1 by:(id)arg2 ;
+(id)distinct:(id)arg1 ;
+(id)inverseOrderKey:(id)arg1 ;
+(BOOL)_isReservedWordInParser:(id)arg1 ;
+(id)_parserableDateDescription:(id)arg1 ;
+(id)_predicateClassesForSecureCoding;
+(id)_compoundPredicateClassesForSecureCoding;
+(id)_expressionClassesForSecureCoding;
+(id)_extendedExpressionClassesForSecureCoding;
+(id)_operatorClassesForSecureCoding;
+(id)_constantValueClassesForSecureCoding;
-(double)distanceFromLocation:(id)arg1 ;
@end

