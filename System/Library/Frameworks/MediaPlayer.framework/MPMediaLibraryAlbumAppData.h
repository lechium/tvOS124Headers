/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface MPMediaLibraryAlbumAppData : NSObject {

	long long _version;
	NSDictionary* _appDataDict;
	NSMutableDictionary* _dirtyPopularityDict;

}

@property (nonatomic,readonly) long long version;              //@synthesize version=_version - In the implementation block
-(void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2 ;
-(id)songPopularityForAdamID:(long long)arg1 ;
-(id)initWithAppDataDictionary:(id)arg1 ;
-(void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2 ;
-(id)songPopularityForIdentifiers:(id)arg1 ;
-(id)createAppDataDictionary;
-(id)init;
-(long long)version;
@end

