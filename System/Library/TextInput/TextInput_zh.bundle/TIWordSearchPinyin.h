/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearch.h>

@class NSArray;

@interface TIWordSearchPinyin : TIWordSearch {

	id _dictionaryUpdateObserver;
	/*^block*/id _contactObserver;
	BOOL _fuzzyPinyinEnabled;
	BOOL _tenKeyPinyinEnabled;
	int _shuangpinType;
	NSArray* _fuzzyPinyinPairs;

}

@property (nonatomic,retain) NSArray * fuzzyPinyinPairs;              //@synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs - In the implementation block
@property (assign,nonatomic) BOOL fuzzyPinyinEnabled;                 //@synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled - In the implementation block
@property (assign,nonatomic) BOOL tenKeyPinyinEnabled;                //@synthesize tenKeyPinyinEnabled=_tenKeyPinyinEnabled - In the implementation block
@property (assign,nonatomic) int shuangpinType;                       //@synthesize shuangpinType=_shuangpinType - In the implementation block
+(id)pinyinCharacterSetWithTones;
-(void)setShuangpinType:(int)arg1 ;
-(void)updateMecabraState;
-(int)mecabraInputMethodType;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(void)clearObservers;
-(int)shuangpinType;
-(void)setTenKeyPinyinEnabled:(BOOL)arg1 ;
-(void)clearCacheForInputString:(id)arg1 selectedHiddenCandidateIndex:(unsigned long long)arg2 ;
-(void)updateAddressBook;
-(void)updateDictionaryPaths;
-(BOOL)fuzzyPinyinEnabled;
-(NSArray *)fuzzyPinyinPairs;
-(void)setFuzzyPinyinPairs:(NSArray *)arg1 ;
-(void)setFuzzyPinyinEnabled:(BOOL)arg1 ;
-(void)updateFuzzyPinyinSettings;
-(void)updateShuangpinTypeWithReanalysisMode:(BOOL)arg1 ;
-(BOOL)tenKeyPinyinEnabled;
-(unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(BOOL)arg1 firstSyllableLocked:(BOOL)arg2 reanalysisMode:(BOOL)arg3 hardwareKeyboardMode:(BOOL)arg4 ;
-(id)transLiterateReading:(id)arg1 withName:(id)arg2 ;
-(void)addContact:(id)arg1 toVocabulary:(void*)arg2 toReadingPairs:(id)arg3 ;
-(void)dealloc;
@end

