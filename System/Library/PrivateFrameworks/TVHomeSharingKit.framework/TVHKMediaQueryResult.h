/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVHKMediaQueryResult : NSObject {

	NSArray* _objects;
	NSArray* _changes;
	NSArray* _sortHeaders;
	/*^block*/id _objectDescriptionBlock;

}

@property (nonatomic,copy) NSArray * objects;                      //@synthesize objects=_objects - In the implementation block
@property (nonatomic,copy) NSArray * changes;                      //@synthesize changes=_changes - In the implementation block
@property (nonatomic,copy) NSArray * sortHeaders;                  //@synthesize sortHeaders=_sortHeaders - In the implementation block
@property (nonatomic,copy) id objectDescriptionBlock;              //@synthesize objectDescriptionBlock=_objectDescriptionBlock - In the implementation block
-(NSArray *)changes;
-(NSArray *)objects;
-(void)setChanges:(NSArray *)arg1 ;
-(NSArray *)sortHeaders;
-(void)setSortHeaders:(NSArray *)arg1 ;
-(void)setObjectDescriptionBlock:(id)arg1 ;
-(id)_objectsDescription;
-(id)objectDescriptionBlock;
-(id)init;
-(id)description;
-(void)setObjects:(NSArray *)arg1 ;
@end

