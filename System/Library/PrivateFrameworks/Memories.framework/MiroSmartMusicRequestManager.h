/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/VEiOSSharedObject.h>

@class NSMutableDictionary, NSMutableArray, FMSongLibrary, NSSet, MiroAutoEditLogger, NSArray;

@interface MiroSmartMusicRequestManager : VEiOSSharedObject {

	BOOL _allowsDownloads;
	NSMutableDictionary* _localSongsByMood;
	NSMutableArray* _moodsDownloading;
	FMSongLibrary* _library;
	NSSet* _moodIDSet;
	double _initTime;
	MiroAutoEditLogger* _logger;
	NSArray* _observers;

}

@property (nonatomic,retain) NSMutableDictionary * localSongsByMood;              //@synthesize localSongsByMood=_localSongsByMood - In the implementation block
@property (nonatomic,retain) NSMutableArray * moodsDownloading;                   //@synthesize moodsDownloading=_moodsDownloading - In the implementation block
@property (nonatomic,readonly) FMSongLibrary * library;                           //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSSet * moodIDSet;                                   //@synthesize moodIDSet=_moodIDSet - In the implementation block
@property (assign,nonatomic) double initTime;                                     //@synthesize initTime=_initTime - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;                         //@synthesize logger=_logger - In the implementation block
@property (retain) NSArray * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL allowsDownloads;                                //@synthesize allowsDownloads=_allowsDownloads - In the implementation block
-(FMSongLibrary *)library;
-(void)_setup;
-(MiroAutoEditLogger *)logger;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(id)fetchSongWithUID:(id)arg1 ;
-(id)songLibrary;
-(id)fetchAllSongs;
-(id)randomSongUIDForMoodID:(id)arg1 ;
-(id)localSongsForMoodID:(id)arg1 ;
-(id)randomSongUIDForMoodID:(id)arg1 excludingSongs:(id)arg2 ;
-(id)randomSongUIDForKeywords:(id)arg1 ;
-(void)_removeObserversOnLibrary;
-(void)setLocalSongsByMood:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)localSongsByMood;
-(void)setMoodsDownloading:(NSMutableArray *)arg1 ;
-(void)setAllowsDownloads:(BOOL)arg1 ;
-(void)setMoodIDSet:(NSSet *)arg1 ;
-(void)_updateLocalSongsByMood;
-(void)_removeConflicts;
-(void)_downloadInProgressChanged:(id)arg1 ;
-(id)_fetchSongsWithKeywords:(id)arg1 ;
-(BOOL)songHasSpecialKeyword:(id)arg1 ;
-(id)_candidateSongsForMoodID:(id)arg1 ;
-(id)_randomSongUIDForCandidateSongs:(id)arg1 ;
-(id)_candidateSongMappingsForKeywords:(id)arg1 ;
-(id)_randomSongUIDForCandidateSongs:(id)arg1 withPrioritySet:(id)arg2 ;
-(id)_moodIDforSongUID:(id)arg1 ;
-(void)_requestDownloadForMoodID:(id)arg1 ;
-(NSMutableArray *)moodsDownloading;
-(BOOL)allowsDownloads;
-(void)setInitTime:(double)arg1 ;
-(id)_addObserversOnSongLibrary:(id)arg1 indicateNetworkActivity:(BOOL)arg2 ;
-(double)initTime;
-(NSSet *)moodIDSet;
-(void)loadAssetWithID:(id)arg1 forSongID:(id)arg2 ;
-(void)markSongUIDAsRequested:(id)arg1 ;
-(void)logSongLibraryInitTimeWithLogger:(id)arg1 ;
-(void)tearDownSongLibrary;
-(id)moodIDForSong:(id)arg1 ;
-(id)unusedLocalSongsForMoodID:(id)arg1 ;
-(void)purgeAllLocalCachedAssets;
-(id)init;
-(void)dealloc;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
@end

