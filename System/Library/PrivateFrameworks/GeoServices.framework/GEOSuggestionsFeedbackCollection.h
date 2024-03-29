/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteEntry, NSData;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	GEOPDAutocompleteEntry* _suggestionEntry;
	int _suggestionEntryIndex;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	int _suggestionsEntryListIndex;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsEntryListIndex; 
@property (assign,nonatomic) int suggestionsEntryListIndex;                         //@synthesize suggestionsEntryListIndex=_suggestionsEntryListIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex;                              //@synthesize suggestionEntryIndex=_suggestionEntryIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                           //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry;              //@synthesize suggestionEntry=_suggestionEntry - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(GEOSessionID)sessionID;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(void)setHasSuggestionsEntryListIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionsEntryListIndex;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryIndex;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)hasSuggestionEntry;
-(int)suggestionsEntryListIndex;
-(int)suggestionEntryIndex;
-(NSData *)suggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

