/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSTimeZone, NSString, NSMutableDictionary, NSDictionary, NSArray, CLLocation;

@interface IPAMetadata : NSObject <NSCopying> {

	BOOL _xmpLoaded;
	NSDate* _imageDate;
	NSTimeZone* _imageTimeZone;
	NSString* _filePath;
	NSMutableDictionary* _exifProperties;
	NSMutableDictionary* _iptcProperties;
	NSMutableDictionary* _basicProperties;
	NSMutableDictionary* _fileSystemProperties;
	NSMutableDictionary* _customInfo;
	NSMutableDictionary* _cgImageProperties;
	NSDictionary* _audioVideoProperties;
	NSArray* _focusPoints;
	long long _originalOrientation;
	long long _orientation;
	NSArray* _cgImageMetadataProperties;
	NSString* _fileTypeIdentifier;
	CGSize _originalUnrotatedSize;

}

@property (nonatomic,copy) NSString * filePath;                                       //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * exifProperties;                    //@synthesize exifProperties=_exifProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iptcProperties;                    //@synthesize iptcProperties=_iptcProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * basicProperties;                   //@synthesize basicProperties=_basicProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileSystemProperties;              //@synthesize fileSystemProperties=_fileSystemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customInfo;                        //@synthesize customInfo=_customInfo - In the implementation block
@property (assign,nonatomic) BOOL xmpLoaded;                                          //@synthesize xmpLoaded=_xmpLoaded - In the implementation block
@property (copy,readonly) NSString * jsonFormattedDescription; 
@property (nonatomic,retain) NSMutableDictionary * cgImageProperties;                 //@synthesize cgImageProperties=_cgImageProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * audioVideoProperties;                     //@synthesize audioVideoProperties=_audioVideoProperties - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) NSDate * imageDate;                                      //@synthesize imageDate=_imageDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * imageTimeZone;                              //@synthesize imageTimeZone=_imageTimeZone - In the implementation block
@property (nonatomic,retain) NSArray * focusPoints;                                   //@synthesize focusPoints=_focusPoints - In the implementation block
@property (assign,nonatomic) CGSize originalUnrotatedSize;                            //@synthesize originalUnrotatedSize=_originalUnrotatedSize - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                           //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) long long orientation;                                   //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSArray * cgImageMetadataProperties;                     //@synthesize cgImageMetadataProperties=_cgImageMetadataProperties - In the implementation block
@property (nonatomic,retain) NSString * fileTypeIdentifier;                           //@synthesize fileTypeIdentifier=_fileTypeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * burstUuid; 
@property (nonatomic,readonly) NSString * groupingUuid; 
@property (nonatomic,readonly) BOOL hasCustomRendered; 
@property (nonatomic,readonly) long long customRendered; 
@property (nonatomic,readonly) BOOL isAutoloop; 
@property (nonatomic,readonly) BOOL isMirror; 
@property (nonatomic,readonly) BOOL isLongExposure; 
@property (nonatomic,readonly) BOOL isPortrait; 
@property (nonatomic,readonly) CLLocation * exifLocation; 
+(id)defaultOptionsForCGImageSource;
+(CGImageSourceRef)newImageSourceForData:(id)arg1 uti:(id)arg2 ;
+(CGImageSourceRef)newImageSourceForURL:(id)arg1 ;
+(id)metadataIdentifierTypeMapImage;
+(id)metadataIdentifierTypeMapCommon;
+(id)metadataIdentifierTypeMapVideo;
+(id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(BOOL)arg2 ;
-(void)setCustomProperties:(id)arg1 ;
-(id)descriptionDictionary;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(BOOL)isAutoloop;
-(BOOL)isLongExposure;
-(BOOL)isMirror;
-(BOOL)isPortrait;
-(BOOL)isSDOF;
-(id)utiForExtension:(id)arg1 ;
-(id)initWithPath:(id)arg1 cgImageProperties:(id)arg2 loadXmpData:(BOOL)arg3 xmpSidecarPath:(id)arg4 ;
-(id)initWithFileData:(id)arg1 path:(id)arg2 fileSize:(unsigned long long)arg3 cgImageProperties:(id)arg4 imageSource:(CGImageSourceRef)arg5 loadXmpData:(BOOL)arg6 xmpSidecarPath:(id)arg7 loadEssentialMetadataOnly:(BOOL)arg8 ;
-(id)initWithFileData:(id)arg1 path:(id)arg2 cgImageProperties:(id)arg3 loadXmpData:(BOOL)arg4 xmpSidecarPath:(id)arg5 ;
-(void)setCgImageMetadataProperties:(NSArray *)arg1 ;
-(void)setXmpLoaded:(BOOL)arg1 ;
-(void)setFileTypeIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)exifProperties;
-(void)setRawFileSystemAttributes:(id)arg1 ;
-(void)setCGImageProperties:(id)arg1 ;
-(NSString *)fileTypeIdentifier;
-(NSDate *)imageDate;
-(NSTimeZone *)imageTimeZone;
-(id)customPropertyForKey:(id)arg1 ;
-(long long)customRendered;
-(NSMutableDictionary *)iptcProperties;
-(NSMutableDictionary *)fileSystemProperties;
-(void)setFocusPoints:(NSArray *)arg1 ;
-(NSMutableDictionary *)basicProperties;
-(NSMutableDictionary *)cgImageProperties;
-(void)clearImageAttributes;
-(id)_digestedExifAttributesFromRawAttributes:(id)arg1 ;
-(void)setExifProperties:(NSMutableDictionary *)arg1 ;
-(id)_digestedIptcAttributesFromRawAttributes:(id)arg1 ;
-(void)setIptcProperties:(NSMutableDictionary *)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2 ;
-(void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2 ;
-(void)_digestedOrientationExifAttributesFromExif:(id)arg1 ;
-(void)_digestedGPSExifAttributesFromExif:(id)arg1 ;
-(void)_digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(void)_digestedAVExifAttributesFromExif:(id)arg1 ;
-(void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1 ;
-(void)_enforceProperFormatting:(id)arg1 ;
-(void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1 ;
-(void)setOriginalUnrotatedSize:(CGSize)arg1 ;
-(BOOL)_validSubsec:(double)arg1 ;
-(BOOL)_didSetValidSubsec:(double*)arg1 forSubsecAsString:(id)arg2 ;
-(BOOL)_validTimezone:(id)arg1 forLongitude:(id)arg2 ;
-(void)setAudioVideoProperties:(NSDictionary *)arg1 ;
-(CGSize)originalUnrotatedSize;
-(void)setExifProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setCustomProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)convertGPSString:(id)arg1 toLatitude:(id*)arg2 longitude:(id*)arg3 ;
-(void)setImageDate:(NSDate *)arg1 ;
-(void)setImageTimeZone:(NSTimeZone *)arg1 ;
-(void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(BOOL)arg3 readyHandler:(/*^block*/id)arg4 ;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(BOOL)arg2 ;
-(void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(BOOL)arg2 readyHandler:(/*^block*/id)arg3 ;
-(void)applyTimezoneAndImageDateFromUTCDate:(id)arg1 toExifProperties:(id)arg2 ;
-(void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(BOOL)arg2 atEnd:(/*^block*/id)arg3 ;
-(void)setAudioVideoAttributesFromDictionary:(id)arg1 ;
-(void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(/*^block*/id)arg2 ;
-(long long)hdrType;
-(id)exifPropertyForKey:(id)arg1 ;
-(id)encodedDataReduceIfLargerThan:(unsigned long long)arg1 ;
-(void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1 ;
-(NSArray *)cgImageMetadataProperties;
-(BOOL)conformsToUTType:(CFStringRef)arg1 forExtention:(id)arg2 ;
-(id)initWithPath:(id)arg1 fileSize:(unsigned long long)arg2 loadEssentialMetadataOnly:(BOOL)arg3 ;
-(id)initWithPath:(id)arg1 loadXmpData:(BOOL)arg2 xmpSidecarPath:(id)arg3 ;
-(id)timeZoneAdjustedImageDate;
-(NSString *)burstUuid;
-(NSString *)groupingUuid;
-(BOOL)hasCustomRendered;
-(void)mergeMetadata:(id)arg1 ;
-(void)setIPTCProperty:(id)arg1 forKey:(id)arg2 ;
-(id)iptcPropertyForKey:(id)arg1 ;
-(NSString *)jsonFormattedDescription;
-(void)digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 ;
-(void)setImagePropertiesForURL:(id)arg1 ;
-(BOOL)isSloMoForType:(unsigned char)arg1 ;
-(BOOL)isCompositeHDR;
-(id)utiFastModernizeVideoMedia;
-(CLLocation *)exifLocation;
-(void)setEncodedImageData:(id)arg1 ;
-(void)setEncodedAudioVideoData:(id)arg1 ;
-(void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3 ;
-(void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ;
-(void)dumpXmpProperties;
-(void)setBasicProperties:(NSMutableDictionary *)arg1 ;
-(void)setFileSystemProperties:(NSMutableDictionary *)arg1 ;
-(BOOL)xmpLoaded;
-(void)setCgImageProperties:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)audioVideoProperties;
-(NSArray *)focusPoints;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageSize;
-(long long)orientation;
-(id)encodedData;
-(id)initWithPath:(id)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)setOrientation:(long long)arg1 ;
-(NSMutableDictionary *)customInfo;
-(void)setCustomInfo:(NSMutableDictionary *)arg1 ;
@end

