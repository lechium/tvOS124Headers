/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityFetchOperation.h>

@interface TVHKMediaEntityManualFetchOperation : TVHKMediaEntityFetchOperation {

	/*^block*/id _fetchMediaEntitiesBlock;

}

@property (nonatomic,copy) id fetchMediaEntitiesBlock;              //@synthesize fetchMediaEntitiesBlock=_fetchMediaEntitiesBlock - In the implementation block
-(void)setFetchMediaEntitiesBlock:(id)arg1 ;
-(void)_fetchMediaEntities;
-(void)_completeFetchWithMediaEntities:(id)arg1 error:(id)arg2 ;
-(id)fetchMediaEntitiesBlock;
-(id)_mediaEntityFetchResponseWithMediaEntities:(id)arg1 ;
-(BOOL)_shouldGenerateSortHeaders;
-(id)_sortHeadersForMediaEntities:(id)arg1 ;
-(void)executionDidBegin;
-(void)_processPredicate;
@end

