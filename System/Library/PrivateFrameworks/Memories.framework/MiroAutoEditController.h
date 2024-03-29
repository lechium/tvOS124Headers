/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/MiroAutoEditDelegate.h>

@class Project, MiroMemory, MiroAutoEditLogger, NSMapTable, MovieController, MiroRandomNumberGenerator, MiroAutoEdit_TrimController, MiroAutoEditProjectPolish, NSString;

@interface MiroAutoEditController : NSObject <MiroAutoEditDelegate> {

	BOOL _shouldBuildMovieController;
	BOOL _shouldSkipPolish;
	MiroAutoEditLogger* _logger;
	NSMapTable* _trimRangeForClipMap;
	Project* _project;
	MiroMemory* _activeMemory;
	MovieController* _movieController;
	MiroRandomNumberGenerator* _kenBurnsRandomNumberGenerator;
	MiroAutoEdit_TrimController* _trimController;
	MiroAutoEditProjectPolish* _polisher;

}

@property (nonatomic,retain) MiroAutoEdit_TrimController * trimController;                           //@synthesize trimController=_trimController - In the implementation block
@property (nonatomic,retain) MiroAutoEditProjectPolish * polisher;                                   //@synthesize polisher=_polisher - In the implementation block
@property (nonatomic,retain) NSMapTable * trimRangeForClipMap;                                       //@synthesize trimRangeForClipMap=_trimRangeForClipMap - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;                                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) Project * project;                                                      //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) MiroMemory * activeMemory;                                              //@synthesize activeMemory=_activeMemory - In the implementation block
@property (assign,nonatomic) BOOL shouldBuildMovieController;                                        //@synthesize shouldBuildMovieController=_shouldBuildMovieController - In the implementation block
@property (nonatomic,retain) MovieController * movieController;                                      //@synthesize movieController=_movieController - In the implementation block
@property (nonatomic,retain) MiroRandomNumberGenerator * kenBurnsRandomNumberGenerator;              //@synthesize kenBurnsRandomNumberGenerator=_kenBurnsRandomNumberGenerator - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPolish;                                                  //@synthesize shouldSkipPolish=_shouldSkipPolish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL titleIsSupported; 
+(id)localImageRequestOptions;
+(CGSize)titleCardAssetSize;
-(MovieController *)movieController;
-(Project *)project;
-(void)setMovieController:(MovieController *)arg1 ;
-(void)autoEditProjectFromMemory:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setProject:(Project *)arg1 ;
-(void)setActiveMemory:(MiroMemory *)arg1 ;
-(MiroAutoEditLogger *)logger;
-(MiroMemory *)activeMemory;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(BOOL)shouldBuildMovieController;
-(void)setShouldBuildMovieController:(BOOL)arg1 ;
-(BOOL)shouldSkipPolish;
-(void)setPolisher:(MiroAutoEditProjectPolish *)arg1 ;
-(MiroAutoEditProjectPolish *)polisher;
-(id)_makePolisher;
-(MiroAutoEdit_TrimController *)trimController;
-(void)setTrimController:(MiroAutoEdit_TrimController *)arg1 ;
-(void)_finishPolisher;
-(BOOL)_applyBackgroundMusicWithClip:(id)arg1 ;
-(id)trimRangeForClip:(id)arg1 ;
-(BOOL)titleIsSupported;
-(void)autoEditToDuration:(int)arg1 ;
-(MiroRandomNumberGenerator *)kenBurnsRandomNumberGenerator;
-(void)applyAutomaticThemeTitleToFirstClip;
-(void)_incrementCountForKey:(id)arg1 inDictionary:(id)arg2 ;
-(BOOL)applyBackgroundMusicWithSong:(id)arg1 ;
-(BOOL)applyBackgroundMusicWithMediaItem:(id)arg1 ;
-(NSMapTable *)trimRangeForClipMap;
-(void)setTrimRangeForClipMap:(NSMapTable *)arg1 ;
-(void)setKenBurnsRandomNumberGenerator:(MiroRandomNumberGenerator *)arg1 ;
-(void)setShouldSkipPolish:(BOOL)arg1 ;
-(id)clipForAsset:(id)arg1 project:(id)arg2 ;
-(id)_addProjectPlaceholderWithScenes:(id)arg1 name:(id)arg2 progressHandler:(/*^block*/id)arg3 ;
-(void)applyMusic:(id)arg1 ;
-(id)_addPhotoAsset:(id)arg1 assetRep:(id)arg2 project:(id)arg3 ;
-(void)_applySpeedRangesToClip:(id)arg1 asset:(id)arg2 previousClip:(id)arg3 ;
-(void)_updateSelectedRangeOfClip:(id)arg1 withScene:(id)arg2 ;
-(void)setTrimRange:(id)arg1 forClip:(id)arg2 ;
-(void)_removeSpeedRampFromEndOfClip:(id)arg1 ;
-(void)_removeSpeedRampFromBeginningOfClip:(id)arg1 ;
@end

