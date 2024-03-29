/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying> {

	int _refineSearchType;
	NSString* _searchString;
	int _searchType;
	NSMutableArray* _suggestionItems;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType;                                //@synthesize searchType=_searchType - In the implementation block
@property (assign,nonatomic) BOOL hasRefineSearchType; 
@property (assign,nonatomic) int refineSearchType;                          //@synthesize refineSearchType=_refineSearchType - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                       //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestionItems;              //@synthesize suggestionItems=_suggestionItems - In the implementation block
+(Class)suggestionItemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(void)setRefineSearchType:(int)arg1 ;
-(void)addSuggestionItem:(id)arg1 ;
-(BOOL)hasSearchString;
-(int)searchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(unsigned long long)suggestionItemsCount;
-(void)clearSuggestionItems;
-(id)suggestionItemAtIndex:(unsigned long long)arg1 ;
-(int)refineSearchType;
-(void)setHasRefineSearchType:(BOOL)arg1 ;
-(BOOL)hasRefineSearchType;
-(id)refineSearchTypeAsString:(int)arg1 ;
-(int)StringAsRefineSearchType:(id)arg1 ;
-(NSMutableArray *)suggestionItems;
-(void)setSuggestionItems:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
@end

