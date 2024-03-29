/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, PHPhotoLibrary;

@interface PHAssetResource : NSObject {

	BOOL _locallyAvailable;
	BOOL _derivative;
	long long _resourceType;
	NSString* _assetLocalIdentifier;
	NSString* _uniformTypeIdentifier;
	NSString* _originalFilename;
	NSURL* _fileURL;
	NSURL* _privateFileURL;
	/*^block*/id _privateFileLoader;
	PHPhotoLibrary* _photoLibrary;
	long long _pixelWidth;
	long long _pixelHeight;
	unsigned long long _fileSize;

}

@property (setter=_setAssetLocalIdentifier:,nonatomic,copy) NSString * assetLocalIdentifier;                              //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (setter=_setFileURL:,nonatomic,retain) NSURL * fileURL;                                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (getter=isLibraryAssetResource,nonatomic,readonly) BOOL libraryAssetResource; 
@property (setter=_setPrivateFileURL:,nonatomic,retain) NSURL * privateFileURL;                                           //@synthesize privateFileURL=_privateFileURL - In the implementation block
@property (setter=_setPrivateFileLoader:,nonatomic,copy) id privateFileLoader;                                            //@synthesize privateFileLoader=_privateFileLoader - In the implementation block
@property (setter=_setOriginalFilename:,nonatomic,copy) NSString * originalFilename;                                      //@synthesize originalFilename=_originalFilename - In the implementation block
@property (setter=_setUniformTypeIdentifier:,nonatomic,copy) NSString * uniformTypeIdentifier;                            //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (setter=_setPhotoLibrary:,nonatomic,retain) PHPhotoLibrary * photoLibrary;                                      //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,setter=_setPixelWidth:,nonatomic) long long pixelWidth;                                                 //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,setter=_setPixelHeight:,nonatomic) long long pixelHeight;                                               //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (assign,setter=_setIsLocallyAvailable:,getter=isLocallyAvailable,nonatomic) BOOL locallyAvailable;              //@synthesize locallyAvailable=_locallyAvailable - In the implementation block
@property (getter=isDerivative,nonatomic,readonly) BOOL derivative;                                                       //@synthesize derivative=_derivative - In the implementation block
@property (assign,setter=_setFileSize:,nonatomic) unsigned long long fileSize;                                            //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) long long type;                                                                            //@synthesize resourceType=_resourceType - In the implementation block
+(id)_managedAssetWithRelationshipsPrefetchedForAsset:(id)arg1 inLibrary:(id)arg2 error:(id*)arg3 ;
+(id)assetResourcesForLivePhoto:(id)arg1 ;
+(id)assetResourcesForAsset:(id)arg1 ;
+(id)assetResourcesForAsset:(id)arg1 includeDerivatives:(BOOL)arg2 ;
-(BOOL)isDerivative;
-(BOOL)isLocallyAvailable;
-(NSString *)assetLocalIdentifier;
-(id)initWithResourceType:(long long)arg1 ;
-(void)_setAssetLocalIdentifier:(id)arg1 ;
-(void)_setOriginalFilename:(id)arg1 ;
-(void)_setUniformTypeIdentifier:(id)arg1 ;
-(void)_setPrivateFileLoader:(/*^block*/id)arg1 ;
-(BOOL)isLibraryAssetResource;
-(long long)analysisType;
-(void)_setPrivateFileURL:(id)arg1 ;
-(id)privateFileLoader;
-(void)_setPixelWidth:(long long)arg1 ;
-(void)_setPixelHeight:(long long)arg1 ;
-(void)_setIsLocallyAvailable:(BOOL)arg1 ;
-(void)_setFileSize:(unsigned long long)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(long long)pixelWidth;
-(long long)pixelHeight;
-(NSString *)originalFilename;
-(NSString *)uniformTypeIdentifier;
-(void)_setPhotoLibrary:(id)arg1 ;
-(NSURL *)privateFileURL;
-(id)description;
-(long long)type;
-(unsigned long long)fileSize;
-(void)_setFileURL:(id)arg1 ;
-(NSURL *)fileURL;
@end

