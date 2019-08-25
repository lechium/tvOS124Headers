/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathUnderOverExpression : SCRCMathExpression {

	SCRCMathExpression* _under;
	SCRCMathExpression* _over;
	SCRCMathExpression* _base;

}

@property (nonatomic,retain) SCRCMathExpression * under;              //@synthesize under=_under - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * over;               //@synthesize over=_over - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * base;               //@synthesize base=_base - In the implementation block
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)subExpressions;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(BOOL)isRangeSubSuperscript;
-(void)setUnder:(SCRCMathExpression *)arg1 ;
-(void)setOver:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)under;
-(SCRCMathExpression *)over;
-(id)mathMLString;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)base;
@end

