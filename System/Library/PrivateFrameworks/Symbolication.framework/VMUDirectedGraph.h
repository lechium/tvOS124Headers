/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface VMUDirectedGraph : NSObject <NSCopying> {

	long long _graphCompatibilityVersion;
	long long _graphVersion;
	unsigned _nodeCount;
	unsigned _edgeCount;
	unsigned _edgeCapacity;
	unsigned _externalEdges;
	void* _deadNodes;
	unsigned _nextNodeName;
	unsigned _nextEdgeName;
	unsigned* _nodeAdjIndex;
	VMUDirectedGraphEdge* _edges;
	NSDictionary* _additionalProperties;
	unsigned _indexedNodeSpace;
	unsigned _indexedEdges;
	int _insideSearch;
	BOOL _inverted;
	BOOL _graphIs64bit;

}

@property (assign,nonatomic) BOOL inverted; 
@property (nonatomic,copy) NSDictionary * additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (nonatomic,readonly) unsigned nodeCount;                           //@synthesize nodeCount=_nodeCount - In the implementation block
@property (nonatomic,readonly) unsigned edgeCount; 
@property (nonatomic,readonly) unsigned nodeNamespaceSize;                   //@synthesize nextNodeName=_nextNodeName - In the implementation block
@property (nonatomic,readonly) unsigned edgeNamespaceSize;                   //@synthesize nextEdgeName=_nextEdgeName - In the implementation block
@property (nonatomic,readonly) BOOL graphIs64bit;                            //@synthesize graphIs64bit=_graphIs64bit - In the implementation block
@property (nonatomic,readonly) unsigned pointerSize; 
+(id)_archivedBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)_archivedObject:(id)arg1 options:(unsigned long long)arg2 ;
+(void*)_copyUnarchived:(id)arg1 length:(unsigned long long*)arg2 options:(unsigned long long)arg3 ;
+(id)_unarchivedObject:(id)arg1 ofClass:(Class)arg2 options:(unsigned long long)arg3 ;
+(id)directedGraphWithData:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)additionalProperties;
-(void)setAdditionalProperties:(NSDictionary *)arg1 ;
-(BOOL)inverted;
-(void)setGraphVersion:(long long)arg1 ;
-(unsigned)nodeNamespaceSize;
-(unsigned)pointerSize;
-(id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 ;
-(void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_renameWithNodeMap:(unsigned*)arg1 nodeNamespace:(unsigned)arg2 edgeMap:(unsigned*)arg3 edgeNamespace:(unsigned)arg4 ;
-(void)_internalAccessRawEdgesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)_internalEnumerateEdgesOfNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithPlistRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)decapsulateIPSheaderInData:(id)arg1 error:(id*)arg2 ;
-(unsigned)edgeNamespaceSize;
-(BOOL)graphIs64bit;
-(void)_reorderEdgesNaturally;
-(void)_internalAddEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 withName:(unsigned)arg3 ;
-(void)_faultDeadNodeMap;
-(void)_removeEdges:(/*^block*/id)arg1 ;
-(unsigned)parentGroupForNode:(unsigned)arg1 ;
-(BOOL)_adjustAdjacencyMap;
-(void)_dfsCore:(unsigned)arg1 colors:(char*)arg2 visitBlock:(/*^block*/id)arg3 examineBlock:(/*^block*/id)arg4 ;
-(void)_searchMainLoop:(unsigned)arg1 action:(/*^block*/id)arg2 ;
-(void)_bfsCore:(unsigned)arg1 colors:(char*)arg2 visitBlock:(/*^block*/id)arg3 examineBlock:(/*^block*/id)arg4 ;
-(void)removeMarkedNodes:(void*)arg1 ;
-(void)_renormalize;
-(void)setGraphCompatibilityVersion:(long long)arg1 ;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(id)plistRepresentationWithOptions:(unsigned long long)arg1 ;
-(unsigned)addNode;
-(unsigned)addEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 ;
-(void*)_deadNodeMap;
-(void)removeMarkedEdges:(void*)arg1 ;
-(BOOL)isNodePresent:(unsigned)arg1 ;
-(unsigned)addGroupNodeForNodes:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)ungroupNode:(unsigned)arg1 ;
-(unsigned)enumerateMembersOfGroupNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)enumerateEdgesOfNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)withNodeMarkingMap:(/*^block*/id)arg1 ;
-(void)withEdgeMarkingMap:(/*^block*/id)arg1 ;
-(void)depthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/id)arg2 edgeVisitBlock:(/*^block*/id)arg3 ;
-(void)breadthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/id)arg2 edgeVisitBlock:(/*^block*/id)arg3 ;
-(void)_dumpAdjacencyList;
-(void)invertEdges;
-(id)subgraphWithMarkedNodes:(void*)arg1 ;
-(id)renormalizedGraph;
-(id)invertedGraph;
-(id)initWithNodes:(unsigned)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)nodeCount;
-(unsigned)edgeCount;
-(unsigned)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)setInverted:(BOOL)arg1 ;
@end

