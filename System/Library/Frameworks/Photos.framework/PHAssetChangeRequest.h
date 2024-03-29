/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHAsset, NSURL, CLLocation, NSString, PHChangeRequestHelper, NSSet, NSDate, NSData, NSMutableDictionary, PHContentEditingOutput, NSIndexSet, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSManagedObjectID;

@interface PHAssetChangeRequest : NSObject <PHUpdateChangeRequest> {

	PHAsset* _originalAsset;
	NSURL* _editorBundleURL;
	CLLocation* _updatedLocation;
	NSString* _assetDescription;
	PHChangeRequestHelper* _helper;
	BOOL _clientEntitled;
	BOOL _didSetVisibilityState;
	NSString* _clientName;
	BOOL _didSetSceneClassifications;
	NSSet* _sceneClassifications;
	short _sceneAnalysisVersion;
	NSDate* _sceneAnalysisTimestamp;
	NSData* _distanceIdentity;
	NSMutableDictionary* _analysisStatesByWorkerType;
	BOOL _allowUnsafeSetProcessed;
	BOOL _incrementPlayCount;
	BOOL _incrementShareCount;
	NSDate* _lastSharedDate;
	BOOL _incrementViewCount;
	BOOL _toRetryUpload;
	BOOL _didSetVariationSuggestionStates;
	unsigned long long _variationSuggestionStates;
	unsigned long long _variationSuggestionStatesMask;
	BOOL _revealNonPrimaryAssetsInAssetGroup;
	BOOL _hideNonPrimaryAssetsInAssetGroup;
	BOOL _didModifyComputedAttributes;
	NSMutableDictionary* _computedAttributeMutations;
	BOOL _didSetPackedPreferredCropRect;
	BOOL _didSetPackedAcceptableCropRect;
	long long _packedPreferredCropRect;
	long long _packedAcceptableCropRect;
	BOOL _didSetBestVideoTimeRange;
	BOOL _didSetBestKeyFrameTime;
	BOOL _didSetMediaAnalysisTimeStamp;
	BOOL _didSetMediaAnalysisVersion;
	BOOL _didSetBlurrinessScore;
	BOOL _didSetExposureScore;
	BOOL _didSetAutoplaySuggestionScore;
	BOOL _didSetVideoScore;
	BOOL _didSetActivityScore;
	BOOL _didSetFaceCount;
	BOOL _didSetSceneprintData;
	BOOL _didSetOriginalResourceChoice;
	BOOL _didChangeAdjustments;
	BOOL _duplicateAllowsPrivateMetadata;
	unsigned short _photoIrisVisibilityState;
	int _clientProcessID;
	float _testScore;
	float _blurrinessScore;
	float _exposureScore;
	float _autoplaySuggestionScore;
	float _videoScore;
	float _activityScore;
	unsigned long long _originalResourceChoice;
	PHContentEditingOutput* _contentEditingOutput;
	NSString* _editorBundleID;
	NSString* _clientBundleID;
	NSIndexSet* _supportedEditOperations;
	NSURL* _videoURLForUpdate;
	NSString* _pairingIdentifier;
	PHRelationshipChangeRequestHelper* _facesHelper;
	NSDate* _alternateImportImageDate;
	NSDate* _mediaAnalysisTimeStamp;
	unsigned long long _mediaAnalysisVersion;
	unsigned long long _faceCount;
	NSData* _sceneprintData;
	SCD_Struct_PH1 _videoDuration;
	SCD_Struct_PH1 _imageDisplayTime;
	SCD_Struct_PH1 _bestKeyFrameTime;
	SCD_Struct_PH7 _bestVideoTimeRange;

}

