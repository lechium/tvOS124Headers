/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIDataSourceSnapshotter : NSObject <NSCopying> {

	NSRange* _sectionRanges;
	long long _sectionCount;

}
+(id)snapshotForDataSourceBackedView:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfItems;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(BOOL)indexPathIsSectionAppendingInsert:(id)arg1 ;
-(id)indexPathForAppendingInsertInSection:(long long)arg1 ;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(id)initWithDataSourceBackedView:(id)arg1 ;
-(BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(void)_recomputeRangeLocations;
-(BOOL)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(id)initWithSectionCounts:(id)arg1 ;
-(NSRange)rangeForSection:(long long)arg1 ;
-(long long)sectionForGlobalIndex:(long long)arg1 ;
-(BOOL)_decrementSectionCount:(long long)arg1 ;
-(BOOL)_deleteSection:(long long)arg1 ;
-(BOOL)_incrementSectionCount:(long long)arg1 ;
-(BOOL)_insertSection:(long long)arg1 withInitialCount:(long long)arg2 ;
@end

