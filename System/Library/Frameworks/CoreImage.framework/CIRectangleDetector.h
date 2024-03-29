/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIRectangleDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;
	OpaqueVTPixelTransferSessionRef pixelTransferSession;
	CVBufferRef interimScaleBuffer;
	CVBufferRef scaleBuffer;
	SCD_Struct_CI68* CVMLFuncs;
	float* _perMeshPtr;
	vImage_Buffer* _internalBuffer;

}

@property (nonatomic,retain) CIContext * context; 
-(void)releaseResources;
-(void)finalize;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(CIContext *)arg1 ;
-(CIContext *)context;
@end

