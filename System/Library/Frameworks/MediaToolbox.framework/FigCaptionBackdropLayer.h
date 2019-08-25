/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CABackdropLayer.h>

@class CAFilter;

@interface FigCaptionBackdropLayer : CABackdropLayer {

	CAFilter* backdropFilter;

}
+(unsigned char)isSupported;
+(void)initialize;
-(void)insertBackdropAsSublayerToLayer:(id)arg1 below:(id)arg2 ;
-(void)removeBackdropFromSuperLayer;
-(void)applyRoundedCorners:(CGPathRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)configure;
@end

