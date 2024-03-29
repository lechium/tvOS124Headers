/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLContainerRelation;

@interface CPLContainerRelationChange : CPLRecordChange {

	NSString* _itemIdentifier;
	CPLContainerRelation* _relation;

}

@property (nonatomic,copy) NSString * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) CPLContainerRelation * relation;              //@synthesize relation=_relation - In the implementation block
+(id)relationToContainerWithIdentifier:(id)arg1 ;
+(id)relationWithItemScopedIdentifier:(id)arg1 containerIdentifier:(id)arg2 ;
+(id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)setRelation:(CPLContainerRelation *)arg1 ;
-(BOOL)supportsDirectDeletion;
-(void)setItemScopedIdentifier:(id)arg1 ;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)containerScopedIdentifier;
-(void)setContainerScopedIdentifier:(id)arg1 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
-(id)scopedIdentifierForQuarantine;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4 ;
-(id)itemScopedIdentifier;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
-(id)secondaryIdentifier;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(id)description;
-(CPLContainerRelation *)relation;
@end

