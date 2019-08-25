/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject {

	double _actualScaleFactor;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	long long _measuredNumberOfLines;
	NSAttributedString* _scaledAttributedText;
	CGSize _targetSize;
	CGSize _scaledSize;

}

@property (assign,nonatomic) CGSize targetSize;                                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGSize scaledSize;                                      //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) double actualScaleFactor;                               //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                  //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) double scaledBaselineOffset;                            //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) double scaledLineHeight;                                //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (assign,nonatomic) long long measuredNumberOfLines;                        //@synthesize measuredNumberOfLines=_measuredNumberOfLines - In the implementation block
@property (nonatomic,retain) NSAttributedString * scaledAttributedText;              //@synthesize scaledAttributedText=_scaledAttributedText - In the implementation block
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(CGSize)scaledSize;
-(void)setScaledSize:(CGSize)arg1 ;
-(double)actualScaleFactor;
-(void)setActualScaleFactor:(double)arg1 ;
-(double)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(double)arg1 ;
-(double)scaledLineHeight;
-(void)setScaledLineHeight:(double)arg1 ;
-(long long)measuredNumberOfLines;
-(void)setMeasuredNumberOfLines:(long long)arg1 ;
-(NSAttributedString *)scaledAttributedText;
-(void)setScaledAttributedText:(NSAttributedString *)arg1 ;
@end

