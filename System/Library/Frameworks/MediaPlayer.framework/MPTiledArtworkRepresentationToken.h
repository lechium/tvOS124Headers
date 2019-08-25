/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSArray;

@interface MPTiledArtworkRepresentationToken : NSObject {

	id<NSCopying> _revisionIdentifier;
	NSArray* _tileArtworkVisualIdenticalityIdentifiers;

}

@property (nonatomic,copy) id<NSCopying> revisionIdentifier;                                //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * tileArtworkVisualIdenticalityIdentifiers;              //@synthesize tileArtworkVisualIdenticalityIdentifiers=_tileArtworkVisualIdenticalityIdentifiers - In the implementation block
-(id<NSCopying>)revisionIdentifier;
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
-(NSArray *)tileArtworkVisualIdenticalityIdentifiers;
-(void)setTileArtworkVisualIdenticalityIdentifiers:(NSArray *)arg1 ;
@end
