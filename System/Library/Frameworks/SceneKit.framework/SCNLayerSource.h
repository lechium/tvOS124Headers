/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer;

@interface SCNLayerSource : SCNImageSource {

	CALayer* _layer;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(id)textureSource;
-(void)dealloc;
-(CALayer *)layer;
-(BOOL)isOpaque;
-(void)setLayer:(CALayer *)arg1 ;
@end

