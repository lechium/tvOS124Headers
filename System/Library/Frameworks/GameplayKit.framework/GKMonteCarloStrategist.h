/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKStrategist.h>

@class NSString;

@interface GKMonteCarloStrategist : NSObject <GKStrategist> {

	GKCMonteCarloStrategist* _monteCarloStrategist;

}

@property (assign,nonatomic) unsigned long long budget; 
@property (assign,nonatomic) unsigned long long explorationParameter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
-(void)setBudget:(unsigned long long)arg1 ;
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(BOOL)validateGameModel:(id)arg1 ;
-(unsigned long long)explorationParameter;
-(void)setExplorationParameter:(unsigned long long)arg1 ;
-(unsigned long long)budget;
-(id)init;
-(void)dealloc;
@end

