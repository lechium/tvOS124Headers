/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface _UIFocusMapSearchInfo : NSObject {

	BOOL _didFindFocusBlockingBoundary;
	NSMutableArray* _mutableSnapshots;
	NSMutableArray* _mutableDestinationRegions;

}

@property (nonatomic,retain) NSMutableArray * mutableSnapshots;                       //@synthesize mutableSnapshots=_mutableSnapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDestinationRegions;              //@synthesize mutableDestinationRegions=_mutableDestinationRegions - In the implementation block
@property (assign,nonatomic) BOOL didFindFocusBlockingBoundary;                       //@synthesize didFindFocusBlockingBoundary=_didFindFocusBlockingBoundary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapshots; 
@property (nonatomic,copy,readonly) NSArray * destinationRegions; 
-(id)init;
-(NSArray *)destinationRegions;
-(void)addSnapshot:(id)arg1 ;
-(void)addDestinationRegion:(id)arg1 ;
-(void)setDidFindFocusBlockingBoundary:(BOOL)arg1 ;
-(NSMutableArray *)mutableSnapshots;
-(NSMutableArray *)mutableDestinationRegions;
-(NSArray *)snapshots;
-(BOOL)didFindFocusBlockingBoundary;
-(void)setMutableSnapshots:(NSMutableArray *)arg1 ;
-(void)setMutableDestinationRegions:(NSMutableArray *)arg1 ;
@end
