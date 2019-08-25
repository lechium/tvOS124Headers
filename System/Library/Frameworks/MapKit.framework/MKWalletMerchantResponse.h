/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItem;
@class GEOPDMerchantLookupResult, MKWalletMerchantStylingInfo, NSString, MKMapItem;

@interface MKWalletMerchantResponse : NSObject {

	id<GEOMapItem> _mapItem;
	GEOPDMerchantLookupResult* _merchantLookupResult;

}

@property (nonatomic,readonly) MKWalletMerchantStylingInfo * placeStyling; 
@property (nonatomic,readonly) NSString * localizedPlaceName; 
@property (nonatomic,readonly) NSString * localizedPlaceLanguage; 
@property (nonatomic,readonly) MKWalletMerchantStylingInfo * walletCategoryStyling; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryName; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryLanguage; 
@property (nonatomic,readonly) NSString * walletCategoryIdentifier; 
@property (nonatomic,readonly) NSString * mapsCategoryIdentifier; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
-(MKMapItem *)mapItem;
-(id)initWithGEOMapItem:(id)arg1 ;
-(id)initWithMerchantLookupResult:(id)arg1 ;
-(NSString *)localizedPlaceName;
-(NSString *)localizedPlaceLanguage;
-(MKWalletMerchantStylingInfo *)walletCategoryStyling;
-(NSString *)localizedWalletCategoryName;
-(NSString *)localizedWalletCategoryLanguage;
-(NSString *)mapsCategoryIdentifier;
-(NSString *)walletCategoryIdentifier;
-(MKWalletMerchantStylingInfo *)placeStyling;
@end
