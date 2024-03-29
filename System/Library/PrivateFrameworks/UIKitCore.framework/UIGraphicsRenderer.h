/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIGraphicsRendererFormat, _UIReusePool;

@interface UIGraphicsRenderer : NSObject {

	UIGraphicsRendererFormat* _format;
	_UIReusePool* _reusePool;

}

@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL allowsImageOutput; 
+(Class)rendererContextClass;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
+(BOOL)_supportsContextReuse;
+(CGContextRef)_contextWithFormat:(id)arg1 renderer:(id)arg2 ;
+(void)_destroyCGContext:(CGContextRef)arg1 withRenderer:(id)arg2 ;
-(id)init;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(void)pushContext:(id)arg1 ;
-(void)popContext:(id)arg1 ;
-(UIGraphicsRendererFormat *)format;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)allowsImageOutput;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 format:(id)arg3 error:(id*)arg4 ;
-(CGContextRef)_dequeueContextForReuse;
-(void)_prepareContextForReuse:(CGContextRef)arg1 ;
-(void)_configureReuseState;
-(id)initWithFormat:(id)arg1 bounds:(CGRect)arg2 ;
@end

