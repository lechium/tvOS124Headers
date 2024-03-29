/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PFAdjustment, PLPhotoEditMutableModel;

@interface _PLSettingsExtractionPayload : NSObject {

	PFAdjustment* _adjustmentData;
	PLPhotoEditMutableModel* _model;
	long long _baseOrientation;
	double _baseDuration;
	CGSize _baseImageSize;

}

@property (nonatomic,retain) PFAdjustment * adjustmentData;                //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (nonatomic,retain) PLPhotoEditMutableModel * model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) CGSize baseImageSize;                         //@synthesize baseImageSize=_baseImageSize - In the implementation block
@property (assign,nonatomic) long long baseOrientation;                    //@synthesize baseOrientation=_baseOrientation - In the implementation block
@property (assign,nonatomic) double baseDuration;                          //@synthesize baseDuration=_baseDuration - In the implementation block
-(void)setModel:(PLPhotoEditMutableModel *)arg1 ;
-(PFAdjustment *)adjustmentData;
-(double)baseDuration;
-(void)setAdjustmentData:(PFAdjustment *)arg1 ;
-(CGSize)baseImageSize;
-(void)setBaseImageSize:(CGSize)arg1 ;
-(long long)baseOrientation;
-(void)setBaseOrientation:(long long)arg1 ;
-(void)setBaseDuration:(double)arg1 ;
-(PLPhotoEditMutableModel *)model;
@end

