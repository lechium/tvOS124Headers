/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, MDLAnimatedScalarArray;


@protocol MDLMorphDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * targetShapes; 
@property (nonatomic,readonly) NSArray * shapeSetTargetWeights; 
@property (nonatomic,readonly) NSArray * shapeSetTargetCounts; 
@property (nonatomic,readonly) MDLAnimatedScalarArray * weights; 
@required
-(MDLAnimatedScalarArray *)weights;
-(NSArray *)shapeSetTargetCounts;
-(NSArray *)targetShapes;
-(NSArray *)shapeSetTargetWeights;

@end

