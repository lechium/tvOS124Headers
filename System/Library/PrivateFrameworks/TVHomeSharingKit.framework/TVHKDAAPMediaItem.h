/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaItem.h>

@class TVPContentRating, NSDate, TVHKGaplessConfiguration, NSString, TVHKMediaEntityType, TVHKVideoCredits, TVHKMediaEntityIdentifier, TVHSDMAPChangeTrackingEntity, TVHKDMAPMediaEntityIdentifier, NSDictionary;

@interface TVHKDAAPMediaItem : TVHKMediaItem {

	TVPContentRating* _contentRating;
	NSDate* _expirationDate;
	TVHKGaplessConfiguration* _gaplessConfiguration;
	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	TVHKVideoCredits* _videoCredits;
	TVHKMediaEntityIdentifier* _albumIdentifier;
	NSString* _albumTitle;
	NSString* _sortAlbumTitle;
	NSString* _albumDescription;
	TVHKMediaEntityIdentifier* _showIdentifier;
	TVHSDMAPChangeTrackingEntity* _changeTrackingEntity;
	TVHKDMAPMediaEntityIdentifier* _albumDMAPIdentifier;
	TVHKDMAPMediaEntityIdentifier* _albumArtistDMAPIdentifier;

}

@property (nonatomic,retain) TVHSDMAPChangeTrackingEntity * changeTrackingEntity;                  //@synthesize changeTrackingEntity=_changeTrackingEntity - In the implementation block
@property (nonatomic,copy) TVHKDMAPMediaEntityIdentifier * albumDMAPIdentifier;                    //@synthesize albumDMAPIdentifier=_albumDMAPIdentifier - In the implementation block
@property (nonatomic,copy) TVHKDMAPMediaEntityIdentifier * albumArtistDMAPIdentifier;              //@synthesize albumArtistDMAPIdentifier=_albumArtistDMAPIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * changedDMAPAttributeValues; 
-(void)setExpirationDate:(id)arg1 ;
-(id)expirationDate;
-(id)albumIdentifier;
-(id)albumTitle;
-(id)contentDescription;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(TVHSDMAPChangeTrackingEntity *)changeTrackingEntity;
-(id)sortAlbumTitle;
-(id)albumDescription;
-(TVHKDMAPMediaEntityIdentifier *)albumDMAPIdentifier;
-(unsigned long long)_albumPersistentID;
-(TVHKDMAPMediaEntityIdentifier *)albumArtistDMAPIdentifier;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 ;
-(NSDictionary *)changedDMAPAttributeValues;
-(void)updateMetadataWithAlbum:(id)arg1 ;
-(void)commitDMAPChanges;
-(id)albumArtistIdentifier;
-(id)gaplessConfiguration;
-(BOOL)supportsBookmark;
-(id)DRMKeyID;
-(id)videoCredits;
-(void)setChangeTrackingEntity:(TVHSDMAPChangeTrackingEntity *)arg1 ;
-(void)setAlbumDMAPIdentifier:(TVHKDMAPMediaEntityIdentifier *)arg1 ;
-(void)setAlbumArtistDMAPIdentifier:(TVHKDMAPMediaEntityIdentifier *)arg1 ;
-(id)type;
-(id)contentRating;
-(id)studio;
-(id)imageIdentifier;
-(id)showIdentifier;
@end

