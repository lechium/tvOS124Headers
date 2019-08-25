/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSMutableArray, BLPixelImageBuffer, UIImage, NSDictionary;

@interface BLBaseLayerStack : NSObject {

	NSMutableArray* _layers;
	double _brushSize;
	double _brushSoftness;
	CGImageRef _brushImageRef;
	BOOL _shouldNotify;
	int _maskLongEdgeSize;
	CGSize _maskSize;
	CGAffineTransform _viewToMaskTransform;
	CGAffineTransform _inverseViewToMaskTransform;
	CGAffineTransform _flippedViewToMaskTransform;
	CGAffineTransform _inverseFlippedViewToMaskTransform;

}

@property (nonatomic,readonly) NSMutableArray * layers;                                          //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) CGSize maskSize;                                                    //@synthesize maskSize=_maskSize - In the implementation block
@property (nonatomic,retain) BLPixelImageBuffer * workingImageBuffer; 
@property (nonatomic,retain) UIImage * workingImage; 
@property (assign,nonatomic) double workingImageScaleFactor; 
@property (assign,nonatomic) CGAffineTransform viewToMaskTransform;                              //@synthesize viewToMaskTransform=_viewToMaskTransform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform inverseViewToMaskTransform;                     //@synthesize inverseViewToMaskTransform=_inverseViewToMaskTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform flippedViewToMaskTransform;                       //@synthesize flippedViewToMaskTransform=_flippedViewToMaskTransform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform inverseFlippedViewToMaskTransform;              //@synthesize inverseFlippedViewToMaskTransform=_inverseFlippedViewToMaskTransform - In the implementation block
@property (assign,nonatomic) int maskLongEdgeSize;                                               //@synthesize maskLongEdgeSize=_maskLongEdgeSize - In the implementation block
@property (assign,nonatomic) BOOL shouldNotify;                                                  //@synthesize shouldNotify=_shouldNotify - In the implementation block
@property (assign,nonatomic,__weak) NSDictionary * strokesDataDictionary; 
-(void)setStrokesDataDictionary:(NSDictionary *)arg1 ;
-(void)setWorkingImage:(UIImage *)arg1 ;
-(CGSize)maskSize;
-(void)setViewToMaskTransform:(CGAffineTransform)arg1 ;
-(void)setFlippedViewToMaskTransform:(CGAffineTransform)arg1 ;
-(CGImageRef)newImageForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(void)setWorkingImageBuffer:(BLPixelImageBuffer *)arg1 ;
-(void)setShouldNotify:(BOOL)arg1 ;
-(CGImageRef)brushImageRefWithSize:(float)arg1 softness:(float)arg2 ;
-(BLPixelImageBuffer *)workingImageBuffer;
-(UIImage *)workingImage;
-(double)workingImageScaleFactor;
-(void)setWorkingImageScaleFactor:(double)arg1 ;
-(NSDictionary *)strokesDataDictionary;
-(BOOL)haveLayerMask;
-(BOOL)readyToDraw;
-(double)maskArea;
-(void)setMaskSize:(CGSize)arg1 ;
-(CGAffineTransform)viewToMaskTransform;
-(CGAffineTransform)inverseViewToMaskTransform;
-(CGAffineTransform)flippedViewToMaskTransform;
-(CGAffineTransform)inverseFlippedViewToMaskTransform;
-(int)maskLongEdgeSize;
-(void)setMaskLongEdgeSize:(int)arg1 ;
-(BOOL)shouldNotify;
-(id)imageLayer;
-(void)dealloc;
-(double)timestamp;
-(NSMutableArray *)layers;
@end