@property (nonatomic,readonly) BOOL didChangeAdjustments;                                     //@synthesize didChangeAdjustments=_didChangeAdjustments - In the implementation block
@property (nonatomic,copy,readonly) NSString * editorBundleID;                                //@synthesize editorBundleID=_editorBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientBundleID;                                //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) NSIndexSet * supportedEditOperations;                            //@synthesize supportedEditOperations=_supportedEditOperations - In the implementation block
@property (nonatomic,retain) NSURL * videoURLForUpdate;                                       //@synthesize videoURLForUpdate=_videoURLForUpdate - In the implementation block
@property (nonatomic,retain) NSString * pairingIdentifier;                                    //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH1 videoDuration;                                    //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * facesHelper;               //@synthesize facesHelper=_facesHelper - In the implementation block
@property (nonatomic,readonly) BOOL duplicateAllowsPrivateMetadata;                           //@synthesize duplicateAllowsPrivateMetadata=_duplicateAllowsPrivateMetadata - In the implementation block
@property (nonatomic,retain) NSDate * alternateImportImageDate;                               //@synthesize alternateImportImageDate=_alternateImportImageDate - In the implementation block
@property (assign,nonatomic) unsigned short photoIrisVisibilityState;                         //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
@property (nonatomic,retain) NSString * assetDescription; 
@property (assign,nonatomic) unsigned long long originalResourceChoice;                       //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) id faceAdjustmentVersion; 
@property (assign,nonatomic) SCD_Struct_PH1 imageDisplayTime;                                 //@synthesize imageDisplayTime=_imageDisplayTime - In the implementation block
@property (assign,nonatomic) double curationScore; 
@property (assign,nonatomic) float overallAestheticScore; 
@property (assign,nonatomic) float wellFramedSubjectScore; 
@property (assign,nonatomic) float wellChosenSubjectScore; 
@property (assign,nonatomic) float tastefullyBlurredScore; 
@property (assign,nonatomic) float sharplyFocusedSubjectScore; 
@property (assign,nonatomic) float wellTimedShotScore; 
@property (assign,nonatomic) float pleasantLightingScore; 
@property (assign,nonatomic) float pleasantReflectionsScore; 
@property (assign,nonatomic) float harmoniousColorScore; 
@property (assign,nonatomic) float livelyColorScore; 
@property (assign,nonatomic) float pleasantSymmetryScore; 
@property (assign,nonatomic) float pleasantPatternScore; 
@property (assign,nonatomic) float immersivenessScore; 
@property (assign,nonatomic) float pleasantPerspectiveScore; 
@property (assign,nonatomic) float pleasantPostProcessingScore; 
@property (assign,nonatomic) float noiseScore; 
@property (assign,nonatomic) float failureScore; 
@property (assign,nonatomic) float pleasantCompositionScore; 
@property (assign,nonatomic) float interestingSubjectScore; 
@property (assign,nonatomic) float intrusiveObjectPresenceScore; 
@property (assign,nonatomic) float pleasantCameraTiltScore; 
@property (assign,nonatomic) float lowLight; 
@property (assign,nonatomic) float testScore;                                                 //@synthesize testScore=_testScore - In the implementation block
@property (nonatomic,retain) NSDate * mediaAnalysisTimeStamp;                                 //@synthesize mediaAnalysisTimeStamp=_mediaAnalysisTimeStamp - In the implementation block
@property (assign,nonatomic) unsigned long long mediaAnalysisVersion;                         //@synthesize mediaAnalysisVersion=_mediaAnalysisVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH1 bestKeyFrameTime;                                 //@synthesize bestKeyFrameTime=_bestKeyFrameTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH7 bestVideoTimeRange;                               //@synthesize bestVideoTimeRange=_bestVideoTimeRange - In the implementation block
@property (assign,nonatomic) float blurrinessScore;                                           //@synthesize blurrinessScore=_blurrinessScore - In the implementation block
@property (assign,nonatomic) float exposureScore;                                             //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) float autoplaySuggestionScore;                                   //@synthesize autoplaySuggestionScore=_autoplaySuggestionScore - In the implementation block
@property (assign,nonatomic) float videoScore;                                                //@synthesize videoScore=_videoScore - In the implementation block
@property (assign,nonatomic) float activityScore;                                             //@synthesize activityScore=_activityScore - In the implementation block
@property (assign,nonatomic) unsigned long long faceCount;                                    //@synthesize faceCount=_faceCount - In the implementation block
@property (nonatomic,retain) NSData * sceneprintData;                                         //@synthesize sceneprintData=_sceneprintData - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedAsset; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign,getter=isFavorite,nonatomic) BOOL favorite; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,retain) PHContentEditingOutput * contentEditingOutput;                   //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;                   //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                         //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                           //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                //@synthesize helper=_helper - In the implementation block
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
+(id)_allAssetEditOperations;
+(id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3 ;
+(void)deleteAssets:(id)arg1 ;
+(void)expungeAssets:(id)arg1 ;
+(void)undeleteAssets:(id)arg1 ;
+(id)changeRequestForAsset:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(BOOL)isFavorite;
-(SCD_Struct_PH1)imageDisplayTime;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(unsigned long long)originalResourceChoice;
-(void)setOriginalResourceChoice:(unsigned long long)arg1 ;
-(void)setOverallAestheticScore:(float)arg1 ;
-(NSString *)editorBundleID;
-(void)setCurationScore:(double)arg1 ;
-(void)setFaceAdjustmentVersion:(id)arg1 ;
-(void)revealNonPrimaryAssetsInAssetGroup;
-(void)hideNonPrimaryAssetsInAssetGroup;
-(NSString *)assetDescription;
-(void)setAssetDescription:(NSString *)arg1 ;
-(void)setBestKeyFrameTime:(SCD_Struct_PH1)arg1 ;
-(SCD_Struct_PH1)bestKeyFrameTime;
-(void)setBestVideoTimeRange:(SCD_Struct_PH7)arg1 ;
-(SCD_Struct_PH7)bestVideoTimeRange;
-(NSString *)managedEntityName;
-(BOOL)isClientEntitled;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(int)clientProcessID;
-(PHChangeRequestHelper *)helper;
-(PHContentEditingOutput *)contentEditingOutput;
-(BOOL)isRevertingContentToOriginal;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(PHRelationshipChangeRequestHelper *)facesHelper;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(id)_mutableObjectIDsAndUUIDs;
-(void)addFaces:(id)arg1 ;
-(void)removeFaces:(id)arg1 ;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)incrementShareCount;
-(NSDate *)alternateImportImageDate;
-(void)setPairingIdentifier:(NSString *)arg1 ;
-(void)setImageDisplayTime:(SCD_Struct_PH1)arg1 ;
-(void)setVideoDuration:(SCD_Struct_PH1)arg1 ;
-(unsigned short)photoIrisVisibilityState;
-(void)setPhotoIrisVisibilityState:(unsigned short)arg1 ;
-(NSString *)clientBundleID;
-(id)initWithHelper:(id)arg1 ;
-(BOOL)didChangeAdjustments;
-(BOOL)validateContentEditingOutput:(id)arg1 error:(id*)arg2 ;
-(BOOL)duplicateAllowsPrivateMetadata;
-(SCD_Struct_PH1)videoDuration;
-(void)setVideoURLForUpdate:(NSURL *)arg1 ;
-(void)setSupportedEditOperations:(NSIndexSet *)arg1 ;
-(void)markDidChangeAdjustments;
-(void)setContentEditingOutput:(PHContentEditingOutput *)arg1 ;
-(void)_setOriginalAsset:(id)arg1 ;
-(void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 distanceIdentity:(id)arg3 adjustmentVersion:(id)arg4 ;
-(void)setRectWithNormalizedRect:(CGRect)arg1 forPackedRect:(long long*)arg2 forSetFlag:(BOOL*)arg3 ;
-(void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 optionalOriginalResourceChoice:(id)arg9 ;
-(NSIndexSet *)supportedEditOperations;
-(void)setAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 forWorkerType:(short)arg4 allowUnsafeSetProcessed:(BOOL)arg5 ;
-(BOOL)validateAssetDescription:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateWriteAccessForContentURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateAndGenerateStillImageForLoopingLivePhotoWithContentEditingOutput:(id)arg1 error:(id*)arg2 ;
-(NSURL *)videoURLForUpdate;
-(id)getMediaAnalysisAttributesForAsset:(id)arg1 ;
-(void)setMediaAnalysisTimeStamp:(NSDate *)arg1 ;
-(void)setMediaAnalysisVersion:(unsigned long long)arg1 ;
-(void)setBlurrinessScore:(float)arg1 ;
-(void)setExposureScore:(float)arg1 ;
-(void)setAutoplaySuggestionScore:(float)arg1 ;
-(void)setVideoScore:(float)arg1 ;
-(void)setActivityScore:(float)arg1 ;
-(void)setFaceCount:(unsigned long long)arg1 ;
-(void)setWellFramedSubjectScore:(float)arg1 ;
-(void)setWellChosenSubjectScore:(float)arg1 ;
-(void)setTastefullyBlurredScore:(float)arg1 ;
-(void)setSharplyFocusedSubjectScore:(float)arg1 ;
-(void)setWellTimedShotScore:(float)arg1 ;
-(void)setPleasantLightingScore:(float)arg1 ;
-(void)setPleasantReflectionsScore:(float)arg1 ;
-(void)setHarmoniousColorScore:(float)arg1 ;
-(void)setLivelyColorScore:(float)arg1 ;
-(void)setPleasantSymmetryScore:(float)arg1 ;
-(void)setPleasantPatternScore:(float)arg1 ;
-(void)setImmersivenessScore:(float)arg1 ;
-(void)setPleasantPerspectiveScore:(float)arg1 ;
-(void)setPleasantPostProcessingScore:(float)arg1 ;
-(void)setNoiseScore:(float)arg1 ;
-(void)setFailureScore:(float)arg1 ;
-(void)setPleasantCompositionScore:(float)arg1 ;
-(void)setInterestingSubjectScore:(float)arg1 ;
-(void)setIntrusiveObjectPresenceScore:(float)arg1 ;
-(void)setPleasantCameraTiltScore:(float)arg1 ;
-(void)setLowLight:(float)arg1 ;
-(void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 adjustmentVersion:(id)arg3 ;
-(void)setPreferredCropRectWithNormalizedRect:(CGRect)arg1 ;
-(void)setAcceptableCropRectWithNormalizedRect:(CGRect)arg1 ;
-(void)setSceneprintData:(NSData *)arg1 ;
-(void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 ;
-(void)retryUpload;
-(void)revertAssetContentToOriginal;
-(void)setAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 forWorkerType:(short)arg4 ;
-(BOOL)validateReadAccessForContentURL:(id)arg1 assetResource:(id)arg2 error:(id*)arg3 ;
-(float)testScore;
-(void)setTestScore:(float)arg1 ;
-(NSDate *)mediaAnalysisTimeStamp;
-(unsigned long long)mediaAnalysisVersion;
-(NSData *)sceneprintData;
-(NSManagedObjectID *)objectID;
-(NSString *)pairingIdentifier;
-(double)curationScore;
-(void)setFavorite:(BOOL)arg1 ;
-(unsigned long long)faceCount;
-(void)setVariationSuggestionStates:(unsigned long long)arg1 forVariationType:(unsigned long long)arg2 ;
-(id)faceAdjustmentVersion;
-(float)overallAestheticScore;
-(float)blurrinessScore;
-(float)exposureScore;
-(float)autoplaySuggestionScore;
-(float)videoScore;
-(float)activityScore;
-(float)wellFramedSubjectScore;
-(float)wellChosenSubjectScore;
-(float)tastefullyBlurredScore;
-(float)sharplyFocusedSubjectScore;
-(float)wellTimedShotScore;
-(float)pleasantLightingScore;
-(float)pleasantReflectionsScore;
-(float)harmoniousColorScore;
-(float)livelyColorScore;
-(float)pleasantSymmetryScore;
-(float)pleasantPatternScore;
-(float)immersivenessScore;
-(float)pleasantPerspectiveScore;
-(float)pleasantPostProcessingScore;
-(float)noiseScore;
-(float)failureScore;
-(float)pleasantCompositionScore;
-(float)interestingSubjectScore;
-(float)intrusiveObjectPresenceScore;
-(float)pleasantCameraTiltScore;
-(float)lowLight;
-(void)incrementViewCount;
-(void)incrementPlayCount;
-(NSString *)clientName;
-(PHObjectPlaceholder *)placeholderForCreatedAsset;
-(id)init;
-(NSString *)uuid;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(BOOL)isHiding;
@end

