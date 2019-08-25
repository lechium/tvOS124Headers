/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject {

	CPLRUDictionary* _itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
	NSMapTable* _itemIdentifierToCompositeStoreItemMetadataMapTable;

}

@property (nonatomic,readonly) long long count; 
-(id)initWithCacheSize:(long long)arg1 ;
-(id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id)metadataForItemIdentifier:(id)arg1 ;
-(void)removeExpiredMetadata;
-(long long)count;
@end
