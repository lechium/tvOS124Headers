/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMFEmojiPreferenceActions.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSArray, NSString;

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions> {

	NSMutableDictionary* _defaults;
	BOOL _isDefaultDirty;
	NSMutableDictionary* _usageHistory;
	NSMutableArray* _recents;
	NSMutableDictionary* _typingNames;
	NSMutableDictionary* _skinToneBaseKeyPreferences;
	NSMutableDictionary* _categoryIndexes;
	long long _currentSequence;
	NSObject*<OS_dispatch_queue> _differentialPrivacyQueue;
	unsigned long long _maximumRecentsCount;

}

@property (assign,nonatomic) unsigned long long maximumRecentsCount;              //@synthesize maximumRecentsCount=_maximumRecentsCount - In the implementation block
@property (nonatomic,readonly) NSArray * allRecents; 
@property (nonatomic,readonly) NSArray * recentEmojis; 
@property (nonatomic,readonly) NSString * previouslyUsedCategory; 
@property (nonatomic,readonly) BOOL hasDisplayedSkinToneHelp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_recentStringsInCharacterSet:(id)arg1 ;
+(id)_cacheDomain;
+(id)_allRecentStrings;
+(id)_cachedFlagCategoryEmoji:(/*^block*/id)arg1 ;
+(id)defaultsDomain;
+(id)_recentEmojiStrings;
-(void)didUseEmoji:(id)arg1 ;
-(void)resetEmojiDefaults;
-(void)loadDefaultsIfNecessary;
-(id)recentsInCharacterSet:(id)arg1 ;
-(void)writeEmojiDefaultsAndNotify:(BOOL)arg1 ;
-(void)_readPreferencesFromDefaults;
-(void)_checkForDingbatDuplicates;
-(void)_cleanUpOldFlagsCaches;
-(BOOL)shouldCountEmojiStringForUsageHistory:(id)arg1 ;
-(double)scoreForSequence:(long long)arg1 ;
-(double)scoreForEmojiString:(id)arg1 ;
-(NSArray *)allRecents;
-(void)migrateFromMajorOSVersion:(long long)arg1 ;
-(void)_pruneInvalidEmojiFromHistory;
-(void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2 typingNames:(id)arg3 ;
-(void)migrateInSkinTonePreferences:(id)arg1 ;
-(void)migrateInPreviouslyUsedCategory:(id)arg1 ;
-(void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1 ;
-(void)migrateInDidDisplaySkinToneHelp:(BOOL)arg1 ;
-(id)recentVariantEmojiForEmoji:(id)arg1 ;
-(void)_setRecentStrings:(id)arg1 ;
-(id)init;
-(BOOL)hasDisplayedSkinToneHelp;
-(void)didDisplaySkinToneHelp;
-(void)writeEmojiDefaults;
-(void)readEmojiDefaults;
-(unsigned long long)maximumRecentsCount;
-(void)setMaximumRecentsCount:(unsigned long long)arg1 ;
-(void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2 ;
-(unsigned long long)previouslyUsedIndexInCategory:(id)arg1 ;
-(NSArray *)recentEmojis;
-(BOOL)hasLastUsedVariantForEmoji:(id)arg1 ;
-(id)lastUsedVariantEmojiForEmoji:(id)arg1 ;
-(NSString *)previouslyUsedCategory;
-(id)typingNameForEmoji:(id)arg1 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 ;
@end

