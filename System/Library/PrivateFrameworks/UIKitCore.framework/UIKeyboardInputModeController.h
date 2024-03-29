/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardInputModeControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIKeyboardInputMode, NSArray, NSString, NSObject;

@interface UIKeyboardInputModeController : NSObject {

	UIKeyboardInputMode* _currentInputMode;
	NSArray* _inputModesWithoutHardwareSupport;
	NSArray* _allExtensions;
	NSArray* _allowedExtensions;
	BOOL _skipExtensionInputModes;
	BOOL _excludeExtensionInputModes;
	BOOL _cacheNeedsRefresh;
	int _notifyPasscodeChangedToken;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	NSString* _newModeForUserNotification;
	NSObject* _keyboardTagForUserNotification;
	BOOL _loadingExtensions;
	BOOL _needsUpdateExtensions;
	BOOL _suppressCurrentPublicInputMode;
	BOOL _shouldRunContinuousDiscovery;
	NSArray* keyboardInputModes;
	NSArray* keyboardInputModeIdentifiers;
	NSArray* enabledInputModes;
	NSArray* normalizedInputModes;
	NSArray* defaultKeyboardInputModes;
	NSArray* defaultRawInputModes;
	NSArray* defaultInputModes;
	NSArray* defaultNormalizedInputModes;
	NSArray* suggestedInputModesForSiriLanguage;
	UIKeyboardInputMode* _lastUsedInputMode;
	NSString* _inputModeContextIdentifier;
	id<UIKeyboardInputModeControllerDelegate> _delegate;
	UIKeyboardInputMode* _nextInputModeToUse;
	UIKeyboardInputMode* _currentUsedInputMode;
	id _extensionMatchingContext;

}

