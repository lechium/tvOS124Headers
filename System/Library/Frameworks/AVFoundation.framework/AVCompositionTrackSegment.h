/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment <NSSecureCoding> {

	AVCompositionTrackSegmentInternal* _priv;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSURL * sourceURL; 
@property (nonatomic,readonly) int sourceTrackID; 
+(id)compositionTrackSegmentWithTimeRange:(SCD_Struct_AV6)arg1 ;
+(id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV6)arg3 targetTimeRange:(SCD_Struct_AV6)arg4 ;
+(BOOL)supportsSecureCoding;
-(void)finalize;
-(id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV6)arg3 targetTimeRange:(SCD_Struct_AV6)arg4 ;
-(id)_initWithTimeMapping:(SCD_Struct_CM9)arg1 ;
-(NSURL *)sourceURL;
-(id)initWithTimeRange:(SCD_Struct_AV6)arg1 ;
-(int)sourceTrackID;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
@end

