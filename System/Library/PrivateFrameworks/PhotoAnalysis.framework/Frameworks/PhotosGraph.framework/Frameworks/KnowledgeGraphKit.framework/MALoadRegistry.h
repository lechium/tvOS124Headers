/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MADatabase, MAGraph, MALoadRequirement, NSMutableArray, NSMutableSet, NSObject;

@interface MALoadRegistry : NSObject {

	MADatabase* _database;
	MAGraph* _graph;
	MALoadRequirement* _unionOfRequirements;
	NSMutableArray* _pendingNodeRequirements;
	NSMutableSet* _loadedNodeRequirements;
	NSMutableArray* _pendingEdgeRequirements;
	NSMutableSet* _loadedEdgeRequirements;
	NSMutableSet* _registeredLoadRequirements;
	NSMutableSet* _deregisteredLoadRequirements;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	Ai _transactionCount;
	AB _purgeInProgress;

}

@property (nonatomic,retain) MADatabase * database;                                    //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) MAGraph * graph;                                          //@synthesize graph=_graph - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingNodeRequirements;                 //@synthesize pendingNodeRequirements=_pendingNodeRequirements - In the implementation block
@property (nonatomic,retain) NSMutableSet * loadedNodeRequirements;                    //@synthesize loadedNodeRequirements=_loadedNodeRequirements - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEdgeRequirements;                 //@synthesize pendingEdgeRequirements=_pendingEdgeRequirements - In the implementation block
@property (nonatomic,retain) NSMutableSet * loadedEdgeRequirements;                    //@synthesize loadedEdgeRequirements=_loadedEdgeRequirements - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredLoadRequirements;                //@synthesize registeredLoadRequirements=_registeredLoadRequirements - In the implementation block
@property (nonatomic,retain) NSMutableSet * deregisteredLoadRequirements;              //@synthesize deregisteredLoadRequirements=_deregisteredLoadRequirements - In the implementation block
-(MAGraph *)graph;
-(void)setGraph:(MAGraph *)arg1 ;
-(void)registerAlreadyLoadedProperties:(id)arg1 forNode:(id)arg2 ;
-(void)registerAlreadyLoadedProperties:(id)arg1 forEdge:(id)arg2 ;
-(id)initWithGraph:(id)arg1 database:(id)arg2 ;
-(void)loadProperties:(id)arg1 forNodes:(id)arg2 ;
-(void)loadProperties:(id)arg1 forEdges:(id)arg2 ;
-(void)purgePropertiesForKeys:(id)arg1 nodes:(id)arg2 ;
-(void)purgePropertiesForKeys:(id)arg1 edges:(id)arg2 ;
-(NSMutableSet *)loadedNodeRequirements;
-(NSMutableSet *)loadedEdgeRequirements;
-(NSMutableSet *)registeredLoadRequirements;
-(NSMutableSet *)deregisteredLoadRequirements;
-(void)purgeLoadRequirementPart:(id)arg1 ;
-(void)setLoadedNodeRequirements:(NSMutableSet *)arg1 ;
-(void)setLoadedEdgeRequirements:(NSMutableSet *)arg1 ;
-(void)purgeLoadRequirements;
-(NSMutableArray *)pendingNodeRequirements;
-(NSMutableArray *)pendingEdgeRequirements;
-(void)implementLoadRequirementPart:(id)arg1 ;
-(id)propertyValue:(id)arg1 ;
-(void)registerLoadRequirement:(id)arg1 ;
-(void)registerAlreadyLoadedLoadRequirement:(id)arg1 ;
-(void)unregisterLoadRequirement:(id)arg1 ;
-(void)loadPropertyRequirements;
-(void)loadPropertyRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(void)setPendingNodeRequirements:(NSMutableArray *)arg1 ;
-(void)setPendingEdgeRequirements:(NSMutableArray *)arg1 ;
-(void)setRegisteredLoadRequirements:(NSMutableSet *)arg1 ;
-(void)setDeregisteredLoadRequirements:(NSMutableSet *)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(MADatabase *)database;
-(void)setDatabase:(MADatabase *)arg1 ;
@end

