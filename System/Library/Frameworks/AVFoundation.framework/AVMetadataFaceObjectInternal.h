/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVMetadataFaceObjectInternal : NSObject {

	long long _faceID;
	BOOL _hasRollAngle;
	double _rollAngle;
	BOOL _hasYawAngle;
	double _yawAngle;
	BOOL _hasLeftEyeClosedConfidence;
	int _leftEyeClosedConfidence;
	BOOL _hasRightEyeClosedConfidence;
	int _rightEyeClosedConfidence;
	BOOL _hasSmileConfidence;
	int _smileConfidence;
	BOOL _hasLeftEyeBounds;
	CGRect _leftEyeBounds;
	BOOL _hasRightEyeBounds;
	CGRect _rightEyeBounds;

}

@property (assign,nonatomic) long long faceID;                              //@synthesize faceID=_faceID - In the implementation block
@property (assign,nonatomic) BOOL hasRollAngle;                             //@synthesize hasRollAngle=_hasRollAngle - In the implementation block
@property (assign,nonatomic) double rollAngle;                              //@synthesize rollAngle=_rollAngle - In the implementation block
@property (assign,nonatomic) BOOL hasYawAngle;                              //@synthesize hasYawAngle=_hasYawAngle - In the implementation block
@property (assign,nonatomic) double yawAngle;                               //@synthesize yawAngle=_yawAngle - In the implementation block
@property (assign,nonatomic) BOOL hasLeftEyeClosedConfidence;               //@synthesize hasLeftEyeClosedConfidence=_hasLeftEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) int leftEyeClosedConfidence;                   //@synthesize leftEyeClosedConfidence=_leftEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasRightEyeClosedConfidence;              //@synthesize hasRightEyeClosedConfidence=_hasRightEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) int rightEyeClosedConfidence;                  //@synthesize rightEyeClosedConfidence=_rightEyeClosedConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasSmileConfidence;                       //@synthesize hasSmileConfidence=_hasSmileConfidence - In the implementation block
@property (assign,nonatomic) int smileConfidence;                           //@synthesize smileConfidence=_smileConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasLeftEyeBounds;                         //@synthesize hasLeftEyeBounds=_hasLeftEyeBounds - In the implementation block
@property (assign,nonatomic) CGRect leftEyeBounds;                          //@synthesize leftEyeBounds=_leftEyeBounds - In the implementation block
@property (assign,nonatomic) BOOL hasRightEyeBounds;                        //@synthesize hasRightEyeBounds=_hasRightEyeBounds - In the implementation block
@property (assign,nonatomic) CGRect rightEyeBounds;                         //@synthesize rightEyeBounds=_rightEyeBounds - In the implementation block
-(void)setFaceID:(long long)arg1 ;
-(void)setHasRollAngle:(BOOL)arg1 ;
-(void)setRollAngle:(double)arg1 ;
-(void)setHasYawAngle:(BOOL)arg1 ;
-(void)setYawAngle:(double)arg1 ;
-(BOOL)hasLeftEyeClosedConfidence;
-(void)setHasLeftEyeClosedConfidence:(BOOL)arg1 ;
-(int)leftEyeClosedConfidence;
-(void)setLeftEyeClosedConfidence:(int)arg1 ;
-(BOOL)hasRightEyeClosedConfidence;
-(void)setHasRightEyeClosedConfidence:(BOOL)arg1 ;
-(int)rightEyeClosedConfidence;
-(void)setRightEyeClosedConfidence:(int)arg1 ;
-(BOOL)hasSmileConfidence;
-(void)setHasSmileConfidence:(BOOL)arg1 ;
-(int)smileConfidence;
-(void)setSmileConfidence:(int)arg1 ;
-(BOOL)hasLeftEyeBounds;
-(void)setHasLeftEyeBounds:(BOOL)arg1 ;
-(CGRect)leftEyeBounds;
-(void)setLeftEyeBounds:(CGRect)arg1 ;
-(BOOL)hasRightEyeBounds;
-(void)setHasRightEyeBounds:(BOOL)arg1 ;
-(CGRect)rightEyeBounds;
-(void)setRightEyeBounds:(CGRect)arg1 ;
-(long long)faceID;
-(BOOL)hasRollAngle;
-(double)rollAngle;
-(BOOL)hasYawAngle;
-(double)yawAngle;
@end

