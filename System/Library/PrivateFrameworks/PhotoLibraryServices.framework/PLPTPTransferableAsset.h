/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID, NSString, NSDate, NSSet, NSURL, CLLocation;


@protocol PLPTPTransferableAsset <NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain,readonly) id uuid; 
@property (nonatomic,readonly) short savedAssetType; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSString * originalFilename; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) unsigned long long originalFilesize; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalFile; 
@property (nonatomic,readonly) unsigned long long ptpCloudMasterOriginalFileSize; 
@property (nonatomic,retain,readonly) id<PLPTPTransferableAdditionalAssetAttributes> ptpAdditionalAttributes; 
@property (nonatomic,retain,readonly) NSSet * ptpSidecarFiles; 
@property (nonatomic,readonly) BOOL isInFlight; 
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isAudio; 
@property (nonatomic,readonly) BOOL isAvalanchePhoto; 
@property (nonatomic,readonly) BOOL isPhotoIris; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) short kindSubtype; 
@property (nonatomic,copy,readonly) NSString * avalancheUUID; 
@property (nonatomic,readonly) int avalanchePickType; 
@property (nonatomic,copy,readonly) NSString * mediaGroupUUID; 
@property (nonatomic,readonly) id<PLPTPTransferableSidecarFile> ptpPhotoIrisSidecar; 
@property (nonatomic,copy,readonly) NSURL * mainFileURL; 
@property (nonatomic,readonly) int embeddedThumbnailOffset; 
@property (nonatomic,readonly) long long originalWidth; 
@property (nonatomic,readonly) long long originalHeight; 
@property (nonatomic,readonly) short originalOrientation; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,retain,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) NSString * pathForDiagnosticFile; 
@property (nonatomic,copy,readonly) NSString * pathForAdjustmentFile; 
@property (nonatomic,copy,readonly) NSString * pathForFullsizeRenderImageFile; 
@property (nonatomic,copy,readonly) NSString * pathForFullsizeRenderVideoFile; 
@required
-(NSString *)filename;
-(NSString *)avalancheUUID;
-(NSString *)pathForFullsizeRenderImageFile;
-(NSString *)pathForFullsizeRenderVideoFile;
-(NSString *)pathForOriginalFile;
-(short)savedAssetType;
-(short)originalOrientation;
-(long long)originalWidth;
-(long long)originalHeight;
-(BOOL)isAvalanchePhoto;
-(int)avalanchePickType;
-(NSString *)pathForDiagnosticFile;
-(unsigned long long)originalFilesize;
-(short)kindSubtype;
-(NSString *)mediaGroupUUID;
-(BOOL)isInFlight;
-(NSString *)pathForAdjustmentFile;
-(int)embeddedThumbnailOffset;
-(id<PLPTPTransferableAdditionalAssetAttributes>)ptpAdditionalAttributes;
-(NSSet *)ptpSidecarFiles;
-(id<PLPTPTransferableSidecarFile>)ptpPhotoIrisSidecar;
-(unsigned long long)ptpCloudMasterOriginalFileSize;
-(NSManagedObjectID *)objectID;
-(NSString *)originalFilename;
-(NSURL *)mainFileURL;
-(BOOL)isPhotoIris;
-(BOOL)isPhoto;
-(BOOL)isAudio;
-(NSDate *)dateCreated;
-(id)uuid;
-(double)duration;
-(long long)width;
-(long long)height;
-(BOOL)isVideo;
-(CLLocation *)location;
-(NSDate *)modificationDate;

@end
