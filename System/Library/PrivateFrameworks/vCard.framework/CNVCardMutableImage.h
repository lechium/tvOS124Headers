/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vCard/vCard-Structs.h>
#import <vCard/CNVCardImage.h>

@class NSData, NSDictionary, NSValue, NSNumber;

@interface CNVCardMutableImage : CNVCardImage {

	NSData* _originalData;
	NSDictionary* _originalCropRects;
	CGSize _originalSize;
	CGImageRef _CGImage;
	BOOL _attemptedCGImage;
	NSValue* _targetSizeValue;
	NSNumber* _compressionQuality;

}

@property (nonatomic,copy,readonly) NSData * originalData;                    //@synthesize originalData=_originalData - In the implementation block
@property (nonatomic,readonly) NSDictionary * originalCropRects;              //@synthesize originalCropRects=_originalCropRects - In the implementation block
@property (nonatomic,readonly) CGSize originalSize;                           //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                            //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) BOOL attemptedCGImage;                         //@synthesize attemptedCGImage=_attemptedCGImage - In the implementation block
@property (nonatomic,copy) NSValue * targetSizeValue;                         //@synthesize targetSizeValue=_targetSizeValue - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSNumber * compressionQuality;                     //@synthesize compressionQuality=_compressionQuality - In the implementation block
+(CGImageRef)CGImageCreateWithData:(id)arg1 maxSizeValue:(id)arg2 ;
+(id)scaleCropRects:(id)arg1 factor:(double)arg2 ;
+(CGRect)scaleRect:(CGRect)arg1 byFactor:(double)arg2 ;
-(NSNumber *)compressionQuality;
-(void)setCompressionQuality:(NSNumber *)arg1 ;
-(id)cropRects;
-(id)initWithData:(id)arg1 cropRects:(id)arg2 size:(CGSize)arg3 ;
-(void)describePropertiesWithBuilder:(id)arg1 ;
-(NSData *)originalData;
-(NSDictionary *)originalCropRects;
-(CGSize)originalSize;
-(void)nts_updateRepresentation;
-(void)nts_invalidateImageSize;
-(void)setTargetSizeValue:(NSValue *)arg1 ;
-(void)nts_invalidateImageQuality;
-(id)JPEGRepresentationOfCGImage:(CGImageRef)arg1 quality:(id)arg2 ;
-(BOOL)attemptedCGImage;
-(NSValue *)targetSizeValue;
-(CGSize)size;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(void)setSize:(CGSize)arg1 ;
-(id)data;
@end
