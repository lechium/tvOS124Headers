/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLBaseLayerStack.h>

@class UIImage;

@interface BLRepairLayerStack : BLBaseLayerStack {

	int _mode;
	UIImage* _analysisImage;
	UIImage* _sourceImage;
	UIImage* _repairSourceImage;
	UIImage* _redEyeSourceImage;
	CGSize _repairSourceSize;
	CGSize _redEyeSourceSize;

}

@property (nonatomic,retain) UIImage * analysisImage;                           //@synthesize analysisImage=_analysisImage - In the implementation block
@property (nonatomic,retain) UIImage * sourceImage;                             //@synthesize sourceImage=_sourceImage - In the implementation block
@property (nonatomic,retain) UIImage * repairSourceImage;                       //@synthesize repairSourceImage=_repairSourceImage - In the implementation block
@property (assign,nonatomic) CGSize repairSourceSize;                           //@synthesize repairSourceSize=_repairSourceSize - In the implementation block
@property (nonatomic,retain) UIImage * redEyeSourceImage;                       //@synthesize redEyeSourceImage=_redEyeSourceImage - In the implementation block
@property (assign,nonatomic) CGSize redEyeSourceSize;                           //@synthesize redEyeSourceSize=_redEyeSourceSize - In the implementation block
@property (assign,nonatomic,__weak) UIImage * redEyeRepairedImage; 
@property (assign,nonatomic) int mode;                                          //@synthesize mode=_mode - In the implementation block
+(id)addAutoRedEyeCorrection:(id)arg1 toCurrentStrokesDataDictionary:(id)arg2 forSourceSize:(CGSize)arg3 ;
+(int)maxEdgeSize;
+(id)layerStack;
-(UIImage *)sourceImage;
-(BOOL)hasRepair;
-(void)setStrokesDataDictionary:(id)arg1 ;
-(CGImageRef)newImageForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(id)strokesDataDictionary;
-(BOOL)haveLayerMask;
-(BOOL)readyToDraw;
-(void)setAnalysisImage:(UIImage *)arg1 ;
-(id)imagePatchListForLayerStack;
-(void)setRepairSourceSize:(CGSize)arg1 ;
-(UIImage *)repairSourceImage;
-(void)setRepairSourceImage:(UIImage *)arg1 ;
-(void)setRedEyeSourceSize:(CGSize)arg1 ;
-(void)setRedEyeSourceImage:(UIImage *)arg1 ;
-(BOOL)hasRedEye;
-(void)setRedEyeRepairedImage:(UIImage *)arg1 ;
-(UIImage *)redEyeRepairedImage;
-(BOOL)readyToDrawForMode:(int)arg1 ;
-(void)redEyeChanged;
-(void)repairChanged;
-(UIImage *)analysisImage;
-(CGSize)repairSourceSize;
-(UIImage *)redEyeSourceImage;
-(CGSize)redEyeSourceSize;
-(void)setSourceImage:(UIImage *)arg1 ;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(int)mode;
-(void)setMode:(int)arg1 ;
@end

