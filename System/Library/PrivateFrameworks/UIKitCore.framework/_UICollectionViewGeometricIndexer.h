/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary;

@interface _UICollectionViewGeometricIndexer : NSObject {

	NSMutableDictionary* _pages;
	double _pageDimension;
	int _axis;

}
+(id)geometricIndexerWithContainerSize:(CGSize)arg1 axis:(int)arg2 ;
-(void)addGlobalIndex:(long long)arg1 forFrame:(CGRect)arg2 ;
-(id)globalIndexesOfFramesIntersectingRect:(CGRect)arg1 ;
-(id)initWithContainerSize:(CGSize)arg1 axis:(int)arg2 ;
-(id)_mutableIndexSetForPageIndex:(long long)arg1 ;
@end

