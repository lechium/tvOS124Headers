/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property (__weak) id<PXPlacesGeotaggedItemDataSourceDelegate> delegate; 
@property (readonly) NSSet * allItems; 
@property (nonatomic,readonly) long long numberOfItems; 
@required
-(NSSet *)allItems;
-(id)findItemsInMapRect:(SCD_Struct_PX4)arg1;
-(SCD_Struct_PX4*)minimalEncompassingMapRect;
-(void)setDelegate:(id)arg1;
-(id<PXPlacesGeotaggedItemDataSourceDelegate>)delegate;
-(long long)numberOfItems;

@end

