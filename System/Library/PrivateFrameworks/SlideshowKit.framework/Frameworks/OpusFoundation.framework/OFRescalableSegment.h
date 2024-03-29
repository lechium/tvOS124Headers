/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OFRescalableSegment.h>

@protocol OFRescalableSegment <NSObject>
@property (assign) double defaultDuration; 
@property (assign) double minimumDuration; 
@property (assign) double maximumDuration; 
@property (assign) double compressibility; 
@property (assign) double expandability; 
@required
-(void)setMinimumDuration:(double)arg1;
-(double)compressibility;
-(void)setCompressibility:(double)arg1;
-(double)expandability;
-(void)setExpandability:(double)arg1;
-(void)setDefaultDuration:(double)arg1;
-(double)minimumDuration;
-(double)defaultDuration;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1;

@end


@class NSString;

@interface OFRescalableSegment : NSObject <OFRescalableSegment> {

	double _defaultDuration;
	double _minimumDuration;
	double _maximumDuration;
	double _compressibility;
	double _expandability;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double defaultDuration;                          //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (assign) double minimumDuration;                          //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (assign) double maximumDuration;                          //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign) double compressibility;                          //@synthesize compressibility=_compressibility - In the implementation block
@property (assign) double expandability;                            //@synthesize expandability=_expandability - In the implementation block
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)nonRescalableSegmentWithDuration:(double)arg1 ;
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
-(void)setMinimumDuration:(double)arg1 ;
-(double)compressibility;
-(void)setCompressibility:(double)arg1 ;
-(double)expandability;
-(void)setExpandability:(double)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(double)minimumDuration;
-(NSString *)description;
-(double)defaultDuration;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1 ;
@end

