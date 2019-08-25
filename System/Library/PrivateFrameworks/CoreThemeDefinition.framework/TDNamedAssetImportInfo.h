/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, NSSet, NSArray, NSValue;

@interface TDNamedAssetImportInfo : NSObject <NSCopying> {

	BOOL _preservesVectorRepresentation;
	BOOL _optOutOfThinning;
	BOOL _isFlippable;
	BOOL _cubeMap;
	short _autoscalingType;
	int _objectVersion;
	NSString* _name;
	long long _nameIdentifier;
	NSURL* _fileURL;
	NSDate* _modificationDate;
	long long _idiom;
	long long _subtype;
	unsigned long long _scaleFactor;
	long long _renditionType;
	long long _resizingMode;
	long long _templateRenderingMode;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	long long _displayGamut;
	long long _layoutDirection;
	unsigned long long _memoryClass;
	unsigned long long _graphicsClass;
	long long _graphicsFeatureSetClass;
	long long _compressionType;
	double _lossyCompressionQuality;
	NSSet* _tags;
	NSString* _universalTypeIdentifier;
	NSArray* _containedImageNames;
	NSArray* _layerReferences;
	unsigned long long _textureWidth;
	unsigned long long _textureHeight;
	unsigned long long _textureDepth;
	unsigned long long _arrayIndex;
	long long _texturePixelFormat;
	long long _textureInterpretation;
	NSArray* _textureInfos;
	long long _colorSpaceID;
	NSArray* _colorComponents;
	NSString* _systemColorName;
	NSString* _fontName;
	double _fontSize;
	NSString* _foregroundColorName;
	NSString* _backgroundColorName;
	long long _backgroundColorSpaceID;
	NSArray* _backgroundColorComponents;
	double _maxPointSize;
	double _minPointSize;
	NSValue* _iconSize;
	NSString* _appearanceName;
	long long _appearanceIdentifier;
	CGSize _resizableSliceSize;
	CGSize _physicalSizeInMeters;
	CGSize _canvasSize;
	SCD_Struct_TD13 _sliceInsets;
	CGRect _alignmentRect;
	SCD_Struct_TD6 _transformation;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long nameIdentifier;                        //@synthesize nameIdentifier=_nameIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                   //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                         //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long idiom;                                 //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) long long subtype;                               //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long scaleFactor;                  //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) SCD_Struct_TD13 sliceInsets;                     //@synthesize sliceInsets=_sliceInsets - In the implementation block
@property (assign,nonatomic) long long renditionType;                         //@synthesize renditionType=_renditionType - In the implementation block
@property (assign,nonatomic) long long resizingMode;                          //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) CGSize resizableSliceSize;                       //@synthesize resizableSliceSize=_resizableSliceSize - In the implementation block
@property (assign,nonatomic) BOOL preservesVectorRepresentation;              //@synthesize preservesVectorRepresentation=_preservesVectorRepresentation - In the implementation block
@property (assign,nonatomic) short autoscalingType;                           //@synthesize autoscalingType=_autoscalingType - In the implementation block
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;                 //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) BOOL optOutOfThinning;                           //@synthesize optOutOfThinning=_optOutOfThinning - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect;                            //@synthesize alignmentRect=_alignmentRect - In the implementation block
@property (assign,nonatomic) long long sizeClassHorizontal;                   //@synthesize sizeClassHorizontal=_sizeClassHorizontal - In the implementation block
@property (assign,nonatomic) long long sizeClassVertical;                     //@synthesize sizeClassVertical=_sizeClassVertical - In the implementation block
@property (assign,nonatomic) long long displayGamut;                          //@synthesize displayGamut=_displayGamut - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                       //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) BOOL isFlippable;                                //@synthesize isFlippable=_isFlippable - In the implementation block
@property (assign,nonatomic) unsigned long long memoryClass;                  //@synthesize memoryClass=_memoryClass - In the implementation block
@property (assign,nonatomic) unsigned long long graphicsClass;                //@synthesize graphicsClass=_graphicsClass - In the implementation block
@property (assign,nonatomic) long long graphicsFeatureSetClass;               //@synthesize graphicsFeatureSetClass=_graphicsFeatureSetClass - In the implementation block
@property (assign,nonatomic) long long compressionType;                       //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) double lossyCompressionQuality;                  //@synthesize lossyCompressionQuality=_lossyCompressionQuality - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * universalTypeIdentifier;                //@synthesize universalTypeIdentifier=_universalTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * containedImageNames;                     //@synthesize containedImageNames=_containedImageNames - In the implementation block
@property (assign,nonatomic) CGSize physicalSizeInMeters;                     //@synthesize physicalSizeInMeters=_physicalSizeInMeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_TD6 transformation;                   //@synthesize transformation=_transformation - In the implementation block
@property (assign,nonatomic) int objectVersion;                               //@synthesize objectVersion=_objectVersion - In the implementation block
@property (assign,nonatomic) CGSize canvasSize;                               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,copy) NSArray * layerReferences;                         //@synthesize layerReferences=_layerReferences - In the implementation block
@property (assign,nonatomic) unsigned long long textureWidth;                 //@synthesize textureWidth=_textureWidth - In the implementation block
@property (assign,nonatomic) unsigned long long textureHeight;                //@synthesize textureHeight=_textureHeight - In the implementation block
@property (assign,nonatomic) unsigned long long textureDepth;                 //@synthesize textureDepth=_textureDepth - In the implementation block
@property (assign,nonatomic) BOOL cubeMap;                                    //@synthesize cubeMap=_cubeMap - In the implementation block
@property (assign,nonatomic) unsigned long long arrayIndex;                   //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (assign,nonatomic) long long texturePixelFormat;                    //@synthesize texturePixelFormat=_texturePixelFormat - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;                 //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (nonatomic,copy) NSArray * textureInfos;                            //@synthesize textureInfos=_textureInfos - In the implementation block
@property (assign,nonatomic) long long colorSpaceID;                          //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (nonatomic,copy) NSArray * colorComponents;                         //@synthesize colorComponents=_colorComponents - In the implementation block
@property (nonatomic,retain) NSString * systemColorName;                      //@synthesize systemColorName=_systemColorName - In the implementation block
@property (nonatomic,copy) NSString * fontName;                               //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                                 //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy) NSString * foregroundColorName;                    //@synthesize foregroundColorName=_foregroundColorName - In the implementation block
@property (nonatomic,copy) NSString * backgroundColorName;                    //@synthesize backgroundColorName=_backgroundColorName - In the implementation block
@property (assign,nonatomic) long long backgroundColorSpaceID;                //@synthesize backgroundColorSpaceID=_backgroundColorSpaceID - In the implementation block
@property (nonatomic,copy) NSArray * backgroundColorComponents;               //@synthesize backgroundColorComponents=_backgroundColorComponents - In the implementation block
@property (assign,nonatomic) double maxPointSize;                             //@synthesize maxPointSize=_maxPointSize - In the implementation block
@property (assign,nonatomic) double minPointSize;                             //@synthesize minPointSize=_minPointSize - In the implementation block
@property (nonatomic,copy) NSValue * iconSize;                                //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,copy) NSString * appearanceName;                         //@synthesize appearanceName=_appearanceName - In the implementation block
@property (assign,nonatomic) long long appearanceIdentifier;                  //@synthesize appearanceIdentifier=_appearanceIdentifier - In the implementation block
-(NSSet *)tags;
-(double)maxPointSize;
-(long long)compressionType;
-(void)setCompressionType:(long long)arg1 ;
-(CGSize)physicalSizeInMeters;
-(NSArray *)layerReferences;
-(BOOL)optOutOfThinning;
-(long long)textureInterpretation;
-(NSArray *)colorComponents;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(void)setOptOutOfThinning:(BOOL)arg1 ;
-(void)setIsFlippable:(BOOL)arg1 ;
-(void)setTextureInterpretation:(long long)arg1 ;
-(void)setColorComponents:(NSArray *)arg1 ;
-(int)objectVersion;
-(void)setObjectVersion:(int)arg1 ;
-(SCD_Struct_TD6)transformation;
-(void)setTransformation:(SCD_Struct_TD6)arg1 ;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(long long)renditionType;
-(unsigned long long)memoryClass;
-(unsigned long long)graphicsClass;
-(NSString *)systemColorName;
-(void)setColorSpaceID:(long long)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(long long)colorSpaceID;
-(unsigned long long)arrayIndex;
-(void)setArrayIndex:(unsigned long long)arg1 ;
-(void)setLayerReferences:(NSArray *)arg1 ;
-(BOOL)cubeMap;
-(NSString *)universalTypeIdentifier;
-(void)setGraphicsFeatureSetClass:(long long)arg1 ;
-(long long)graphicsFeatureSetClass;
-(void)setRenditionType:(long long)arg1 ;
-(long long)renditionSubtype;
-(long long)nameIdentifier;
-(void)setNameIdentifier:(long long)arg1 ;
-(void)setMemoryClass:(unsigned long long)arg1 ;
-(void)setSystemColorName:(NSString *)arg1 ;
-(long long)appearanceIdentifier;
-(NSString *)appearanceName;
-(SCD_Struct_TD13)sliceInsets;
-(CGSize)resizableSliceSize;
-(CGRect)alignmentRect;
-(NSArray *)containedImageNames;
-(BOOL)preservesVectorRepresentation;
-(void)setPreservesVectorRepresentation:(BOOL)arg1 ;
-(short)autoscalingType;
-(void)setAutoscalingType:(short)arg1 ;
-(void)setUniversalTypeIdentifier:(NSString *)arg1 ;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(long long)texturePixelFormat;
-(void)setCubeMap:(BOOL)arg1 ;
-(unsigned long long)textureWidth;
-(unsigned long long)textureHeight;
-(NSArray *)textureInfos;
-(void)setTexturePixelFormat:(long long)arg1 ;
-(void)setSliceInsets:(SCD_Struct_TD13)arg1 ;
-(void)setResizableSliceSize:(CGSize)arg1 ;
-(double)lossyCompressionQuality;
-(void)setLossyCompressionQuality:(double)arg1 ;
-(void)setContainedImageNames:(NSArray *)arg1 ;
-(void)setTextureWidth:(unsigned long long)arg1 ;
-(void)setTextureHeight:(unsigned long long)arg1 ;
-(unsigned long long)textureDepth;
-(void)setTextureDepth:(unsigned long long)arg1 ;
-(void)setTextureInfos:(NSArray *)arg1 ;
-(NSString *)foregroundColorName;
-(void)setForegroundColorName:(NSString *)arg1 ;
-(NSString *)backgroundColorName;
-(void)setBackgroundColorName:(NSString *)arg1 ;
-(long long)backgroundColorSpaceID;
-(void)setBackgroundColorSpaceID:(long long)arg1 ;
-(NSArray *)backgroundColorComponents;
-(void)setBackgroundColorComponents:(NSArray *)arg1 ;
-(void)setMaxPointSize:(double)arg1 ;
-(double)minPointSize;
-(void)setMinPointSize:(double)arg1 ;
-(void)setAppearanceName:(NSString *)arg1 ;
-(void)setAppearanceIdentifier:(long long)arg1 ;
-(void)setGraphicsClass:(unsigned long long)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)scaleFactor;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(long long)idiom;
-(void)setIdiom:(long long)arg1 ;
-(double)fontSize;
-(long long)layoutDirection;
-(NSString *)fontName;
-(NSURL *)fileURL;
-(long long)displayGamut;
-(long long)resizingMode;
-(long long)templateRenderingMode;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(long long)subtype;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(NSValue *)iconSize;
-(void)setIconSize:(NSValue *)arg1 ;
-(BOOL)isFlippable;
-(void)setDisplayGamut:(long long)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(void)setSizeClassHorizontal:(long long)arg1 ;
-(void)setSizeClassVertical:(long long)arg1 ;
-(void)setLayoutDirection:(long long)arg1 ;
@end

