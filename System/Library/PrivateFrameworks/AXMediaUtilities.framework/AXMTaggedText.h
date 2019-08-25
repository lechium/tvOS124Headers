/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSMutableAttributedString, NSMutableDictionary, NSLocale, NSString;

@interface AXMTaggedText : NSMutableAttributedString {

	NSMutableAttributedString* _attrString;
	NSMutableDictionary* _globalAttributes;
	/*^block*/id _evaluationBlock;

}

@property (nonatomic,readonly) NSLocale * locale; 
@property (assign,getter=isSpeakable,nonatomic) BOOL speakable; 
@property (nonatomic,readonly) NSString * speakableText; 
+(id)textWithString:(id)arg1 locale:(id)arg2 evaluationBlock:(/*^block*/id)arg3 ;
-(NSString *)speakableText;
-(void)_evaluateIfNeeded;
-(BOOL)hasGlobalTag:(id)arg1 ;
-(void)addGlobalTag:(id)arg1 ;
-(void)removeGlobalTag:(id)arg1 ;
-(NSRange)_stringRange;
-(BOOL)_isEvaluated;
-(BOOL)isSpeakable;
-(id)_substringWithRange:(NSRange)arg1 ;
-(id)_initWithAttributedString:(id)arg1 ;
-(void)addTag:(id)arg1 withToken:(id)arg2 range:(NSRange)arg3 ;
-(void)setSpeakable:(BOOL)arg1 ;
-(BOOL)isRangeSpeakable:(NSRange)arg1 ;
-(void)_setNeedEvaluation;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(id)debugDescription;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSLocale *)locale;
-(id)mutableString;
@end
