/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface VNCluster : NSObject {

	BOOL _shouldUpdateRepresentative;
	NSArray* _objects;
	unsigned long long _clusterId;
	unsigned long long _totalObjectCount;
	NSArray* _suggestedIdsForRepresentative;
	NSDictionary* _representativenessById;

}

@property (nonatomic,retain) NSArray * objects;                                    //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) unsigned long long clusterId;                         //@synthesize clusterId=_clusterId - In the implementation block
@property (assign,nonatomic) unsigned long long totalObjectCount;                  //@synthesize totalObjectCount=_totalObjectCount - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateRepresentative;                      //@synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative - In the implementation block
@property (nonatomic,retain) NSArray * suggestedIdsForRepresentative;              //@synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative - In the implementation block
@property (nonatomic,retain) NSDictionary * representativenessById;                //@synthesize representativenessById=_representativenessById - In the implementation block
-(void)setClusterId:(unsigned long long)arg1 ;
-(void)setShouldUpdateRepresentative:(BOOL)arg1 ;
-(void)setSuggestedIdsForRepresentative:(NSArray *)arg1 ;
-(void)setTotalObjectCount:(unsigned long long)arg1 ;
-(unsigned long long)clusterId;
-(unsigned long long)totalObjectCount;
-(BOOL)shouldUpdateRepresentative;
-(NSArray *)suggestedIdsForRepresentative;
-(NSDictionary *)representativenessById;
-(void)setRepresentativenessById:(NSDictionary *)arg1 ;
-(NSArray *)objects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setObjects:(NSArray *)arg1 ;
@end

