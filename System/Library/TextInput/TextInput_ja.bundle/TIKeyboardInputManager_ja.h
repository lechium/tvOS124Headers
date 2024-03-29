/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, TICandidateSorter, NSOperationQueue, NSMutableArray, TISmartPunctuationController, NSString;

@interface TIKeyboardInputManager_ja : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _kbws;
	unsigned long long _remainingInputLength;
	BOOL _shouldLearnAcceptedCandidate;
	BOOL _isPhraseBoundarySet;
	BOOL _isCandidateSelectionSuppressed;
	BOOL _flickUsed;
	BOOL _isEmojiFacemarkMode;
	TICandidateSorter* _candidateSorter;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _recentlyCommittedCandidatesForReanalysis;
	TISmartPunctuationController* _smartPunctuationController;
	NSString* _alternateDisplayString;

}

@property (readonly) TICandidateSorter * candidateSorter;                                              //@synthesize candidateSorter=_candidateSorter - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentlyCommittedCandidatesForReanalysis;              //@synthesize recentlyCommittedCandidatesForReanalysis=_recentlyCommittedCandidatesForReanalysis - In the implementation block
@property (nonatomic,readonly) TISmartPunctuationController * smartPunctuationController;              //@synthesize smartPunctuationController=_smartPunctuationController - In the implementation block
@property (assign,nonatomic) BOOL flickUsed;                                                           //@synthesize flickUsed=_flickUsed - In the implementation block
@property (assign,nonatomic) BOOL isEmojiFacemarkMode;                                                 //@synthesize isEmojiFacemarkMode=_isEmojiFacemarkMode - In the implementation block
@property (nonatomic,copy) NSString * alternateDisplayString;                                          //@synthesize alternateDisplayString=_alternateDisplayString - In the implementation block
+(Class)wordSearchClass;
+(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
+(id)sortTitleFromSort:(unsigned long long)arg1 ;
+(unsigned long long)sortFromSortTitle:(id)arg1 ;
-(void)setInput:(id)arg1 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(id)geometryModelData;
-(BOOL)supportsPerRecipientLearning;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(id)wordSearch;
-(BOOL)supportsLearning;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)dictionaryInputMode;
-(id)wordCharacters;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(id)rawInputString;
-(id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
-(TIInputManager*)initImplementation;
-(void)loadFavoniusLanguageModel;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearDynamicDictionary;
-(BOOL)flickUsed;
-(void)setFlickUsed:(BOOL)arg1 ;
-(id)stringByConvertingPunctuationForInput:(id)arg1 isLockedInput:(BOOL)arg2 ;
-(void)_deleteFromInput;
-(void)setIsEmojiFacemarkMode:(BOOL)arg1 ;
-(void)_addInput:(id)arg1 ;
-(NSString *)alternateDisplayString;
-(id)_convertString;
-(unsigned long long)remainingInputLengthOfString:(id)arg1 index:(unsigned long long)arg2 candidate:(id)arg3 ;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(void)preferencesDidChange:(id)arg1 ;
-(void)setAlternateDisplayString:(NSString *)arg1 ;
-(void)_cancelCandidatesThread;
-(BOOL)isEmojiFacemarkMode;
-(id)_inputString;
-(unsigned long long)actualInputIndex;
-(NSMutableArray *)recentlyCommittedCandidatesForReanalysis;
-(BOOL)makeCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 reanalysisMode:(BOOL)arg3 ;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)hasGroupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(TICandidateSorter *)candidateSorter;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(void)addRecentlyCommittedCandidatesForReanalysis:(void*)arg1 ;
-(void)loadAddressBook;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(id)candidateResultSet;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(TISmartPunctuationController *)smartPunctuationController;
-(id)searchStringForMarkedText;
-(id)inputString;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(BOOL)shouldExtendPriorWord;
-(unsigned long long)autoquoteType;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(unsigned long long)phraseBoundary;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(id)defaultCandidate;
-(void)suspend;
@end

