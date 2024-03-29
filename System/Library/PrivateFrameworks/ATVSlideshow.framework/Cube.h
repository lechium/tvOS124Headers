/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRImage;

@interface Cube : NSObject {

	MRImage* _sourceImage;
	MRImage* _destinationImage;
	float _textureCoords[8][2];
	float _sourceTriangleTextures[36][2];
	float _destinationTriangleTextures[36][2];
	long long _xIndex;
	long long _yIndex;
	long long _matrixWidth;
	long long _matrixHeight;
	double _localAspectRatio;
	BOOL _animateCube;
	BOOL _cubeReadyForAnimation;
	int _flipDirection;
	float _rps[3];
	float _position[3];
	float _rotation[3];
	float _scale[3];

}

@property (nonatomic,retain) MRImage * sourceImage;                   //@synthesize sourceImage=_sourceImage - In the implementation block
@property (nonatomic,retain) MRImage * destinationImage;              //@synthesize destinationImage=_destinationImage - In the implementation block
+(void)initialize;
-(MRImage *)sourceImage;
-(void)setSourceImage:(MRImage *)arg1 ;
-(void)setDestinationImage:(MRImage *)arg1 ;
-(void)setupTextureInformation:(int)arg1 ;
-(void)updateRotations:(double)arg1 rotateHorizontally:(BOOL)arg2 ;
-(void)draw:(id)arg1 withArguments:(id)arg2 ;
-(MRImage *)destinationImage;
-(id)init;
-(void)dealloc;
@end

