/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSRecursiveLock;

@interface MPSongManager : NSObject {

	NSMutableDictionary* mSongDescriptions;
	NSMutableDictionary* mSongBeats;
	NSMutableDictionary* mSongMetaData;
	NSString* mSongCacheFilePath;
	NSRecursiveLock* mSongLock;
	void* mDaFunc;

}
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(id)cachedBeatsForSongAtPath:(id)arg1 ;
-(id)beatsForSongAtPath:(id)arg1 progressCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(BOOL)hasBeatsForSongAtPath:(id)arg1 ;
-(id)songMetadataForPath:(id)arg1 ;
-(void)storeBeats:(id)arg1 forPath:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

