/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/MDLMaterialPropertyNode.h>

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {

	NSArray* _nodes;
	NSArray* _connections;
	NSMutableArray* _finalNodes;

}

@property (nonatomic,readonly) NSArray * nodes;                    //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSArray * connections;              //@synthesize connections=_connections - In the implementation block
-(NSArray *)connections;
-(id)initWithNodes:(id)arg1 connections:(id)arg2 ;
-(NSArray *)nodes;
-(void)evaluate;
@end

