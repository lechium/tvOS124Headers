/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibrary, NSArray, MPModelKind;

@interface MPMediaLibraryEntityTranslationContext : NSObject {

	BOOL _multiQuery;
	MPMediaLibrary* _mediaLibrary;
	NSArray* _allowedEntityIdentifiers;
	NSArray* _scopedContainers;
	unsigned long long _filteringOptions;
	MPModelKind* _modelKind;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSArray * allowedEntityIdentifiers;               //@synthesize allowedEntityIdentifiers=_allowedEntityIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * scopedContainers;                       //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,getter=isMultiQuery,nonatomic) BOOL multiQuery;              //@synthesize multiQuery=_multiQuery - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;              //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (nonatomic,retain) MPModelKind * modelKind;                          //@synthesize modelKind=_modelKind - In the implementation block
-(unsigned long long)filteringOptions;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(void)setModelKind:(MPModelKind *)arg1 ;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(NSArray *)scopedContainers;
-(void)setAllowedEntityIdentifiers:(NSArray *)arg1 ;
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(void)setMultiQuery:(BOOL)arg1 ;
-(MPModelKind *)modelKind;
-(NSArray *)allowedEntityIdentifiers;
-(BOOL)isMultiQuery;
@end
