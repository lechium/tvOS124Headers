/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAMetalDrawable.h>
@class CAMetalLayer;


@protocol CAMetalDrawable <MTLDrawable>
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
@required
-(id<MTLTexture>)texture;
-(CAMetalLayer *)layer;

@end

#import <libobjc.A.dylib/MTLDrawableSPI.h>

@protocol MTLTexture;
@class CAMetalLayer, NSMutableArray, NSString;

@interface CAMetalDrawable : NSObject <CAMetalDrawable, MTLDrawableSPI> {

	CAMetalDrawablePrivate* _priv;
	id<MTLTexture> _cachedTexture;
	CAMetalLayer* _layer;
	unsigned _insertSeed;
	NSMutableArray* _presentedHandlers;
	unsigned long long _status;
	double _presentedTime;
	unsigned long long _drawableID;
	BOOL _presentScheduledInsertSeedValid;
	unsigned _presentScheduledInsertSeed;
	NSMutableArray* _presentScheduledHandlers;

}

@property (assign,nonatomic) unsigned insertSeed;                               //@synthesize insertSeed=_insertSeed - In the implementation block
@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double presentedTime;                              //@synthesize presentedTime=_presentedTime - In the implementation block
@property (assign,nonatomic) unsigned long long drawableID;                     //@synthesize drawableID=_drawableID - In the implementation block
@property (assign,nonatomic) unsigned presentScheduledInsertSeed;               //@synthesize presentScheduledInsertSeed=_presentScheduledInsertSeed - In the implementation block
@property (assign,nonatomic) BOOL presentScheduledInsertSeedValid;              //@synthesize presentScheduledInsertSeedValid=_presentScheduledInsertSeedValid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
-(void)addPresentScheduledHandler:(/*^block*/id)arg1 ;
-(void)didPresentAtTime:(double)arg1 ;
-(BOOL)hasPresentedHandlers;
-(void)didScheduledPresent;
-(id)initWithDrawablePrivate:(CAMetalDrawablePrivate*)arg1 layer:(id)arg2 ;
-(void)releasePrivateReferences:(CAMetalLayerPrivate*)arg1 ;
-(CAMetalDrawablePrivate*)priv;
-(id)cachedTexture;
-(unsigned)insertSeed;
-(void)setInsertSeed:(unsigned)arg1 ;
-(void)setDrawableID:(unsigned long long)arg1 ;
-(BOOL)presentScheduledInsertSeedValid;
-(void)setPresentScheduledInsertSeedValid:(BOOL)arg1 ;
-(unsigned)presentScheduledInsertSeed;
-(void)setPresentScheduledInsertSeed:(unsigned)arg1 ;
-(void)setPresentedTime:(double)arg1 ;
-(void)presentAtTime:(double)arg1 ;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(unsigned long long)drawableID;
-(id<MTLTexture>)texture;
-(double)presentedTime;
-(void)dealloc;
-(CAMetalLayer *)layer;
-(unsigned long long)status;
-(void)present;
-(void)setStatus:(unsigned long long)arg1 ;
@end

