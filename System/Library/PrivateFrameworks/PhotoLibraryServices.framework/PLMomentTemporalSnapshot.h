/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentTemporalSnapshot : NSObject {

	NSMutableSet* __nodes;
	double __range;
	double __distance;

}

@property (nonatomic,readonly) NSMutableSet * nodes;              //@synthesize _nodes=__nodes - In the implementation block
@property (nonatomic,readonly) double range;                      //@synthesize _range=__range - In the implementation block
@property (nonatomic,readonly) double distance;                   //@synthesize _distance=__distance - In the implementation block
-(double)distance;
-(NSMutableSet *)nodes;
-(id)initWithNodes:(id)arg1 inRange:(double)arg2 ;
-(void)dealloc;
-(double)range;
@end
