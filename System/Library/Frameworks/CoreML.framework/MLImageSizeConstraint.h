/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@class NSOrderedSet, NSArray;

@interface MLImageSizeConstraint : NSObject {

	long long _type;
	NSOrderedSet* _imageSizeSet;
	NSRange _pixelsWideRange;
	NSRange _pixelsHighRange;

}

@property (nonatomic,readonly) NSOrderedSet * imageSizeSet;                 //@synthesize imageSizeSet=_imageSizeSet - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSRange pixelsWideRange;                     //@synthesize pixelsWideRange=_pixelsWideRange - In the implementation block
@property (nonatomic,readonly) NSRange pixelsHighRange;                     //@synthesize pixelsHighRange=_pixelsHighRange - In the implementation block
@property (nonatomic,readonly) NSArray * enumeratedImageSizes; 
+(unsigned long long)locationClosestTo:(unsigned long long)arg1 inRange:(NSRange)arg2 ;
+(id)closestImageSizeInArray:(id)arg1 toImageSize:(id)arg2 preferDownScaling:(BOOL)arg3 ;
+(id)closestImageSizeInPixelsWideRange:(NSRange)arg1 pixelsHighRange:(NSRange)arg2 toImageSize:(id)arg3 preferInputAspectRatio:(BOOL)arg4 ;
-(id)initUnspecified;
-(id)initWithEnumeratedImageSizes:(id)arg1 ;
-(BOOL)isAllowedImageSize:(id)arg1 error:(id*)arg2 ;
-(id)initWithPixelsWideRange:(NSRange)arg1 pixelsHighRange:(NSRange)arg2 ;
-(NSArray *)enumeratedImageSizes;
-(NSOrderedSet *)imageSizeSet;
-(NSRange)pixelsWideRange;
-(NSRange)pixelsHighRange;
-(id)allowedImageSizeClosestToPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 preferDownScaling:(BOOL)arg3 preferInputAspectRatio:(BOOL)arg4 ;
-(long long)type;
@end

