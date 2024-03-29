/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, VUICollectionChangeSet;

@interface VUICollectionChange : NSObject {

	unsigned long long _changeKind;
	NSIndexSet* _sourceIndexes;
	NSIndexSet* _destinationIndexes;
	VUICollectionChangeSet* _updateChangeSet;

}

@property (nonatomic,readonly) unsigned long long changeKind;                       //@synthesize changeKind=_changeKind - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sourceIndexes;                     //@synthesize sourceIndexes=_sourceIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * destinationIndexes;                //@synthesize destinationIndexes=_destinationIndexes - In the implementation block
@property (nonatomic,retain) VUICollectionChangeSet * updateChangeSet;              //@synthesize updateChangeSet=_updateChangeSet - In the implementation block
-(unsigned long long)changeKind;
-(id)init;
-(id)description;
-(id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3 ;
-(void)setUpdateChangeSet:(VUICollectionChangeSet *)arg1 ;
-(NSIndexSet *)sourceIndexes;
-(NSIndexSet *)destinationIndexes;
-(VUICollectionChangeSet *)updateChangeSet;
@end

