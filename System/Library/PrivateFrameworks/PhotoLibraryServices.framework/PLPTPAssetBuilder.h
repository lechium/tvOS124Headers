/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPTPConversionSupport, PLPTPTransferableAsset, PLFileManager;
@class NSString, PLMutablePTPAsset, PLPTPAsset, NSArray, NSMutableArray;

@interface PLPTPAssetBuilder : NSObject {

	id<PLPTPConversionSupport> _conversionSupport;
	id<PLPTPTransferableAsset> _asset;
	id<PLFileManager> _fileManager;
	NSString* _filenameForPTP;
	PLMutablePTPAsset* _currentPtpAsset;
	PLPTPAsset* _commonPtpAsset;
	PLPTPAsset* _originalPtpAsset;
	NSArray* _sidecarPtpAssets;
	PLPTPAsset* _diagnosticPtpAsset;
	PLPTPAsset* _originalAdjustmentPtpAsset;
	PLPTPAsset* _fullSizeRenderImagePtpAsset;
	PLPTPAsset* _fullSizeRenderVideoPtpAsset;
	NSMutableArray* _convertedAssets;
	BOOL _irisSidecarRequiresFormatConversion;

}
+(id)pictureTransferProtocolAssetsForAsset:(id)arg1 withConversionSupport:(id)arg2 ;
+(BOOL)_shouldIncludeDiagnosticFile;
-(BOOL)_suppressPtpInfo;
-(BOOL)_buildDirectoryPathAndFilename;
-(void)_buildExifAvailable;
-(void)_buildFileSize;
-(void)_buildOriginatingAssetID;
-(void)_buildThumbnailOffsetAndLength;
-(void)_buildImageDimensions;
-(void)_buildThumbnailDimensions;
-(void)_buildOrientation;
-(void)_buildPhotoKey;
-(void)_buildModificationAndCreationDate;
-(void)_durationOfTheAsset;
-(void)_buildGPSInformation;
-(void)_buildBurst;
-(void)_buildSlowMo;
-(void)_buildTimelapse;
-(id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 ;
-(id)pictureTransferProtocolAssets;
-(id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 fileManager:(id)arg3 ;
-(void)_buildCommonAsset;
-(BOOL)_buildOriginalAsset;
-(void)_buildSidecarAssets;
-(void)_updateOriginalAssetFormatConversionFromVideoComplement;
-(void)_buildDiagnosticAsset;
-(void)_buildOriginalAdjustmentAsset;
-(void)_buildFullSizeRenderImageAsset;
-(void)_buildFullSizeRenderVideoAsset;
-(void)_buildGroupUUID;
-(void)_buildRelatedUUID;
-(void)_buildDeletedFlag;
-(void)updateAssetForFormatConversion:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 forceLegacyConversion:(BOOL)arg4 ;
-(void)_updateAssetForTranscodeChoice:(id)arg1 withConversionResult:(id)arg2 ;
-(void)_updateAsset:(id)arg1 withConversionResult:(id)arg2 ;
-(BOOL)_hasIrisSidecarFile;
-(id)_assetForSidecar:(id)arg1 sidecarPath:(id)arg2 irisSidecarPath:(id)arg3 ;
@end
