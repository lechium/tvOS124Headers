/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ProofReader/ProofReader-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableArray, NSString, NSArray, NSMutableSet, NSBundle, NSURL, NSData;

@interface AppleSpell : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _proofReaderConnection;
	CFDictionaryRef _databaseConnections;
	NSMutableDictionary* _languageModelDicts;
	NSMutableDictionary* _lexiconDict;
	NSMutableDictionary* _phraseLexiconDict;
	CFDictionaryRef _emojiPredictorDict;
	double _referenceResetTimer;
	double _lastWriteLanguageModels;
	double _lastDecayLanguageModels;
	double _lastReleaseLanguageModels;
	double _lastMaintainLanguageModels;
	unsigned long long _languageModelWordCount;
	NSMutableDictionary* _bindicts;
	NSMutableArray* _globalBindictDataArray;
	NSMutableArray* _globalNameBindictDataArray;
	NSMutableArray* _globalNegBindictDataArray;
	NSMutableDictionary* _autocorrections;
	NSMutableDictionary* _capitalizations;
	NSString* _lastLanguage;
	NSString* _lastCandidateLanguage;
	NSArray* _userPreferredLanguages;
	NSArray* _userPreferredLatinLanguages;
	NSArray* _userTopLanguages;
	NSMutableDictionary* _learnedResponses;
	NSMutableDictionary* _probationaryLearnedResponses;
	NSMutableDictionary* _probationaryLearnedResponseTimes;
	NSMutableArray* _diagnosticInfo;
	NSMutableSet* _foundNames;
	double _lastFindNames;
	NSMutableSet* _foundShortcuts;
	NSMutableDictionary* _foundShortcutsDictionary;
	NSMutableDictionary* _lastSampleCollected;
	unsigned long long _numberOfSamplesCollected;
	double _lastSampleCollection;
	NSMutableArray* _retainedSamples;
	NSMutableDictionary* _lastSampleRecorded;
	double _lastSampleRecording;
	NSBundle* _dataBundle;
	NSMutableArray* _altBundleURLs;
	NSObject*<OS_dispatch_queue> _assetDataBundleSerialQueue;
	NSMutableDictionary* _assetDataBundleURLDictionary;
	NSMutableSet* _updatedDataBundleLanguages;
	NSURL* _updateBundleURL;
	NSMutableDictionary* _languageCounts;
	double _lastLanguageCounts;
	NSMutableDictionary* _userAdaptationDictionary;
	NSData* _lastKeyEventArray;
	unsigned long long* _keyboardHistogram;
	double _lastKeyboardHistogramRecording;
	NSMutableArray* _requestedAssets;
	NSMutableArray* _receivedAssets;
	double _lastAssetRequest;
	NSMutableArray* _recordedCorrections;
	NSMutableArray* _recordedTICorrections;
	BOOL _userPrefersUncheckedLatinLanguage;
	BOOL _userPrefersUncheckedCyrillicLanguage;
	BOOL _hasUpdatedDataBundleLanguages;
	BOOL _shouldClearFoundNames;
	BOOL _automaticTextCompletionCollapsed;
	BOOL _automaticTextCompletionEnabled;

}
-(void)addAlternateDataBundleURL:(id)arg1 ;
-(void)_findAlternateDataBundleURLs;
-(id)dataBundle;
-(id)assetDataBundleURLsForLanguage:(id)arg1 ;
-(id)localizationsForLanguage:(id)arg1 ;
-(id)dataBundlesForLanguage:(id)arg1 ;
-(id)localizationForLanguage:(id)arg1 ;
-(id)fallbackLocalizationForLanguage:(id)arg1 ;
-(id)databasePathForLanguage:(id)arg1 ;
-(void)updateLexiconsForLanguage:(id)arg1 ;
-(id)bindictDataArrayForLanguage:(id)arg1 index:(unsigned long long)arg2 ;
-(void)releaseDatabaseConnections;
-(PR_DB_IO*)databaseConnectionForLanguage:(id)arg1 ;
-(unsigned)encodingForLanguage:(id)arg1 ;
-(BOOL)_checkEnglishGrammarInString:(id)arg1 range:(NSRange)arg2 indexIntoBuffer:(unsigned long long)arg3 bufferLength:(unsigned long long)arg4 language:(id)arg5 connection:(PR_DB_IO*)arg6 sender:(id)arg7 bufIO:(PR_BUF_IO*)arg8 retval:(int*)arg9 errorRange:(NSRange*)arg10 details:(id*)arg11 ;
-(BOOL)_checkGrammarInString:(id)arg1 range:(NSRange)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 bufIO:(PR_BUF_IO*)arg6 errorRange:(NSRange*)arg7 details:(id*)arg8 ;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(NSRange)arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(unsigned long long)arg7 details:(id*)arg8 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(NSRange)arg3 languages:(id)arg4 topLanguages:(id)arg5 orthography:(id)arg6 checkOrthography:(BOOL)arg7 mutableResults:(id)arg8 offset:(unsigned long long)arg9 autocorrect:(BOOL)arg10 onlyAtInsertionPoint:(BOOL)arg11 initialCapitalize:(BOOL)arg12 autocapitalize:(BOOL)arg13 keyEventArray:(id)arg14 appIdentifier:(id)arg15 selectedRangeValue:(id)arg16 wordCount:(long long*)arg17 countOnly:(BOOL)arg18 correction:(id*)arg19 ;
-(id)spellServer:(id)arg1 candidatesForSelectedRange:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestWordWithMinimumLength:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 ;
-(BOOL)spellServer:(id)arg1 _canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(BOOL)arg3 language:(id)arg4 ;
-(void)timeout:(id)arg1 ;
-(void)resetDataBundlesForLanguage:(id)arg1 ;
-(id)bindictDataForLanguage:(id)arg1 index:(unsigned long long)arg2 ;
-(id)globalBindictDataArray;
-(id)globalNameBindictDataArray;
-(id)globalNegativeBindictDataArray;
-(id)autocorrectionDictionaryForLanguage:(id)arg1 ;
-(id)capitalizationDictionaryForLanguage:(id)arg1 ;
-(id)linguisticTaggerForLanguage:(id)arg1 string:(id)arg2 range:(NSRange)arg3 taggerIndex:(unsigned long long*)arg4 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(long long*)arg4 countOnly:(BOOL)arg5 correction:(id*)arg6 ;
-(id)spellServer:(id)arg1 checkString:(id)arg2 offset:(unsigned long long)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(long long*)arg7 ;
-(id)spellServer:(id)arg1 generateCandidatesForSelectedRange:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)_standardizedLanguageModelStringForString:(id)arg1 ;
-(id)internalStringForKoreanExternalString:(id)arg1 ;
-(unsigned)_tokenIDForString:(id)arg1 languageModel:(id)arg2 language:(id)arg3 createIfAbsent:(BOOL)arg4 terminatorTokenID:(unsigned)arg5 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkTemp:(BOOL)arg8 checkUser:(BOOL)arg9 checkNames:(BOOL)arg10 checkHyphens:(BOOL)arg11 checkIntercaps:(BOOL)arg12 checkOptions:(BOOL)arg13 depth:(unsigned long long)arg14 ;
-(BOOL)checkWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 index:(unsigned long long)arg5 ;
-(unsigned long long)acceptibilityOfWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 forPrediction:(BOOL)arg5 ;
-(id)externalStringForKoreanInternalString:(id)arg1 ;
-(BOOL)checkNegativeWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 ;
-(unsigned)_tokenIDForString:(id)arg1 languageModel:(id)arg2 language:(id)arg3 terminatorTokenID:(unsigned)arg4 ;
-(BOOL)_shouldBlockWord:(id)arg1 language:(id)arg2 encoding:(unsigned)arg3 ;
-(id)lexiconForLanguage:(id)arg1 ;
-(id)languageModelLocalizationForLanguage:(id)arg1 ;
-(void)_readLanguageModelParametersFromDefaults;
-(id)_loadLanguageModelForLanguage:(id)arg1 localization:(id)arg2 appIdentifier:(id)arg3 onQueue:(id)arg4 ;
-(id)backgroundLoadingQueue;
-(id)languageModelForLanguage:(id)arg1 appIdentifier:(id)arg2 waitForResult:(BOOL)arg3 ;
-(id)_stringForTokenIDs:(const unsigned*)arg1 tokenCount:(unsigned long long)arg2 languageModel:(id)arg3 language:(id)arg4 connection:(PR_DB_IO*)arg5 sender:(id)arg6 encoding:(unsigned)arg7 prefix:(id)arg8 capitalized:(BOOL)arg9 ;
-(void)_addLanguageModelCompletionsForPrefix:(id)arg1 languageModel:(id)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 encoding:(unsigned)arg6 capitalized:(BOOL)arg7 candidates:(id)arg8 ;
-(unsigned long long)_contextLengthForRange:(NSRange)arg1 language:(id)arg2 tagger:(id)arg3 taggerIndex:(unsigned long long)arg4 languageModel:(id)arg5 maxContextLength:(unsigned long long)arg6 context:(unsigned*)arg7 cleanOffset:(unsigned long long*)arg8 ;
-(BOOL)useUnigramProbabilityForLanguage:(id)arg1 ;
-(BOOL)_getUnigramProbabilityForString:(id)arg1 languageModel:(id)arg2 probability:(double*)arg3 ;
-(float)dynamicScoreForWord:(id)arg1 languageModel:(id)arg2 language:(id)arg3 ;
-(void)enumerateAssetDataItemsForLocale:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)languageModelFallbackLocalizationForLanguage:(id)arg1 ;
-(void)_readLanguageModelParametersFromDictionary:(id)arg1 ;
-(BOOL)useLanguageModelForLanguage:(id)arg1 tagger:(id)arg2 taggerIndex:(unsigned long long)arg3 appIdentifier:(id)arg4 ;
-(id)languageModelCompletionsForPartialWord:(id)arg1 language:(id)arg2 sender:(id)arg3 appIdentifier:(id)arg4 ;
-(BOOL)_addLanguageModelCompletionsForPartialWordRange:(NSRange)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 encoding:(unsigned)arg5 tagger:(id)arg6 taggerIndex:(unsigned long long)arg7 appIdentifier:(id)arg8 waitForLanguageModel:(BOOL)arg9 candidates:(id)arg10 ;
-(id)_rankedCandidatesForRange:(NSRange)arg1 candidates:(id)arg2 language:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned long long)arg5 appIdentifier:(id)arg6 scoreDictionary:(id)arg7 ;
-(id)_rankedCandidatesForCandidateList:(id)arg1 language:(id)arg2 tagger:(id)arg3 taggerIndex:(unsigned long long)arg4 appIdentifier:(id)arg5 ;
-(BOOL)_useAlternateLanguageForRange:(NSRange)arg1 ofString:(id)arg2 language:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned long long)arg5 alternateLanguage:(id)arg6 alternateTagger:(id)arg7 alternateTaggerIndex:(unsigned long long)arg8 appIdentifier:(id)arg9 ;
-(float)dynamicScoreForWord:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3 ;
-(id)_lexiconPathForLocalization:(id)arg1 type:(id)arg2 ;
-(id)_lexiconPathForLanguage:(id)arg1 type:(id)arg2 ;
-(id)_stemSuffixConverterPathForLanguage:(id)arg1 ;
-(id)_loadLexiconsForLanguage:(id)arg1 localization:(id)arg2 onQueue:(id)arg3 ;
-(id)_lexiconsForLanguage:(id)arg1 waitForResult:(BOOL)arg2 ;
-(id)_phraseLexiconPathForLanguage:(id)arg1 ;
-(id)_lexiconsForLanguage:(id)arg1 ;
-(BOOL)validateWord:(id)arg1 inLexiconForLanguage:(id)arg2 requiredMetaFlags:(unsigned)arg3 alternativeRequiredMetaFlags:(unsigned)arg4 prohibitedMetaFlags:(unsigned)arg5 caseInsensitive:(BOOL)arg6 ;
-(id)_phraseLexiconsForLanguage:(id)arg1 ;
-(BOOL)validateWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(BOOL)validateVariantWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(BOOL)validateNoCapAbbreviation:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(BOOL)validateUntilLearnedWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(unsigned)metaFlagsForWord:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(id)phraseMatching:(id)arg1 inLexiconForLanguage:(id)arg2 ;
-(unsigned long long)numberOfTurkishSuffixPointsInBuffer:(char*)arg1 length:(unsigned long long)arg2 maxSuffixPoints:(unsigned long long)arg3 suffixPoints:(SCD_Struct_Ap1*)arg4 ;
-(BOOL)validateAbbreviationOrNumberWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 connection:(PR_DB_IO*)arg5 sender:(id)arg6 ;
-(BOOL)checkNameWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 globalOnly:(BOOL)arg5 ;
-(unsigned long long)acceptibilityOfWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 forPrediction:(BOOL)arg5 depth:(unsigned long long)arg6 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(BOOL)checkSpecialPrefixesForWordBuffer:(char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkTemp:(BOOL)arg8 checkUser:(BOOL)arg9 checkNames:(BOOL)arg10 checkHyphens:(BOOL)arg11 checkIntercaps:(BOOL)arg12 checkOptions:(BOOL)arg13 forCorrection:(BOOL)arg14 depth:(unsigned long long)arg15 ;
-(id)_orthographyByModifyingOrthography:(id)arg1 withLatinLanguage:(id)arg2 ;
-(BOOL)checkNoCapAbbreviationWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 encoding:(unsigned)arg4 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkTemp:(BOOL)arg8 checkNames:(BOOL)arg9 checkHyphens:(BOOL)arg10 checkIntercaps:(BOOL)arg11 checkOptions:(BOOL)arg12 depth:(unsigned long long)arg13 ;
-(id)_correctionResultForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 tagger:(id)arg5 taggerIndex:(unsigned long long)arg6 appIdentifier:(id)arg7 dictionary:(id)arg8 languages:(id)arg9 connection:(PR_DB_IO*)arg10 onlyAtInsertionPoint:(BOOL)arg11 capitalize:(BOOL)arg12 autocapitalize:(BOOL)arg13 keyEventArray:(id)arg14 selectedRangeValue:(id)arg15 previousLetter:(unsigned short)arg16 nextLetter:(unsigned short)arg17 isAlternateLanguage:(BOOL)arg18 extraMisspellingCount:(unsigned long long)arg19 extraCorrectionCount:(unsigned long long*)arg20 ;
-(id)_capitalizationResultForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 language:(id)arg5 onlyAtInsertionPoint:(BOOL)arg6 keyEventArray:(id)arg7 selectedRangeValue:(id)arg8 ;
-(BOOL)validateWordPrefixBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkNames:(BOOL)arg8 checkHyphens:(BOOL)arg9 checkIntercaps:(BOOL)arg10 checkOptions:(BOOL)arg11 depth:(unsigned long long)arg12 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 precededBy:(id*)arg3 ;
-(id)_modifiedGrammarDescriptionForDescription:(id)arg1 ;
-(id)_detailWithRange:(NSRange)arg1 description:(id)arg2 corrections:(id)arg3 ;
-(id)_correctionForSuggestedPhrase:(const char*)arg1 originalBuffer:(const char*)arg2 length:(unsigned long long)arg3 ;
-(BOOL)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(id)_crudeNextWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(BOOL)onContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(BOOL)onNoContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(BOOL)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)_findMatchingRangesForRange:(NSRange)arg1 inString:(id)arg2 keyEventArray:(id)arg3 endingAtIndex:(unsigned long long)arg4 matchingStringRange:(NSRange*)arg5 correctableStringRange:(NSRange*)arg6 matchingKeyEventRange:(NSRange*)arg7 firstMisspelledKeyEventIndex:(unsigned long long*)arg8 lastMisspelledKeyEventIndex:(unsigned long long*)arg9 previousBackspaceCount:(unsigned long long*)arg10 ;
-(id)_correctionResultForKoreanString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 offset:(unsigned long long)arg4 tagger:(id)arg5 taggerIndex:(unsigned long long)arg6 appIdentifier:(id)arg7 dictionary:(id)arg8 keyEventArray:(id)arg9 ;
-(void)_addGuessesForWordBuffer:(char*)arg1 length:(unsigned long long)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 minAutocorrectionLength:(unsigned long long)arg6 previousLetter:(unsigned short)arg7 nextLetter:(unsigned short)arg8 basicOnly:(BOOL)arg9 toGuesses:(id)arg10 ;
-(id)spellServer:(id)arg1 suggestGuessesForKoreanWordRange:(NSRange)arg2 inString:(id)arg3 options:(id)arg4 ;
-(void)personalizeEmojiArray:(id)arg1 ;
-(BOOL)findMatchingRangesForRange:(NSRange)arg1 inString:(id)arg2 keyEventArray:(id)arg3 selectedRangeValue:(id)arg4 matchingStringRange:(NSRange*)arg5 correctableStringRange:(NSRange*)arg6 matchingKeyEventRange:(NSRange*)arg7 firstMisspelledKeyEventIndex:(unsigned long long*)arg8 lastMisspelledKeyEventIndex:(unsigned long long*)arg9 previousBackspaceCount:(unsigned long long*)arg10 ;
-(id)_phraseCapitalizationResultForString:(id)arg1 range:(NSRange)arg2 currentWordRange:(NSRange)arg3 inString:(id)arg4 offset:(unsigned long long)arg5 language:(id)arg6 onlyAtInsertionPoint:(BOOL)arg7 keyEventArray:(id)arg8 selectedRangeValue:(id)arg9 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 finalModificationsForPinyinInputString:(id)arg2 ;
-(id)englishStringsFromWordBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(id)englishStringFromWordBuffer:(char*)arg1 length:(unsigned long long)arg2 connection:(PR_DB_IO*)arg3 ;
-(void)addSpecialModifiedPinyinToArray:(id)arg1 inBuffer:(char*)arg2 length:(unsigned long long)arg3 atEnd:(BOOL)arg4 ;
-(void)addModifiedPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned long long)arg3 prevIndex:(unsigned long long)arg4 prevPrevIndex:(unsigned long long)arg5 startingModificationsAt:(unsigned long long)arg6 inBuffer:(char*)arg7 length:(unsigned long long)arg8 initialSyllableCount:(unsigned long long)arg9 initialScore:(unsigned long long)arg10 prevScore:(unsigned long long)arg11 prevPrevScore:(unsigned long long)arg12 lastSyllableScore:(unsigned long long)arg13 couldBeAbbreviatedPinyin:(BOOL)arg14 ;
-(void)addModifiedPartialPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned long long)arg3 prevIndex:(unsigned long long)arg4 prevPrevIndex:(unsigned long long)arg5 prePrevPrevIndex:(unsigned long long)arg6 startingModificationsAt:(unsigned long long)arg7 inBuffer:(char*)arg8 length:(unsigned long long)arg9 initialSyllableCount:(unsigned long long)arg10 initialScore:(unsigned long long)arg11 prevScore:(unsigned long long)arg12 prevPrevScore:(unsigned long long)arg13 lastSyllableScore:(unsigned long long)arg14 ;
-(id)_pinyinStringByCombiningPinyinString:(id)arg1 withPinyinString:(id)arg2 ;
-(id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg1 ;
-(unsigned long long)_getSplitIndexes:(unsigned long long*)arg1 maxCount:(unsigned long long)arg2 forPinyinInputString:(id)arg3 ;
-(id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg1 depth:(unsigned long long)arg2 ;
-(id)_retainedAlternativesByCombiningAlternatives:(id)arg1 withAlternatives:(id)arg2 andAddingAlternatives:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2 extended:(BOOL)arg3 ;
-(id)spellServer:(id)arg1 _retainedPrefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedCorrectionsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedFinalModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(void)addGuessesForKoreanWord:(id)arg1 includeAdditionalGuesses:(BOOL)arg2 toGuesses:(id)arg3 ;
-(void)clearCaches;
-(id)init;
-(void)resetTimer;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(long long*)arg4 countOnly:(BOOL)arg5 ;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id*)arg4 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 languages:(id)arg3 wordCount:(long long*)arg4 countOnly:(BOOL)arg5 correction:(id*)arg6 ;
-(void)setUpdateBundleURL:(id)arg1 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestWordWithLengthInRange:(NSRange)arg2 language:(id)arg3 ;
-(BOOL)spellServer:(id)arg1 canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(BOOL)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 stringForInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
@end

