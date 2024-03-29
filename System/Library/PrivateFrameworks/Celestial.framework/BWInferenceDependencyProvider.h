/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSDictionary, NSSet, NSArray;

@interface BWInferenceDependencyProvider : NSObject {

	NSMapTable* _dependenciesByInputVideoRequirements;
	NSMapTable* _dependenciesByOutputVideoRequirements;
	NSDictionary* _providedVideoRequirementsByAttachedMediaKey;
	NSSet* _consumedVideoAttachedMediaKeys;

}

@property (nonatomic,readonly) NSMapTable * dependenciesByInputVideoRequirements;                     //@synthesize dependenciesByInputVideoRequirements=_dependenciesByInputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSMapTable * dependenciesByOutputVideoRequirements;                    //@synthesize dependenciesByOutputVideoRequirements=_dependenciesByOutputVideoRequirements - In the implementation block
@property (nonatomic,retain) NSDictionary * providedVideoRequirementsByAttachedMediaKey;              //@synthesize providedVideoRequirementsByAttachedMediaKey=_providedVideoRequirementsByAttachedMediaKey - In the implementation block
@property (nonatomic,retain) NSSet * consumedVideoAttachedMediaKeys;                                  //@synthesize consumedVideoAttachedMediaKeys=_consumedVideoAttachedMediaKeys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allInputVideoDependencies; 
@property (nonatomic,copy,readonly) NSArray * allOutputVideoDependencies; 
-(NSDictionary *)providedVideoRequirementsByAttachedMediaKey;
-(NSArray *)allInputVideoDependencies;
-(NSArray *)allOutputVideoDependencies;
-(NSSet *)consumedVideoAttachedMediaKeys;
-(id)dependenciesForInputVideoRequirement:(id)arg1 ;
-(id)dependenciesForOutputVideoRequirement:(id)arg1 ;
-(NSMapTable *)dependenciesByInputVideoRequirements;
-(NSMapTable *)dependenciesByOutputVideoRequirements;
-(void)setProvidedVideoRequirementsByAttachedMediaKey:(NSDictionary *)arg1 ;
-(void)setConsumedVideoAttachedMediaKeys:(NSSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

