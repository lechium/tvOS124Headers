/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/CAMLParserDelegate.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class NSString, CAStateController, CALayer;

@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate> {

	NSString* _state;
	NSString* _packageName;
	CAStateController* _stateController;
	long long _layoutDirection;
	CALayer* _rootLayer;
	CGSize _targetSize;
	CGSize _unscaledSize;

}

@property (nonatomic,readonly) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (assign,nonatomic) CGSize unscaledSize;                                //@synthesize unscaledSize=_unscaledSize - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                          //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,retain) CALayer * rootLayer;                                //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                  //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) NSString * packageName;                           //@synthesize packageName=_packageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classSubstitions;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2 ;
-(void)setState:(id)arg1 color:(CGColorRef)arg2 ;
-(id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2 ;
-(void)_recursivelySetFillColor:(CGColorRef)arg1 rootLayer:(id)arg2 ;
-(void)transitionToStateWithName:(id)arg1 ;
-(void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2 ;
-(id)availableStates;
-(id)availableStatesOnLayer:(id)arg1 ;
-(id)sublayerWithName:(id)arg1 ;
-(CGSize)unscaledSize;
-(void)setUnscaledSize:(CGSize)arg1 ;
-(NSString *)packageName;
-(CAStateController *)stateController;
-(NSString *)state;
-(long long)layoutDirection;
-(void)_setState:(id)arg1 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(CALayer *)rootLayer;
-(void)setRootLayer:(CALayer *)arg1 ;
@end

