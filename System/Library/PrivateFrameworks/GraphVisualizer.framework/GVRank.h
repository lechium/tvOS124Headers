/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableArray;

@interface GVRank : NSObject {

	NSMutableArray* nodes;
	double separation;
	GVRank* prev;
	GVRank* next;

}

@property (assign,nonatomic) GVRank * prev; 
@property (assign,nonatomic) GVRank * next; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
-(void)setNext:(GVRank *)arg1 ;
-(id)initWithSeparation:(CGSize)arg1 ;
-(void)sortByIndex;
-(void)exchangeNodeAtIndex:(unsigned long long)arg1 withNodeAtIndex:(unsigned long long)arg2 ;
-(void)buildNodeIterators;
-(unsigned long long)inCrossings;
-(unsigned long long)outCrossings;
-(CGSize)sizeForDummy;
-(void)centerNodesWithRespectoTo:(id)arg1 ;
-(void)centerNode:(id)arg1 at:(double)arg2 ;
-(id)nodes;
-(void)addNode:(id)arg1 ;
-(id)neighborsOfNode:(id)arg1 ;
-(GVRank *)next;
-(GVRank *)prev;
-(void)setPrev:(GVRank *)arg1 ;
-(void)dealloc;
-(double)width;
-(double)height;
-(void)removeNode:(id)arg1 ;
@end

