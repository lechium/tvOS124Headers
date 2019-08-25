/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable <NSCopying> {

	long long _persistentId;
	long long _storeId;
	MIPArtist* _artist;
	NSString* _artworkId;
	NSString* _cloudId;
	NSString* _name;
	int _numDiscs;
	int _numTracks;
	NSString* _sortName;
	int _userRating;
	BOOL _compilation;
	SCD_Struct_MI14 _has;

}

@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                   //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSortName; 
@property (nonatomic,retain) NSString * sortName;                 //@synthesize sortName=_sortName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                  //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) BOOL hasNumTracks; 
@property (assign,nonatomic) int numTracks;                       //@synthesize numTracks=_numTracks - In the implementation block
@property (assign,nonatomic) BOOL hasNumDiscs; 
@property (assign,nonatomic) int numDiscs;                        //@synthesize numDiscs=_numDiscs - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) BOOL hasUserRating; 
@property (assign,nonatomic) int userRating;                      //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) BOOL hasCompilation; 
@property (assign,nonatomic) BOOL compilation;                    //@synthesize compilation=_compilation - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentId; 
@property (assign,nonatomic) long long persistentId;              //@synthesize persistentId=_persistentId - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudId; 
@property (nonatomic,retain) NSString * cloudId;                  //@synthesize cloudId=_cloudId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasArtist;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasUserRating:(BOOL)arg1 ;
-(BOOL)hasUserRating;
-(long long)persistentId;
-(void)setHasStoreId:(BOOL)arg1 ;
-(void)setPersistentId:(long long)arg1 ;
-(void)setHasPersistentId:(BOOL)arg1 ;
-(BOOL)hasPersistentId;
-(void)setSortName:(NSString *)arg1 ;
-(BOOL)hasSortName;
-(void)setArtworkId:(NSString *)arg1 ;
-(BOOL)hasArtworkId;
-(NSString *)artworkId;
-(void)setCloudId:(NSString *)arg1 ;
-(void)setNumTracks:(int)arg1 ;
-(void)setHasNumTracks:(BOOL)arg1 ;
-(BOOL)hasNumTracks;
-(void)setNumDiscs:(int)arg1 ;
-(void)setHasNumDiscs:(BOOL)arg1 ;
-(BOOL)hasNumDiscs;
-(void)setHasCompilation:(BOOL)arg1 ;
-(BOOL)hasCompilation;
-(BOOL)hasCloudId;
-(int)numTracks;
-(int)numDiscs;
-(BOOL)compilation;
-(NSString *)cloudId;
-(MIPArtist *)artist;
-(void)setArtist:(MIPArtist *)arg1 ;
-(int)userRating;
-(void)setCompilation:(BOOL)arg1 ;
-(void)setUserRating:(int)arg1 ;
-(BOOL)hasStoreId;
-(long long)storeId;
-(NSString *)sortName;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

