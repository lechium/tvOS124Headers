/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject {

	NSDictionary* _zeroKeyword;
	double _score;

}

@property (readonly) NSDictionary * zeroKeyword;              //@synthesize zeroKeyword=_zeroKeyword - In the implementation block
@property (readonly) double score;                            //@synthesize score=_score - In the implementation block
-(double)score;
-(id)initWithKeyword:(id)arg1 score:(double)arg2 ;
-(NSDictionary *)zeroKeyword;
-(BOOL)isEqual:(id)arg1 ;
@end

