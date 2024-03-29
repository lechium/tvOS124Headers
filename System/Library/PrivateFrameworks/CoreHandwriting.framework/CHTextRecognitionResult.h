/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString, NSArray, NSIndexSet;

@interface CHTextRecognitionResult : CHRecognitionResult {

	BOOL _rare;
	NSString* _string;
	NSArray* _wordRanges;
	NSArray* _wordIDs;
	NSArray* _wordScores;
	NSArray* _wordStrokeSets;
	NSArray* _wordLexicalEntries;
	NSArray* _wordPatternEntries;
	NSIndexSet* _wordOVSIDs;

}

@property (readonly) BOOL rare;                                 //@synthesize rare=_rare - In the implementation block
@property (readonly) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (readonly) NSArray * wordRanges;                      //@synthesize wordRanges=_wordRanges - In the implementation block
@property (readonly) NSArray * wordIDs;                         //@synthesize wordIDs=_wordIDs - In the implementation block
@property (readonly) NSArray * wordScores;                      //@synthesize wordScores=_wordScores - In the implementation block
@property (readonly) NSArray * wordStrokeSets;                  //@synthesize wordStrokeSets=_wordStrokeSets - In the implementation block
@property (readonly) NSArray * wordLexicalEntries;              //@synthesize wordLexicalEntries=_wordLexicalEntries - In the implementation block
@property (readonly) NSArray * wordPatternEntries;              //@synthesize wordPatternEntries=_wordPatternEntries - In the implementation block
@property (readonly) NSIndexSet * wordOVSIDs;                   //@synthesize wordOVSIDs=_wordOVSIDs - In the implementation block
+(void)_filterCharactersInRange:(NSRange)arg1 fromString:(id)arg2 withLastFilteredRange:(NSRange)arg3 ;
-(id)initWithString:(id)arg1 score:(double)arg2 rare:(BOOL)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 wordScores:(id)arg6 wordStrokeSets:(id)arg7 wordLexicalEntries:(id)arg8 wordPatternEntries:(id)arg9 wordOVSIDs:(id)arg10 ;
-(id)initWithString:(id)arg1 score:(double)arg2 rare:(BOOL)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 lexicalEntry:(BOOL)arg6 patternEntry:(BOOL)arg7 ;
-(NSArray *)wordIDs;
-(NSArray *)wordRanges;
-(NSIndexSet *)wordOVSIDs;
-(NSArray *)wordScores;
-(NSArray *)wordPatternEntries;
-(NSArray *)wordLexicalEntries;
-(BOOL)_isGibberishWordAtIndex:(long long)arg1 ;
-(id)initWithString:(id)arg1 score:(double)arg2 rare:(BOOL)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 ;
-(id)mecabraCandidate;
-(id)stringByFilteringLowConfidenceRanges:(BOOL)arg1 excludeGibberish:(BOOL)arg2 rejectionRate:(double*)arg3 ;
-(float)languageFitnessForLocale:(id)arg1 competingLocales:(id)arg2 ;
-(BOOL)rare;
-(NSArray *)wordStrokeSets;
-(void)dealloc;
-(NSString *)string;
@end

