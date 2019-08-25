/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlayerEntity.h>

@class NSString, MPModelGenericObject;

@interface MPCPlayerItem : MPCPlayerEntity {

	NSString* _albumName;
	NSString* _artistName;
	NSString* _composerName;
	MPModelGenericObject* _modelGenericObjectRepresentation;
	SCD_Struct_MP7 _durationSnapshot;

}

@property (nonatomic,readonly) MPModelGenericObject * modelGenericObjectRepresentation;              //@synthesize modelGenericObjectRepresentation=_modelGenericObjectRepresentation - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                                     //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * composerName;                                                  //@synthesize composerName=_composerName - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP7 durationSnapshot;                                      //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
-(void)setArtistName:(NSString *)arg1 ;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setComposerName:(NSString *)arg1 ;
-(NSString *)artistName;
-(NSString *)composerName;
-(id)initWithAVItem:(id)arg1 ;
-(MPModelGenericObject *)modelGenericObjectRepresentation;
-(SCD_Struct_MP7)durationSnapshot;
-(void)setRepresentations:(id)arg1 ;
-(long long)comparePlaybackOrder:(id)arg1 ;
@end

