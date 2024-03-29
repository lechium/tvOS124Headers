/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource
+(id)sharedStoreArtworkDataSource;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)wantsBackgroundImageDecompression;
-(id)_bestURLForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)_bestLookupItemArtworkForCatalog:(id)arg1 size:(CGSize)arg2 ;
@end

