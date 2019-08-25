/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGridGraphNode : GKGraphNode {

	GKCGridGraphNode* _cGridGraphNode;

}

@property (nonatomic,readonly)  gridPosition; 
+(id)nodeWithGridPosition:;
+(BOOL)supportsSecureCoding;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGridGraphNode*)cGridGraphNode;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)initWithGridPosition:;
-()gridPosition;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

