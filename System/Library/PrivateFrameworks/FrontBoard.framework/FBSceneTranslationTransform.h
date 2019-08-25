/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneTranslationTransform : FBSceneTransform {

	CGPoint _translation;

}

@property (assign,nonatomic) CGPoint translation;              //@synthesize translation=_translation - In the implementation block
-(void)_updateTransform;
-(id)initWithTranslation:(CGPoint)arg1 ;
-(id)description;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end

