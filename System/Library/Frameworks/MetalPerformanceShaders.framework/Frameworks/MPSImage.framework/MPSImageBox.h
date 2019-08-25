/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageBox : MPSUnaryImageKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned filterInfoH;
	unsigned filterInfoV;
	MPSImageConvolution* hPass;
	MPSImageConvolution* vPass;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)initFilterInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
@end

