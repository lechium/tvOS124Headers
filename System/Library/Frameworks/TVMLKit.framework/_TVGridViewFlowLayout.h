/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionViewFlowLayout.h>

@interface _TVGridViewFlowLayout : _TVCollectionViewFlowLayout {

	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;              //@synthesize cellMetrics=_cellMetrics - In the implementation block
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(double)expectedLineSpacing;
-(id)init;
-(TVCellMetrics)cellMetrics;
@end
