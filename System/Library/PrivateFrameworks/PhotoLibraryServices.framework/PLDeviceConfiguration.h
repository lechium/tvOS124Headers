/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLDeviceConfiguration : NSObject {

	BOOL _isPad;
	BOOL _isTV;
	BOOL _isWatch;
	BOOL _isRidingCrudSnow;
	BOOL _isRidingPowderSnow;
	BOOL _isRetina;
	double _screenScale;
	CGSize _logicalScreenSize;

}

@property (assign,nonatomic) BOOL isRetina;                                            //@synthesize isRetina=_isRetina - In the implementation block
@property (assign,nonatomic) BOOL isPad;                                               //@synthesize isPad=_isPad - In the implementation block
@property (assign,nonatomic) BOOL isTV;                                                //@synthesize isTV=_isTV - In the implementation block
@property (assign,nonatomic) BOOL isWatch;                                             //@synthesize isWatch=_isWatch - In the implementation block
@property (nonatomic,readonly) double screenScale;                                     //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,readonly) BOOL isRidingCrudSnow;                                  //@synthesize isRidingCrudSnow=_isRidingCrudSnow - In the implementation block
@property (nonatomic,readonly) BOOL isRidingPowderSnow;                                //@synthesize isRidingPowderSnow=_isRidingPowderSnow - In the implementation block
@property (nonatomic,readonly) CGSize logicalScreenSize;                               //@synthesize logicalScreenSize=_logicalScreenSize - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseNanoThumbnailFormats; 
@property (nonatomic,readonly) unsigned long long logicalScreenPixelSize; 
+(id)defaultDeviceConfiguration;
-(BOOL)isPad;
-(BOOL)isRidingPowderSnow;
-(BOOL)shouldUseNanoThumbnailFormats;
-(BOOL)isTV;
-(BOOL)isRetina;
-(BOOL)isRidingCrudSnow;
-(id)initWithLogicalScreenSize:(CGSize)arg1 screenScale:(double)arg2 deviceClass:(void*)arg3 isRidingCrudSnow:(BOOL)arg4 isRidingPowderSnow:(BOOL)arg5 ;
-(unsigned long long)logicalScreenPixelSize;
-(void)setIsPad:(BOOL)arg1 ;
-(void)setIsTV:(BOOL)arg1 ;
-(BOOL)isWatch;
-(void)setIsWatch:(BOOL)arg1 ;
-(CGSize)logicalScreenSize;
-(void)setIsRetina:(BOOL)arg1 ;
-(id)description;
-(double)screenScale;
@end

