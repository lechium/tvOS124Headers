/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearch.h>

@class TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {

	unsigned long long _insertKatakanaAtIndex;
	/*^block*/id _contactObserver;
	TIWordSearchCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
+(/*^block*/id)configureContactCollectionObserver:(id)arg1 previousObserver:(/*^block*/id)arg2 ;
+(id)sharedMecabraWrapper;
+(void)resetSharedMecabraWrapper;
+(void)clearCachedContactObserver;
-(void)updateMecabraState;
-(int)mecabraInputMethodType;
-(unsigned long long)mecabraCreationOptions;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2 ;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(void)clearObservers;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(BOOL)isAnalyzingJapaneseRomaji;
-(void)setInsertKatakanaAtIndex:(unsigned long long)arg1 ;
-(BOOL)_insertString:(id)arg1 input:(id)arg2 at:(unsigned long long)arg3 force:(BOOL)arg4 ;
-(id)makeCandidates:(id)arg1 contextString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 withInputManager:(id)arg5 geometryModelData:(id)arg6 flickUsed:(BOOL)arg7 hardwareKeyboardMode:(BOOL)arg8 ;
-(void)updateDictionaryPaths;
-(void)dealloc;
-(TIWordSearchCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
@end
