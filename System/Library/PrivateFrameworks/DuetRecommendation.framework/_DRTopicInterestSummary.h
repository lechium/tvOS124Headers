/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetRecommendation/DuetRecommendation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying> {

	unsigned long long _topicSelectionsCount;
	unsigned long long _topicPresentationsCount;

}

@property (assign) unsigned long long topicPresentationsCount;              //@synthesize topicPresentationsCount=_topicPresentationsCount - In the implementation block
@property (assign) unsigned long long topicSelectionsCount;                 //@synthesize topicSelectionsCount=_topicSelectionsCount - In the implementation block
-(id)initWithPresentationsCount:(unsigned long long)arg1 selectionsCount:(unsigned long long)arg2 ;
-(unsigned long long)topicSelectionsCount;
-(unsigned long long)topicPresentationsCount;
-(void)setTopicPresentationsCount:(unsigned long long)arg1 ;
-(void)setTopicSelectionsCount:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
