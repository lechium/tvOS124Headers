/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet;

@interface PGSocialGroupMemoryGenerator : PGFeaturedMemoryGenerator {

	long long _socialGroupID;
	long long _year;
	NSSet* _extraFeatures;

}

@property (assign,nonatomic) long long socialGroupID;              //@synthesize socialGroupID=_socialGroupID - In the implementation block
@property (assign,nonatomic) long long year;                       //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) NSSet * extraFeatures;                //@synthesize extraFeatures=_extraFeatures - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)setSocialGroupID:(long long)arg1 ;
-(NSSet *)extraFeatures;
-(void)setExtraFeatures:(NSSet *)arg1 ;
-(void)_potentialMemoriesWithSocialGroupNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
-(long long)socialGroupID;
-(long long)year;
-(void)setYear:(long long)arg1 ;
@end

