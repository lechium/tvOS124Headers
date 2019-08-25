/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSUnaryImageKernel : MPSKernel {

	SCD_Struct_MP13 _offset;
	SCD_Struct_MP10 _clipRect;
	unsigned long long _edgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	void* _encodeData;
	/*function pointer*/void* _getPreferredTileSize;

}

@property (assign,nonatomic) SCD_Struct_MP13 offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP10 clipRect;                 //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long edgeMode;              //@synthesize edgeMode=_edgeMode - In the implementation block
-(BOOL)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id*)arg2 fallbackCopyAllocator:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP10)clipRect;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(unsigned long long)edgeMode;
-(void)setClipRect:(SCD_Struct_MP10)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(SCD_Struct_MP13)offset;
-(void)setOffset:(SCD_Struct_MP13)arg1 ;
@end

