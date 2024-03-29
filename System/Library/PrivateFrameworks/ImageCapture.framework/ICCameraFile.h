/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraItem.h>

@class NSString, NSDate, NSArray;

@interface ICCameraFile : ICCameraItem {

	void* _fileProperties;
	BOOL _retrievedMetadata;
	BOOL _retrievedThumbnail;
	unsigned _ptpObjectHandle;

}

@property (assign) BOOL fetchingThumbnail; 
@property (assign) BOOL fetchingMetadata; 
@property (assign) long long fileSize; 
@property (getter=isRaw) BOOL raw; 
@property (assign) unsigned long long orientation; 
@property (retain) ICCameraFile * pairedRawImage; 
@property (readonly) BOOL retrievedMetadata;                     //@synthesize retrievedMetadata=_retrievedMetadata - In the implementation block
@property (readonly) BOOL retrievedThumbnail;                    //@synthesize retrievedThumbnail=_retrievedThumbnail - In the implementation block
@property (readonly) BOOL orientationOverridden; 
@property (readonly) long long width; 
@property (readonly) long long height; 
@property (readonly) NSString * burstUUID; 
@property (readonly) BOOL burstFavorite; 
@property (readonly) BOOL burstPicked; 
@property (readonly) BOOL highFramerate; 
@property (readonly) BOOL timeLapse; 
@property (readonly) BOOL firstPicked; 
@property (readonly) NSString * originatingAssetID; 
@property (readonly) NSString * groupUUID; 
@property (readonly) NSString * relatedUUID; 
@property (readonly) NSString * originalFilename; 
@property (readonly) NSString * createdFilename; 
@property (readonly) NSString * mediaBase; 
@property (readonly) NSDate * fileCreationDate; 
@property (readonly) NSDate * fileModificationDate; 
@property (readonly) NSDate * exifCreationDate; 
@property (readonly) NSDate * exifModificationDate; 
@property (readonly) unsigned ptpObjectHandle;                   //@synthesize ptpObjectHandle=_ptpObjectHandle - In the implementation block
@property (readonly) double duration; 
@property (readonly) NSArray * sidecarFiles; 
-(BOOL)timeLapse;
-(void)setTimeLapse:(BOOL)arg1 ;
-(id)creationDate;
-(id)metadata;
-(BOOL)setMetadata:(id)arg1 ;
-(BOOL)isImage;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(NSArray *)sidecarFiles;
-(BOOL)isJPEG;
-(NSDate *)fileCreationDate;
-(BOOL)hasThumbnail;
-(NSString *)groupUUID;
-(id)mediaData;
-(NSString *)createdFilename;
-(NSString *)originatingAssetID;
-(NSString *)burstUUID;
-(NSString *)relatedUUID;
-(void)setCreatedFilename:(NSString *)arg1 ;
-(void)setOriginatingAssetID:(NSString *)arg1 ;
-(void)setGroupUUID:(NSString *)arg1 ;
-(void)setBurstUUID:(NSString *)arg1 ;
-(void)setBurstPicked:(BOOL)arg1 ;
-(void)setBurstFavorite:(BOOL)arg1 ;
-(void)setRelatedUUID:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)setRaw:(BOOL)arg1 ;
-(void)setFileCreationDate:(NSDate *)arg1 ;
-(void)flagMediaMetadata:(unsigned long long)arg1 ;
-(BOOL)isRaw;
-(void)setHighFramerate:(BOOL)arg1 ;
-(void)setFirstPicked:(BOOL)arg1 ;
-(id)subImageDictForPixelWidth:(id)arg1 ;
-(ICCameraFile *)pairedRawImage;
-(void)addSubImageDict:(id)arg1 ;
-(void)setExifModificationDate:(NSDate *)arg1 ;
-(void)setExifCreationDate:(NSDate *)arg1 ;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)addSidecarFile:(id)arg1 ;
-(void)flagAsSidecar;
-(id)debugMediaMetadata;
-(BOOL)isDataUniversal;
-(BOOL)isConverted;
-(NSString *)mediaBase;
-(BOOL)isNonRawImage;
-(void)setPairedRawImage:(ICCameraFile *)arg1 ;
-(BOOL)originalFamily;
-(BOOL)convertedFamily;
-(BOOL)universalFamily;
-(BOOL)isSidecar;
-(unsigned long long)uTime;
-(BOOL)setThumbnailData:(CFDataRef)arg1 withOrientation:(id)arg2 ;
-(NSDate *)exifCreationDate;
-(NSDate *)exifModificationDate;
-(BOOL)fetchingThumbnail;
-(void)setFetchingThumbnail:(BOOL)arg1 ;
-(BOOL)fetchingMetadata;
-(void)setFetchingMetadata:(BOOL)arg1 ;
-(BOOL)orientationOverridden;
-(BOOL)burstFavorite;
-(BOOL)burstPicked;
-(BOOL)highFramerate;
-(BOOL)retrievedThumbnail;
-(BOOL)retrievedMetadata;
-(BOOL)firstPicked;
-(void)setUTime:(unsigned long long)arg1 ;
-(id)subImages;
-(BOOL)isEditedOriginal;
-(BOOL)isEditedConverted;
-(BOOL)isUniversal;
-(BOOL)isEditedUniversal;
-(void)requestThumbnailWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestMetadataWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isUntouched:(unsigned long long)arg1 ;
-(BOOL)isEdited:(unsigned long long)arg1 ;
-(BOOL)partOfFamily:(unsigned long long)arg1 ;
-(void)overrideOrientation:(unsigned long long)arg1 ;
-(void)setKeywordPropertiesFromMetadata;
-(void)requestThumbnail;
-(void)requestMetadata;
-(void)flushThumbnailCache;
-(void)flushMetadataCache;
-(BOOL)isData;
-(unsigned)ptpObjectHandle;
-(NSString *)originalFilename;
-(BOOL)isAudio;
-(void)setHasMetadata:(BOOL)arg1 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(id)debugIdentity;
-(BOOL)isOriginal;
-(void)dealloc;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(long long)width;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)height;
-(unsigned long long)orientation;
-(void)setFileSize:(long long)arg1 ;
-(long long)fileSize;
-(void)setUTI:(id)arg1 ;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(NSDate *)fileModificationDate;
-(void)setOrientation:(unsigned long long)arg1 ;
-(BOOL)hasMetadata;
-(id)modificationDate;
-(CGImageRef)thumbnail;
-(BOOL)isLegacy;
-(id)base;
-(BOOL)isMovie;
@end

