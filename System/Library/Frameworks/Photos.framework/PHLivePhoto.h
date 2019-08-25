/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage, AVAsset, AVVideoComposition, NSURL, PHSandboxExtensionWrapper, PHImageManager, PHAsset;

@interface PHLivePhoto : NSObject <NSCopying, NSSecureCoding> {

	float _audioVolume;
	NSString* _uniqueIdentifier;
	UIImage* _image;
	AVAsset* _videoAsset;
	unsigned long long _options;
	AVVideoComposition* _videoComposition;
	NSString* _assetLocalIdentifier;
	NSURL* _imageURL;
	PHSandboxExtensionWrapper* _imageURLSandboxExtensionWrapper;
	NSURL* _videoURL;
	PHSandboxExtensionWrapper* _videoURLSandboxExtensionWrapper;
	long long _contentMode;
	PHImageManager* _imageManager;
	PHAsset* _asset;
	CGSize _size;
	CGSize _targetSize;
	SCD_Struct_PH1 _photoTime;

}

@property (nonatomic,readonly) UIImage * image;                                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) AVAsset * videoAsset;                                                     //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH1 photoTime;                                                 //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                               //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) AVVideoComposition * videoComposition;                               //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;                                     //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (readonly) NSString * uniqueIdentifier;                                                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                                                         //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) PHSandboxExtensionWrapper * imageURLSandboxExtensionWrapper;              //@synthesize imageURLSandboxExtensionWrapper=_imageURLSandboxExtensionWrapper - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                                         //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) PHSandboxExtensionWrapper * videoURLSandboxExtensionWrapper;              //@synthesize videoURLSandboxExtensionWrapper=_videoURLSandboxExtensionWrapper - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSString * imageTypeIdentifier; 
@property (nonatomic,readonly) NSString * videoTypeIdentifier; 
@property (nonatomic,readonly) id imageFileLoader; 
@property (nonatomic,readonly) id videoFileLoader; 
@property (nonatomic,readonly) CGSize targetSize;                                                        //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                                                    //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) float audioVolume;                                                          //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,nonatomic,__weak) PHImageManager * imageManager;                                       //@synthesize imageManager=_imageManager - In the implementation block
@property (assign,nonatomic,__weak) PHAsset * asset;                                                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                              //@synthesize size=_size - In the implementation block
+(id)loopingLivePhotoWithResourceFileURLs:(id)arg1 error:(id*)arg2 ;
+(id)livePhotoWithResourceFileURLs:(id)arg1 error:(id*)arg2 ;
+(id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 error:(id*)arg4 ;
+(id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 isLooping:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)_identifyResourceURLs:(id)arg1 outImageURL:(id*)arg2 outVideoURL:(id*)arg3 error:(id*)arg4 ;
+(BOOL)_canCreateLoopingLivePhotoWithURLs:(id)arg1 outError:(id*)arg2 ;
+(BOOL)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id*)arg2 ;
+(BOOL)_validateFileURLs:(id)arg1 withValidationOptions:(unsigned long long)arg2 outError:(id*)arg3 ;
+(SCD_Struct_PH1)_photoTimeForLivePhotoWithImageURL:(id)arg1 videoURL:(id)arg2 ;
+(int)requestLivePhotoWithResourceFileURLs:(id)arg1 placeholderImage:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 resultHandler:(/*^block*/id)arg5 ;
+(void)cancelLivePhotoRequestWithRequestID:(int)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_asset;
-(id)videoComplement;
-(BOOL)hasPhotoColorAdjustments;
-(id)initWithImage:(id)arg1 videoAsset:(id)arg2 photoTime:(SCD_Struct_PH1)arg3 assetLocalIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
-(NSString *)assetLocalIdentifier;
-(NSString *)imageTypeIdentifier;
-(id)imageFileLoader;
-(NSString *)videoTypeIdentifier;
-(id)videoFileLoader;
-(id)initWithImage:(id)arg1 videoAsset:(id)arg2 photoTime:(SCD_Struct_PH1)arg3 assetLocalIdentifier:(id)arg4 ;
-(id)_initWithImageURL:(id)arg1 videoURL:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 ;
-(void)_ensureConstituentData;
-(BOOL)_synchronouslyLoadImageURL:(id*)arg1 videoURL:(id*)arg2 error:(id*)arg3 ;
-(void)_loadConstituentURLsWithNetworkAccessAllowed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SCD_Struct_PH1)photoTime;
-(PHSandboxExtensionWrapper *)imageURLSandboxExtensionWrapper;
-(PHSandboxExtensionWrapper *)videoURLSandboxExtensionWrapper;
-(void)setImageManager:(PHImageManager *)arg1 ;
-(AVVideoComposition *)videoComposition;
-(id)_imageManager;
-(PHImageManager *)imageManager;
-(id)initWithImage:(id)arg1 videoAsset:(id)arg2 photoTime:(SCD_Struct_PH1)arg3 assetLocalIdentifier:(id)arg4 options:(unsigned long long)arg5 videoComposition:(id)arg6 ;
-(NSString *)originalFilename;
-(NSURL *)imageURL;
-(NSURL *)videoURL;
-(AVAsset *)videoAsset;
-(void)setAudioVolume:(float)arg1 ;
-(float)audioVolume;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(long long)contentMode;
-(void)setAsset:(PHAsset *)arg1 ;
-(PHAsset *)asset;
-(void)saveToPhotoLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)uniqueIdentifier;
-(CGSize)targetSize;
@end

