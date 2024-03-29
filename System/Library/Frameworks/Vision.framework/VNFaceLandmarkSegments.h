/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSData;

@interface VNFaceLandmarkSegments : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	unsigned long long _requestRevision;
	unsigned long long _espressoOutputBufferWidth;
	unsigned long long _espressoOutputBufferHeight;
	unsigned long long _espressoOutputBufferChannels;
	NSData* _espressoOutputBufferData;

}

@property (assign,nonatomic) unsigned long long espressoOutputBufferWidth;                 //@synthesize espressoOutputBufferWidth=_espressoOutputBufferWidth - In the implementation block
@property (assign,nonatomic) unsigned long long espressoOutputBufferHeight;                //@synthesize espressoOutputBufferHeight=_espressoOutputBufferHeight - In the implementation block
@property (assign,nonatomic) unsigned long long espressoOutputBufferChannels;              //@synthesize espressoOutputBufferChannels=_espressoOutputBufferChannels - In the implementation block
@property (nonatomic,retain) NSData * espressoOutputBufferData;                            //@synthesize espressoOutputBufferData=_espressoOutputBufferData - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;                         //@synthesize requestRevision=_requestRevision - In the implementation block
+(map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int> > >*)_faceLandmarkIndexToFlagMap;
+(int)_argmax3:(const float*)arg1 index:(int)arg2 segmentedImageSize:(CGSize)arg3 numberOfSegments:(unsigned long long)arg4 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)requestRevision;
-(id)initWithRequestRevision:(unsigned long long)arg1 espressoOutputBufferWidth:(unsigned long long)arg2 espressoOutputBufferHeight:(unsigned long long)arg3 espressoOutputBufferChannels:(unsigned long long)arg4 espressoOutputBufferData:(id)arg5 ;
-(void)setEspressoOutputBufferWidth:(unsigned long long)arg1 ;
-(void)setEspressoOutputBufferHeight:(unsigned long long)arg1 ;
-(void)setEspressoOutputBufferChannels:(unsigned long long)arg1 ;
-(void)setEspressoOutputBufferData:(NSData *)arg1 ;
-(unsigned long long)espressoOutputBufferWidth;
-(unsigned long long)espressoOutputBufferHeight;
-(unsigned long long)espressoOutputBufferChannels;
-(NSData *)espressoOutputBufferData;
-(CVBufferRef)createImageOfFaceLandmarkSegments:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

