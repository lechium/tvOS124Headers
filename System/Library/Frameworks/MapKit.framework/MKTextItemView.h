/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface MKTextItemView : UIView {

	NSArray* _labels;

}

@property (nonatomic,copy) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4 ;
-(void)setTextColor:(id)arg1 ;
@end
