/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSDate, PGManager, NSObject, NSArray, PGSuggestionNotificationProfile, PHPhotoLibrary;

@interface PGSuggestionSession : NSObject {

	NSDate* _universalToday;
	unsigned char _profile;
	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	NSArray* _existingSuggestions;
	NSArray* _existingMemories;
	PGSuggestionNotificationProfile* _notificationProfile;

}

@property (nonatomic,readonly) unsigned char profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PGManager * graphManager;                                           //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;                             //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,retain) NSArray * existingSuggestions;                                        //@synthesize existingSuggestions=_existingSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * existingMemories;                                           //@synthesize existingMemories=_existingMemories - In the implementation block
@property (nonatomic,readonly) PGSuggestionNotificationProfile * notificationProfile;              //@synthesize notificationProfile=_notificationProfile - In the implementation block
@property (nonatomic,readonly) NSArray * assetPropertySetsForCuration; 
+(id)suggestionTypesWithProfile:(unsigned char)arg1 ;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(NSObject*<OS_os_log>)loggingConnection;
-(NSArray *)assetPropertySetsForCuration;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(NSArray *)existingSuggestions;
-(void)setExistingSuggestions:(NSArray *)arg1 ;
-(PGManager *)graphManager;
-(PGSuggestionNotificationProfile *)notificationProfile;
-(BOOL)outstanderSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(BOOL)singleAssetSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 ;
-(BOOL)suggestion:(id)arg1 collidesWithSuggestion:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(id)anySuggestionCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(id)suggesterClasses;
-(BOOL)suggesterClass:(Class)arg1 supportsOptions:(id)arg2 ;
-(id)electedSuggestionsFromSuggestions:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)activeSuggestersWithOptions:(id)arg1 ;
-(id)bestSuggestionBetween:(id)arg1 and:(id)arg2 ;
-(BOOL)supportsRelaxedCollisionRulesForSuggester:(id)arg1 ;
-(id)initWithProfile:(unsigned char)arg1 graphManager:(id)arg2 ;
-(BOOL)suggestion:(id)arg1 collidesWithMemories:(id)arg2 ;
-(id)coordinatedSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)uncoordinatedSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(unsigned char)profile;
@end

