/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation {

	NSArray* _identifiersToIndex;

}

@property (nonatomic,copy) NSArray * identifiersToIndex;              //@synthesize identifiersToIndex=_identifiersToIndex - In the implementation block
-(id)objectIDsToIndexFromDataSource:(id)arg1 ;
-(id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 identifiersToIndex:(id)arg3 ;
-(void)setIdentifiersToIndex:(NSArray *)arg1 ;
-(NSArray *)identifiersToIndex;
@end
