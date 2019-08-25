/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long long _length;
	unsigned long long _hashValue;
	SCD_Struct_NS33* _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)finalize;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_baselineMode;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 ;
-(id)copyCachedInstance;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(void)cache;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
@end

