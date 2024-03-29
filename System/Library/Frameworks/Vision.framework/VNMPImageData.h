/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSString;

@interface VNMPImageData : NSObject {

	BOOL _freeImageInDealloc;
	vImage_Buffer* _image;
	CVBufferRef _imageCVPixelBuffer;
	NSString* _imageFilePath;
	NSString* _externalImageId;
	long long _exifTimestamp;

}

@property (readonly) vImage_Buffer* image;                        //@synthesize image=_image - In the implementation block
@property (readonly) CVBufferRef imageCVPixelBuffer;              //@synthesize imageCVPixelBuffer=_imageCVPixelBuffer - In the implementation block
@property (retain) NSString * imageFilePath;                      //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (assign) BOOL freeImageInDealloc;                       //@synthesize freeImageInDealloc=_freeImageInDealloc - In the implementation block
@property (readonly) NSString * externalImageId;                  //@synthesize externalImageId=_externalImageId - In the implementation block
@property (readonly) long long exifTimestamp;                     //@synthesize exifTimestamp=_exifTimestamp - In the implementation block
-(long long)exifTimestamp;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(CVBufferRef)imageCVPixelBuffer;
-(NSString *)imageFilePath;
-(void)setImageFilePath:(NSString *)arg1 ;
-(BOOL)freeImageInDealloc;
-(void)setFreeImageInDealloc:(BOOL)arg1 ;
-(NSString *)externalImageId;
-(void)dealloc;
-(vImage_Buffer*)image;
@end