@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * inputModesWithoutHardwareSupport; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
@property (readonly) NSArray * normalizedEnabledInputModeIdentifiers; 
@property (readonly) NSArray * enabledInputModeLanguages; 
@property (readonly) NSArray * activeInputModeIdentifiers; 
@property (nonatomic,readonly) NSArray * allowedExtensions;                                           //@synthesize allowedExtensions=_allowedExtensions - In the implementation block
@property (retain) NSArray * keyboardInputModes; 
@property (retain) NSArray * keyboardInputModeIdentifiers; 
@property (retain) NSArray * enabledInputModes; 
@property (retain) NSArray * normalizedInputModes; 
@property (retain) NSArray * defaultKeyboardInputModes; 
@property (nonatomic,copy) NSArray * defaultRawInputModes; 
@property (retain) NSArray * defaultInputModes; 
@property (retain) NSArray * defaultNormalizedInputModes; 
@property (retain) NSArray * suggestedInputModesForSiriLanguage; 
@property (nonatomic,retain) UIKeyboardInputMode * nextInputModeToUse;                                //@synthesize nextInputModeToUse=_nextInputModeToUse - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentUsedInputMode;                              //@synthesize currentUsedInputMode=_currentUsedInputMode - In the implementation block
@property (nonatomic,retain) id extensionMatchingContext;                                             //@synthesize extensionMatchingContext=_extensionMatchingContext - In the implementation block
@property (retain) UIKeyboardInputMode * currentInputMode; 
@property (assign,nonatomic) UIKeyboardInputMode * currentInputModeInPreference; 
@property (nonatomic,retain) UIKeyboardInputMode * lastUsedInputMode;                                 //@synthesize lastUsedInputMode=_lastUsedInputMode - In the implementation block
@property (nonatomic,readonly) UIKeyboardInputMode * hardwareInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentSystemInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentPublicInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentLinguisticInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * lastUsedInputModeForCurrentContext; 
@property (nonatomic,readonly) BOOL containsDictationSupportedInputMode; 
@property (nonatomic,readonly) NSArray * activeDictationSupportedInputModeIdentifiers; 
@property (nonatomic,readonly) NSArray * activeDictationLanguages; 
@property (nonatomic,readonly) NSArray * enabledDictationLanguages; 
@property (nonatomic,copy) NSString * inputModeContextIdentifier;                                     //@synthesize inputModeContextIdentifier=_inputModeContextIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldRunContinuousDiscovery;                                       //@synthesize shouldRunContinuousDiscovery=_shouldRunContinuousDiscovery - In the implementation block
@property (assign,nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInputModeController;
+(id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+(id)inputModeIdentifierForPreferredLanguages:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<UIKeyboardInputModeControllerDelegate>)arg1 ;
-(id<UIKeyboardInputModeControllerDelegate>)delegate;
-(UIKeyboardInputMode *)currentLinguisticInputMode;
-(UIKeyboardInputMode *)currentInputMode;
-(void)setKeyboardInputModes:(NSArray *)arg1 ;
-(void)setKeyboardInputModeIdentifiers:(NSArray *)arg1 ;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(void)setNormalizedInputModes:(NSArray *)arg1 ;
-(void)setDefaultKeyboardInputModes:(NSArray *)arg1 ;
-(void)setDefaultRawInputModes:(NSArray *)arg1 ;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(void)setDefaultNormalizedInputModes:(NSArray *)arg1 ;
-(void)setInputModeContextIdentifier:(NSString *)arg1 ;
-(void)setSuggestedInputModesForSiriLanguage:(NSArray *)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)keyboardsPreferencesChanged:(id)arg1 ;
-(void)saveDeviceUnlockPasscodeInputModes;
-(NSArray *)enabledInputModeIdentifiers;
-(NSArray *)keyboardInputModes;
-(NSArray *)keyboardInputModeIdentifiers;
-(void)_beginContinuousDiscoveryIfNeeded;
-(UIKeyboardInputMode *)currentInputModeInPreference;
-(void)updateCurrentInputMode:(id)arg1 ;
-(id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1 ;
-(void)updateLastUsedInputMode:(id)arg1 ;
-(UIKeyboardInputMode *)currentUsedInputMode;
-(UIKeyboardInputMode *)lastUsedInputMode;
-(id)activeInputModes;
-(id)_systemInputModePassingTest:(/*^block*/id)arg1 ;
-(id)_systemInputModePassingLanguageTest:(/*^block*/id)arg1 ;
-(id)inputModeIdentifierLastUsedForLanguage:(id)arg1 ;
-(UIKeyboardInputMode *)currentPublicInputMode;
-(UIKeyboardInputMode *)lastUsedInputModeForCurrentContext;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(id)defaultDictationLanguages:(id)arg1 ;
-(NSArray *)activeDictationSupportedInputModeIdentifiers;
-(NSArray *)activeDictationLanguages;
-(BOOL)isDictationLanguageEnabled:(id)arg1 ;
-(id)updateEnabledDictationLanguages:(BOOL)arg1 ;
-(void)_setCurrentInputMode:(id)arg1 force:(BOOL)arg2 ;
-(NSArray *)normalizedInputModes;
-(NSArray *)enabledInputModes;
-(UIKeyboardInputMode *)hardwareInputMode;
-(id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2 ;
-(void)getHardwareKeyboardLanguage:(id*)arg1 countryCode:(id*)arg2 ;
-(id)suggestedInputModesForHardwareKeyboardLanguage:(id)arg1 countryCode:(id)arg2 inputModes:(id)arg3 ;
-(NSArray *)suggestedInputModesForSiriLanguage;
-(NSArray *)defaultKeyboardInputModes;
-(id)filteredTVInputModesFromInputModes:(id)arg1 ;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(NSArray *)defaultRawInputModes;
-(id)filteredInputModesForSiriLanguageFromInputModes:(id)arg1 ;
-(id)appendPasscodeInputModes:(id)arg1 ;
-(void)updateDefaultInputModesIfNecessaryForIdiom;
-(NSArray *)defaultNormalizedInputModes;
-(NSArray *)defaultInputModes;
-(id)inputModeToAddForKeyboardLanguage:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3 ;
-(id)suggestedInputModesForCurrentHardwareKeyboardAndSuggestedInputModes:(id)arg1 ;
-(NSArray *)normalizedEnabledInputModeIdentifiers;
-(id)extensionMatchingContext;
-(void)setExtensionMatchingContext:(id)arg1 ;
-(void)_clearAllExtensions;
-(BOOL)shouldRunContinuousDiscovery;
-(BOOL)_mayContainExtensionInputModes;
-(void)_removeInputModes:(id)arg1 ;
-(BOOL)verifyKeyboardExtensionsWithApp;
-(id)_allExtensionsFromMatchingExtensions:(id)arg1 ;
-(BOOL)isLockscreenPasscodeKeyboard;
-(id)_MCFilteredExtensionIdentifiers;
-(UIKeyboardInputMode *)nextInputModeToUse;
-(void)setNextInputModeToUse:(UIKeyboardInputMode *)arg1 ;
-(void)_setCurrentAndNextInputModePreference;
-(id)nextInputModeToUseForTraits:(id)arg1 updatePreference:(BOOL)arg2 ;
-(id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3 ;
-(void)setLastUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2 ;
-(id)inputModeLastUsedForLanguage:(id)arg1 ;
-(void)setCurrentUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(UIKeyboardInputMode *)currentSystemInputMode;
-(void)switchToDictationInputMode;
-(void)stopDictation;
-(void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(NSArray *)supportedInputModeIdentifiers;
-(id)supportedInputModesFromArray:(id)arg1 ;
-(void)handleLastUsedInputMode:(id)arg1 withNewInputMode:(id)arg2 ;
-(void)releaseAddKeyboardNotification;
-(void)showAddKeyboardAlertForInputModeIdentifier:(id)arg1 ;
-(id)inputModeWithIdentifier:(id)arg1 ;
-(NSArray *)activeInputModeIdentifiers;
-(void)setShouldRunContinuousDiscovery:(BOOL)arg1 ;
-(void)setCurrentInputModeInPreference:(UIKeyboardInputMode *)arg1 ;
-(id)textInputModeForResponder:(id)arg1 ;
-(id)keyboardLanguageForDictationLanguage:(id)arg1 ;
-(NSArray *)enabledDictationLanguages;
-(BOOL)containsDictationSupportedInputMode;
-(void)setCurrentInputMode:(UIKeyboardInputMode *)arg1 ;
-(BOOL)currentLocaleRequiresExtendedSetup;
-(id)suggestedInputModesForCurrentLocale;
-(id)suggestedInputModesForPreferredLanguages;
-(void)loadSuggestedInputModesForSiriLanguage;
-(void)extensionsChanged;
-(void)_clearAllExtensionsIfNeeded;
-(BOOL)deviceStateIsLocked;
-(id)extensionInputModes;
-(id)nextInputModeToUseForTraits:(id)arg1 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 ;
-(id)inputModeForASCIIToggleWithTraits:(id)arg1 ;
-(void)updateCurrentAndNextInputModes;
-(void)switchToCurrentSystemInputMode;
-(void)performWithoutExtensionInputModes:(/*^block*/id)arg1 ;
-(void)performWithForcedExtensionInputModes:(/*^block*/id)arg1 ;
-(void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(id)hardwareLayoutToUseForInputMode:(id)arg1 ;
-(void)didAcceptAddKeyboardInputMode;
-(void)handleSpecificHardwareKeyboard;
-(NSArray *)allowedExtensions;
-(NSString *)inputModeContextIdentifier;
-(id)identifiersFromInputModes:(id)arg1 ;
-(id)enabledInputModeIdentifiers:(BOOL)arg1 ;
-(id)inputModesFromIdentifiers:(id)arg1 ;
-(NSArray *)inputModesWithoutHardwareSupport;
-(NSArray *)enabledInputModeLanguages;
@end

