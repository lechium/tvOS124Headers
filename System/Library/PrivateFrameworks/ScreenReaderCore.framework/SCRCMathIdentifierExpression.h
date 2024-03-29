/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {

	int _fontStyle;

}

@property (nonatomic,readonly) int fontStyle;              //@synthesize fontStyle=_fontStyle - In the implementation block
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3 ;
-(BOOL)isNaturalSuperscript;
-(BOOL)canFormWordStartingWithExpression:(id)arg1 ;
-(BOOL)_isPrime;
-(id)mathMLString;
-(BOOL)isNumber;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)fontStyle;
@end

