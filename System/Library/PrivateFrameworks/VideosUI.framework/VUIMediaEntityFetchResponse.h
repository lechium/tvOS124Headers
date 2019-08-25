/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface VUIMediaEntityFetchResponse : NSObject <NSCopying> {

	NSArray* _mediaEntities;
	NSArray* _sortIndexes;
	NSArray* _grouping;
	NSArray* _groupingSortIndexes;
	unsigned long long _mediaEntitySubtype;

}

@property (assign,nonatomic) unsigned long long mediaEntitySubtype;              //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                              //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * sortIndexes;                                //@synthesize sortIndexes=_sortIndexes - In the implementation block
@property (nonatomic,copy) NSArray * grouping;                                   //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,copy) NSArray * groupingSortIndexes;                        //@synthesize groupingSortIndexes=_groupingSortIndexes - In the implementation block
-(void)setGrouping:(NSArray *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)mediaEntities;
-(BOOL)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3 ;
-(NSArray *)grouping;
-(NSArray *)sortIndexes;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)setSortIndexes:(NSArray *)arg1 ;
-(void)setMediaEntitySubtype:(unsigned long long)arg1 ;
-(void)setGroupingSortIndexes:(NSArray *)arg1 ;
-(NSArray *)groupingSortIndexes;
-(unsigned long long)mediaEntitySubtype;
@end

