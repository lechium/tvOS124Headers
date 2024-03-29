/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray, _MRLyricsItemProtobuf, _MRContentItemMetadataProtobuf;

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {

	NSString* _ancestorIdentifier;
	NSData* _artworkData;
	int _artworkDataHeight;
	int _artworkDataWidth;
	NSMutableArray* _availableLanguageOptions;
	NSMutableArray* _currentLanguageOptions;
	NSString* _identifier;
	NSString* _info;
	_MRLyricsItemProtobuf* _lyrics;
	_MRContentItemMetadataProtobuf* _metadata;
	NSString* _parentIdentifier;
	NSString* _queueIdentifier;
	NSString* _requestIdentifier;
	NSMutableArray* _sections;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) _MRContentItemMetadataProtobuf * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkData; 
@property (nonatomic,retain) NSData * artworkData;                                   //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,readonly) BOOL hasInfo; 
@property (nonatomic,retain) NSString * info;                                        //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSMutableArray * availableLanguageOptions;              //@synthesize availableLanguageOptions=_availableLanguageOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentLanguageOptions;                //@synthesize currentLanguageOptions=_currentLanguageOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,retain) _MRLyricsItemProtobuf * lyrics;                         //@synthesize lyrics=_lyrics - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIdentifier; 
@property (nonatomic,retain) NSString * parentIdentifier;                            //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAncestorIdentifier; 
@property (nonatomic,retain) NSString * ancestorIdentifier;                          //@synthesize ancestorIdentifier=_ancestorIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasQueueIdentifier; 
@property (nonatomic,retain) NSString * queueIdentifier;                             //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkDataWidth; 
@property (assign,nonatomic) int artworkDataWidth;                                   //@synthesize artworkDataWidth=_artworkDataWidth - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkDataHeight; 
@property (assign,nonatomic) int artworkDataHeight;                                  //@synthesize artworkDataHeight=_artworkDataHeight - In the implementation block
+(Class)sectionsType;
+(Class)availableLanguageOptionsType;
+(Class)currentLanguageOptionsType;
+(void)initialize;
-(id)initWithData:(id)arg1 ;
-(id)init;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addSections:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIdentifier;
-(_MRContentItemMetadataProtobuf *)metadata;
-(void)setMetadata:(_MRContentItemMetadataProtobuf *)arg1 ;
-(BOOL)hasInfo;
-(id)_initWithData:(id)arg1 ;
-(void)addAvailableLanguageOptions:(id)arg1 ;
-(void)addCurrentLanguageOptions:(id)arg1 ;
-(unsigned long long)availableLanguageOptionsCount;
-(void)clearAvailableLanguageOptions;
-(id)availableLanguageOptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentLanguageOptionsCount;
-(void)clearCurrentLanguageOptions;
-(id)currentLanguageOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setAncestorIdentifier:(NSString *)arg1 ;
-(BOOL)hasArtworkData;
-(BOOL)hasAncestorIdentifier;
-(BOOL)hasQueueIdentifier;
-(BOOL)hasRequestIdentifier;
-(void)setArtworkDataWidth:(int)arg1 ;
-(void)setHasArtworkDataWidth:(BOOL)arg1 ;
-(BOOL)hasArtworkDataWidth;
-(void)setArtworkDataHeight:(int)arg1 ;
-(void)setHasArtworkDataHeight:(BOOL)arg1 ;
-(BOOL)hasArtworkDataHeight;
-(NSString *)ancestorIdentifier;
-(int)artworkDataWidth;
-(int)artworkDataHeight;
-(NSString *)parentIdentifier;
-(NSString *)requestIdentifier;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(NSString *)queueIdentifier;
-(_MRLyricsItemProtobuf *)lyrics;
-(void)setLyrics:(_MRLyricsItemProtobuf *)arg1 ;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(BOOL)hasLyrics;
-(void)setAvailableLanguageOptions:(NSMutableArray *)arg1 ;
-(void)setCurrentLanguageOptions:(NSMutableArray *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSMutableArray *)availableLanguageOptions;
-(NSMutableArray *)currentLanguageOptions;
-(BOOL)hasParentIdentifier;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)sections;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)info;
-(id)_init;
-(BOOL)hasMetadata;
-(void)copyTo:(id)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSMutableArray *)arg1 ;
@end

