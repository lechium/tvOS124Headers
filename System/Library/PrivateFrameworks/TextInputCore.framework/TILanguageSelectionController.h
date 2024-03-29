/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TILanguageLikelihoodModeling, TILanguageSelectionControllerDelegate, TIMultilingualPreferenceProviding;
#import <TextInputCore/TextInputCore-Structs.h>
@class TILanguageModelAdaptationContext, NSArray, TIInputMode, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface TILanguageSelectionController : NSObject {

	id<TILanguageLikelihoodModeling> _languageLikelihoodModel;
	vector<TITokenID, std::__1::allocator<TITokenID> >* m_buffered_tokens;
	id<TILanguageSelectionControllerDelegate> _delegate;
	TILanguageModelAdaptationContext* _adaptationContext;
	NSArray* _activeInputModes;
	id<TIMultilingualPreferenceProviding> _preferenceProvider;
	TIInputMode* _primaryInputMode;
	TIInputMode* _preferredSecondaryInputMode;
	TIInputMode* _inferredSecondaryInputMode;
	NSArray* _userEnabledInputModes;
	NSMutableDictionary* _inputModeProbabilities;
	NSDictionary* _referenceInputModeProbabilities;
	NSMutableArray* _bufferedTokenStrings;

}

@property (nonatomic,readonly) id<TILanguageLikelihoodModeling> languageLikelihoodModel;              //@synthesize languageLikelihoodModel=_languageLikelihoodModel - In the implementation block
@property (nonatomic,readonly) id<TIMultilingualPreferenceProviding> preferenceProvider;              //@synthesize preferenceProvider=_preferenceProvider - In the implementation block
@property (nonatomic,retain) TIInputMode * primaryInputMode;                                          //@synthesize primaryInputMode=_primaryInputMode - In the implementation block
@property (nonatomic,retain) TIInputMode * preferredSecondaryInputMode;                               //@synthesize preferredSecondaryInputMode=_preferredSecondaryInputMode - In the implementation block
@property (nonatomic,retain) TIInputMode * inferredSecondaryInputMode;                                //@synthesize inferredSecondaryInputMode=_inferredSecondaryInputMode - In the implementation block
@property (nonatomic,retain) NSArray * userEnabledInputModes;                                         //@synthesize userEnabledInputModes=_userEnabledInputModes - In the implementation block
@property (nonatomic,retain) NSArray * activeInputModes;                                              //@synthesize activeInputModes=_activeInputModes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * inputModeProbabilities;                          //@synthesize inputModeProbabilities=_inputModeProbabilities - In the implementation block
@property (nonatomic,copy) NSDictionary * referenceInputModeProbabilities;                            //@synthesize referenceInputModeProbabilities=_referenceInputModeProbabilities - In the implementation block
@property (nonatomic,readonly) NSMutableArray * bufferedTokenStrings;                                 //@synthesize bufferedTokenStrings=_bufferedTokenStrings - In the implementation block
@property (assign,nonatomic) id<TILanguageSelectionControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TILanguageModelAdaptationContext * adaptationContext;                    //@synthesize adaptationContext=_adaptationContext - In the implementation block
+(id)sharedLanguageLikelihoodModel;
+(id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2 ;
+(void)reportTypedTokens:(const vector<TITokenID, std::__1::allocator<TITokenID> >*)arg1 activeInputModes:(id)arg2 ;
+(id)inferInputModeForLanguage:(id)arg1 enabled:(id)arg2 ;
+(id)multilingualInputModesForInputModes:(id)arg1 ;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg1 ;
-(void)appleKeyboardsPreferencesChanged:(id)arg1 ;
-(TIInputMode *)primaryInputMode;
-(void)setActiveInputModes:(NSArray *)arg1 ;
-(double)lastOfflineAdaptationTimeForApp:(id)arg1 ;
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;
-(id)initWithLanguageLikelihoodModel:(id)arg1 preferenceProvider:(id)arg2 ;
-(id)fetchUserEnabledInputModes;
-(id)fetchPreferredSecondaryInputMode;
-(void)updateActiveInputModesSuppressingNotification:(BOOL)arg1 ;
-(BOOL)didProbabilityChangeSignificantly;
-(BOOL)updateInputModeProbabilities;
-(void)feedBufferedTokenStringsToModel;
-(float)priorProbabilityForInputMode:(id)arg1 ;
-(BOOL)bufferIsCompatibleWithContext:(const TITokenID*)arg1 contextLength:(unsigned long long)arg2 ;
-(void)addTokenString:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 ;
-(void)removeTokenString:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 ;
-(id<TILanguageLikelihoodModeling>)languageLikelihoodModel;
-(id<TIMultilingualPreferenceProviding>)preferenceProvider;
-(void)setPrimaryInputMode:(TIInputMode *)arg1 ;
-(void)setPreferredSecondaryInputMode:(TIInputMode *)arg1 ;
-(TIInputMode *)inferredSecondaryInputMode;
-(void)setInferredSecondaryInputMode:(TIInputMode *)arg1 ;
-(void)setUserEnabledInputModes:(NSArray *)arg1 ;
-(NSMutableDictionary *)inputModeProbabilities;
-(NSDictionary *)referenceInputModeProbabilities;
-(void)setReferenceInputModeProbabilities:(NSDictionary *)arg1 ;
-(NSMutableArray *)bufferedTokenStrings;
-(void)flushBuffer;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<TILanguageSelectionControllerDelegate>)arg1 ;
-(id<TILanguageSelectionControllerDelegate>)delegate;
-(NSArray *)activeInputModes;
@end

