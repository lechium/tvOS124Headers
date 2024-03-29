/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CLLocation, NSArray, NSSet, NSDictionary;

@interface PGMemoryOptions : NSObject {

	unsigned long long _reason;
	NSDate* _universalDate;
	CLLocation* _location;
	NSArray* _peopleNames;
	NSArray* _existingMemories;
	NSArray* _blacklistedMemories;
	NSSet* _blacklistedFeatures;
	NSArray* _existingSuggestions;
	unsigned long long _precision;
	NSDate* _lastMemoryCreationUniversalDate;
	NSDate* _baseMemoryCreationUniversalDate;
	NSDictionary* _extraParameters;
	unsigned long long _randomSeed;
	double _forcedBeta;

}

@property (assign) unsigned long long reason;                                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSDate * universalDate;                                //@synthesize universalDate=_universalDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * peopleNames;                                 //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,retain) NSArray * existingMemories;                            //@synthesize existingMemories=_existingMemories - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedMemories;                         //@synthesize blacklistedMemories=_blacklistedMemories - In the implementation block
@property (nonatomic,retain) NSSet * blacklistedFeatures;                           //@synthesize blacklistedFeatures=_blacklistedFeatures - In the implementation block
@property (nonatomic,retain) NSArray * existingSuggestions;                         //@synthesize existingSuggestions=_existingSuggestions - In the implementation block
@property (assign,nonatomic) unsigned long long precision;                          //@synthesize precision=_precision - In the implementation block
@property (nonatomic,retain) NSDate * lastMemoryCreationUniversalDate;              //@synthesize lastMemoryCreationUniversalDate=_lastMemoryCreationUniversalDate - In the implementation block
@property (nonatomic,retain) NSDate * baseMemoryCreationUniversalDate;              //@synthesize baseMemoryCreationUniversalDate=_baseMemoryCreationUniversalDate - In the implementation block
@property (nonatomic,retain) NSDictionary * extraParameters;                        //@synthesize extraParameters=_extraParameters - In the implementation block
@property (assign,nonatomic) unsigned long long randomSeed;                         //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign,nonatomic) double forcedBeta;                                     //@synthesize forcedBeta=_forcedBeta - In the implementation block
+(id)stringForReason:(unsigned long long)arg1 ;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(NSArray *)blacklistedMemories;
-(void)setBlacklistedMemories:(NSArray *)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(id)initWithReason:(unsigned long long)arg1 universalDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4 ;
-(void)setUniversalDate:(NSDate *)arg1 ;
-(NSDate *)universalDate;
-(NSSet *)blacklistedFeatures;
-(void)setBlacklistedFeatures:(NSSet *)arg1 ;
-(NSArray *)existingSuggestions;
-(void)setExistingSuggestions:(NSArray *)arg1 ;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(NSDate *)lastMemoryCreationUniversalDate;
-(void)setLastMemoryCreationUniversalDate:(NSDate *)arg1 ;
-(NSDate *)baseMemoryCreationUniversalDate;
-(void)setBaseMemoryCreationUniversalDate:(NSDate *)arg1 ;
-(unsigned long long)randomSeed;
-(void)setRandomSeed:(unsigned long long)arg1 ;
-(double)forcedBeta;
-(void)setForcedBeta:(double)arg1 ;
-(id)description;
-(unsigned long long)reason;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

