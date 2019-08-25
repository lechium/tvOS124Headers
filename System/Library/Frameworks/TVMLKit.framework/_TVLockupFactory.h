/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVLockupFactory : NSObject
+(TVCellMetrics)cellMetricsForCollectionElement:(id)arg1 ;
+(void)updateViewLayoutForCell:(id)arg1 forSize:(CGSize)arg2 ;
+(void)_configureCell:(id)arg1 layout:(id)arg2 element:(id)arg3 ;
+(void)_configureStackingPoster:(id)arg1 layout:(id)arg2 element:(id)arg3 forMetrics:(BOOL)arg4 ;
+(id)_configurationIdentifierForElement:(id)arg1 ;
+(UIEdgeInsets)_customCellPaddingForCellMetrics:(TVCellMetrics)arg1 withCollectionCellMetrics:(TVCellMetrics)arg2 contentAlignment:(long long)arg3 ;
-(void)_registerLockup;
-(id)init;
@end

