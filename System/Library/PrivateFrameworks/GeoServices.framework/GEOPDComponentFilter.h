/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDRoadAccessInfoFilter, GEOPDAddressFilter, GEOPDAddressObjectFilter, GEOPDAmenitiesFilter, GEOPDAnnotatedItemListFilter, GEOPDAssociatedAppFilter, GEOPDBoundsFilter, GEOPDBrowseCategoriesFilter, GEOPDBusinessClaimFilter, GEOPDBusinessHoursFilter, GEOPDCaptionedPhotoFilter, GEOPDContainedPlaceFilter, GEOPDEntityFilter, GEOPDETAFilter, GEOPDExternalActionFilter, GEOPDFactoidFilter, GEOPDFlyoverFilter, GEOPDHoursFilter, GEOPDIconFilter, GEOPDLinkedServiceFilter, GEOPDLocationEventFilter, GEOPDMessageLinkFilter, GEOPDPhotoFilter, GEOPDPlaceCollectionFilter, GEOPDPlaceInfoFilter, GEOPDPlacecardLayoutConfigurationFilter, GEOPDPlacecardURLFilter, GEOPDPoiEventFilter, GEOPDPriceDescriptionFilter, GEOPDQuickLinkFilter, GEOPDRapFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDRestaurantReservationLinkFilter, GEOPDResultSnippetFilter, GEOPDReviewFilter, GEOPDSimpleRestaurantMenuTextFilter, GEOPDSpatialLookupFilter, GEOPDStyleAttributesFilter, GEOPDTextBlockFilter, GEOPDTipFilter, GEOPDTransitAttributionFilter, GEOPDTransitIncidentFilter, GEOPDTransitInfoFilter, GEOPDTransitInfoSnippetFilter, GEOPDTransitScheduleFilter, GEOPDVehiclePositionFilter, GEOPDVenueInfoFilter, GEOPDWalletCategoryInformationFilter, GEOPDWifiFingerprintFilter;

@interface GEOPDComponentFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDRoadAccessInfoFilter* _accessInfoFilter;
	GEOPDAddressFilter* _addressFilter;
	GEOPDAddressObjectFilter* _addressObjectFilter;
	GEOPDAmenitiesFilter* _amenitiesFilter;
	GEOPDAnnotatedItemListFilter* _annotatedItemListFilter;
	GEOPDAssociatedAppFilter* _associatedAppFilter;
	GEOPDBoundsFilter* _boundsFilter;
	GEOPDBrowseCategoriesFilter* _browseCategoriesFilter;
	GEOPDBusinessClaimFilter* _businessClaimFilter;
	GEOPDBusinessHoursFilter* _businessHoursFilter;
	GEOPDCaptionedPhotoFilter* _captionedPhotoFilter;
	GEOPDContainedPlaceFilter* _containedPlaceFilter;
	GEOPDEntityFilter* _entityFilter;
	GEOPDETAFilter* _etaFilter;
	GEOPDExternalActionFilter* _externalActionFilter;
	GEOPDFactoidFilter* _factoidFilter;
	GEOPDFlyoverFilter* _flyoverFilter;
	GEOPDHoursFilter* _hoursFilter;
	GEOPDIconFilter* _iconFilter;
	GEOPDLinkedServiceFilter* _linkedServiceFilter;
	GEOPDLocationEventFilter* _locationEventFilter;
	GEOPDMessageLinkFilter* _messageLinkFilter;
	GEOPDPhotoFilter* _photoFilter;
	GEOPDPlaceCollectionFilter* _placeCollectionFilter;
	GEOPDPlaceInfoFilter* _placeInfoFilter;
	GEOPDPlacecardLayoutConfigurationFilter* _placecardLayoutConfigurationFilter;
	GEOPDPlacecardURLFilter* _placecardUrlFilter;
	GEOPDPoiEventFilter* _poiEventFilter;
	GEOPDPriceDescriptionFilter* _priceDescriptionFilter;
	GEOPDQuickLinkFilter* _quickLinkFilter;
	GEOPDRapFilter* _rapFilter;
	GEOPDRatingFilter* _ratingFilter;
	GEOPDRawAttributeFilter* _rawAttributeFilter;
	GEOPDRestaurantReservationLinkFilter* _restaurantReservationLinkFilter;
	GEOPDResultSnippetFilter* _resultSnippetFilter;
	GEOPDReviewFilter* _reviewFilter;
	GEOPDSimpleRestaurantMenuTextFilter* _simpleRestaurantMenuTextFilter;
	GEOPDSpatialLookupFilter* _spatialLookupFilter;
	GEOPDStyleAttributesFilter* _styleAttributesFilter;
	GEOPDTextBlockFilter* _textBlockFilter;
	GEOPDTipFilter* _tipFilter;
	GEOPDTransitAttributionFilter* _transitAttributionFilter;
	GEOPDTransitIncidentFilter* _transitIncidentFilter;
	GEOPDTransitInfoFilter* _transitInfoFilter;
	GEOPDTransitInfoSnippetFilter* _transitInfoSnippetFilter;
	GEOPDTransitScheduleFilter* _transitScheduleFilter;
	GEOPDVehiclePositionFilter* _transitVehiclePositionFilter;
	GEOPDVenueInfoFilter* _venueInfoFilter;
	GEOPDWalletCategoryInformationFilter* _walletCategoryInformationFilter;
	GEOPDWifiFingerprintFilter* _wifiFingerprintFilter;

}

@property (nonatomic,readonly) BOOL hasEntityFilter; 
@property (nonatomic,retain) GEOPDEntityFilter * entityFilter;                                                          //@synthesize entityFilter=_entityFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceInfoFilter; 
@property (nonatomic,retain) GEOPDPlaceInfoFilter * placeInfoFilter;                                                    //@synthesize placeInfoFilter=_placeInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessInfoFilter; 
@property (nonatomic,retain) GEOPDRoadAccessInfoFilter * accessInfoFilter;                                              //@synthesize accessInfoFilter=_accessInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBoundsFilter; 
@property (nonatomic,retain) GEOPDBoundsFilter * boundsFilter;                                                          //@synthesize boundsFilter=_boundsFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressFilter; 
@property (nonatomic,retain) GEOPDAddressFilter * addressFilter;                                                        //@synthesize addressFilter=_addressFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRatingFilter; 
@property (nonatomic,retain) GEOPDRatingFilter * ratingFilter;                                                          //@synthesize ratingFilter=_ratingFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewFilter; 
@property (nonatomic,retain) GEOPDReviewFilter * reviewFilter;                                                          //@synthesize reviewFilter=_reviewFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPhotoFilter; 
@property (nonatomic,retain) GEOPDPhotoFilter * photoFilter;                                                            //@synthesize photoFilter=_photoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasHoursFilter; 
@property (nonatomic,retain) GEOPDHoursFilter * hoursFilter;                                                            //@synthesize hoursFilter=_hoursFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfoFilter; 
@property (nonatomic,retain) GEOPDTransitInfoFilter * transitInfoFilter;                                                //@synthesize transitInfoFilter=_transitInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitScheduleFilter; 
@property (nonatomic,retain) GEOPDTransitScheduleFilter * transitScheduleFilter;                                        //@synthesize transitScheduleFilter=_transitScheduleFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaFilter; 
@property (nonatomic,retain) GEOPDETAFilter * etaFilter;                                                                //@synthesize etaFilter=_etaFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasFlyoverFilter; 
@property (nonatomic,retain) GEOPDFlyoverFilter * flyoverFilter;                                                        //@synthesize flyoverFilter=_flyoverFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRawAttributeFilter; 
@property (nonatomic,retain) GEOPDRawAttributeFilter * rawAttributeFilter;                                              //@synthesize rawAttributeFilter=_rawAttributeFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAmenitiesFilter; 
@property (nonatomic,retain) GEOPDAmenitiesFilter * amenitiesFilter;                                                    //@synthesize amenitiesFilter=_amenitiesFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributesFilter; 
@property (nonatomic,retain) GEOPDStyleAttributesFilter * styleAttributesFilter;                                        //@synthesize styleAttributesFilter=_styleAttributesFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentFilter; 
@property (nonatomic,retain) GEOPDTransitIncidentFilter * transitIncidentFilter;                                        //@synthesize transitIncidentFilter=_transitIncidentFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTextBlockFilter; 
@property (nonatomic,retain) GEOPDTextBlockFilter * textBlockFilter;                                                    //@synthesize textBlockFilter=_textBlockFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasFactoidFilter; 
@property (nonatomic,retain) GEOPDFactoidFilter * factoidFilter;                                                        //@synthesize factoidFilter=_factoidFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAttributionFilter; 
@property (nonatomic,retain) GEOPDTransitAttributionFilter * transitAttributionFilter;                                  //@synthesize transitAttributionFilter=_transitAttributionFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessClaimFilter; 
@property (nonatomic,retain) GEOPDBusinessClaimFilter * businessClaimFilter;                                            //@synthesize businessClaimFilter=_businessClaimFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasCaptionedPhotoFilter; 
@property (nonatomic,retain) GEOPDCaptionedPhotoFilter * captionedPhotoFilter;                                          //@synthesize captionedPhotoFilter=_captionedPhotoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfoSnippetFilter; 
@property (nonatomic,retain) GEOPDTransitInfoSnippetFilter * transitInfoSnippetFilter;                                  //@synthesize transitInfoSnippetFilter=_transitInfoSnippetFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalActionFilter; 
@property (nonatomic,retain) GEOPDExternalActionFilter * externalActionFilter;                                          //@synthesize externalActionFilter=_externalActionFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasResultSnippetFilter; 
@property (nonatomic,retain) GEOPDResultSnippetFilter * resultSnippetFilter;                                            //@synthesize resultSnippetFilter=_resultSnippetFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressObjectFilter; 
@property (nonatomic,retain) GEOPDAddressObjectFilter * addressObjectFilter;                                            //@synthesize addressObjectFilter=_addressObjectFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleRestaurantMenuTextFilter; 
@property (nonatomic,retain) GEOPDSimpleRestaurantMenuTextFilter * simpleRestaurantMenuTextFilter;                      //@synthesize simpleRestaurantMenuTextFilter=_simpleRestaurantMenuTextFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRestaurantReservationLinkFilter; 
@property (nonatomic,retain) GEOPDRestaurantReservationLinkFilter * restaurantReservationLinkFilter;                    //@synthesize restaurantReservationLinkFilter=_restaurantReservationLinkFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialLookupFilter; 
@property (nonatomic,retain) GEOPDSpatialLookupFilter * spatialLookupFilter;                                            //@synthesize spatialLookupFilter=_spatialLookupFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTipFilter; 
@property (nonatomic,retain) GEOPDTipFilter * tipFilter;                                                                //@synthesize tipFilter=_tipFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPlacecardUrlFilter; 
@property (nonatomic,retain) GEOPDPlacecardURLFilter * placecardUrlFilter;                                              //@synthesize placecardUrlFilter=_placecardUrlFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAssociatedAppFilter; 
@property (nonatomic,retain) GEOPDAssociatedAppFilter * associatedAppFilter;                                            //@synthesize associatedAppFilter=_associatedAppFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageLinkFilter; 
@property (nonatomic,retain) GEOPDMessageLinkFilter * messageLinkFilter;                                                //@synthesize messageLinkFilter=_messageLinkFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasQuickLinkFilter; 
@property (nonatomic,retain) GEOPDQuickLinkFilter * quickLinkFilter;                                                    //@synthesize quickLinkFilter=_quickLinkFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRapFilter; 
@property (nonatomic,retain) GEOPDRapFilter * rapFilter;                                                                //@synthesize rapFilter=_rapFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationEventFilter; 
@property (nonatomic,retain) GEOPDLocationEventFilter * locationEventFilter;                                            //@synthesize locationEventFilter=_locationEventFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasVenueInfoFilter; 
@property (nonatomic,retain) GEOPDVenueInfoFilter * venueInfoFilter;                                                    //@synthesize venueInfoFilter=_venueInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasContainedPlaceFilter; 
@property (nonatomic,retain) GEOPDContainedPlaceFilter * containedPlaceFilter;                                          //@synthesize containedPlaceFilter=_containedPlaceFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiFingerprintFilter; 
@property (nonatomic,retain) GEOPDWifiFingerprintFilter * wifiFingerprintFilter;                                        //@synthesize wifiFingerprintFilter=_wifiFingerprintFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasIconFilter; 
@property (nonatomic,retain) GEOPDIconFilter * iconFilter;                                                              //@synthesize iconFilter=_iconFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceDescriptionFilter; 
@property (nonatomic,retain) GEOPDPriceDescriptionFilter * priceDescriptionFilter;                                      //@synthesize priceDescriptionFilter=_priceDescriptionFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowseCategoriesFilter; 
@property (nonatomic,retain) GEOPDBrowseCategoriesFilter * browseCategoriesFilter;                                      //@synthesize browseCategoriesFilter=_browseCategoriesFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnotatedItemListFilter; 
@property (nonatomic,retain) GEOPDAnnotatedItemListFilter * annotatedItemListFilter;                                    //@synthesize annotatedItemListFilter=_annotatedItemListFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPoiEventFilter; 
@property (nonatomic,retain) GEOPDPoiEventFilter * poiEventFilter;                                                      //@synthesize poiEventFilter=_poiEventFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPlacecardLayoutConfigurationFilter; 
@property (nonatomic,retain) GEOPDPlacecardLayoutConfigurationFilter * placecardLayoutConfigurationFilter;              //@synthesize placecardLayoutConfigurationFilter=_placecardLayoutConfigurationFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasWalletCategoryInformationFilter; 
@property (nonatomic,retain) GEOPDWalletCategoryInformationFilter * walletCategoryInformationFilter;                    //@synthesize walletCategoryInformationFilter=_walletCategoryInformationFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitVehiclePositionFilter; 
@property (nonatomic,retain) GEOPDVehiclePositionFilter * transitVehiclePositionFilter;                                 //@synthesize transitVehiclePositionFilter=_transitVehiclePositionFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkedServiceFilter; 
@property (nonatomic,retain) GEOPDLinkedServiceFilter * linkedServiceFilter;                                            //@synthesize linkedServiceFilter=_linkedServiceFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessHoursFilter; 
@property (nonatomic,retain) GEOPDBusinessHoursFilter * businessHoursFilter;                                            //@synthesize businessHoursFilter=_businessHoursFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceCollectionFilter; 
@property (nonatomic,retain) GEOPDPlaceCollectionFilter * placeCollectionFilter;                                        //@synthesize placeCollectionFilter=_placeCollectionFilter - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasTransitScheduleFilter;
-(void)setTransitScheduleFilter:(GEOPDTransitScheduleFilter *)arg1 ;
-(GEOPDTransitScheduleFilter *)transitScheduleFilter;
-(void)setEntityFilter:(GEOPDEntityFilter *)arg1 ;
-(void)setPlaceInfoFilter:(GEOPDPlaceInfoFilter *)arg1 ;
-(void)setAccessInfoFilter:(GEOPDRoadAccessInfoFilter *)arg1 ;
-(void)setBoundsFilter:(GEOPDBoundsFilter *)arg1 ;
-(void)setAddressFilter:(GEOPDAddressFilter *)arg1 ;
-(void)setRatingFilter:(GEOPDRatingFilter *)arg1 ;
-(void)setReviewFilter:(GEOPDReviewFilter *)arg1 ;
-(void)setPhotoFilter:(GEOPDPhotoFilter *)arg1 ;
-(void)setHoursFilter:(GEOPDHoursFilter *)arg1 ;
-(void)setTransitInfoFilter:(GEOPDTransitInfoFilter *)arg1 ;
-(void)setEtaFilter:(GEOPDETAFilter *)arg1 ;
-(void)setFlyoverFilter:(GEOPDFlyoverFilter *)arg1 ;
-(void)setRawAttributeFilter:(GEOPDRawAttributeFilter *)arg1 ;
-(void)setAmenitiesFilter:(GEOPDAmenitiesFilter *)arg1 ;
-(void)setStyleAttributesFilter:(GEOPDStyleAttributesFilter *)arg1 ;
-(void)setTransitIncidentFilter:(GEOPDTransitIncidentFilter *)arg1 ;
-(void)setTextBlockFilter:(GEOPDTextBlockFilter *)arg1 ;
-(void)setFactoidFilter:(GEOPDFactoidFilter *)arg1 ;
-(void)setTransitAttributionFilter:(GEOPDTransitAttributionFilter *)arg1 ;
-(void)setBusinessClaimFilter:(GEOPDBusinessClaimFilter *)arg1 ;
-(void)setCaptionedPhotoFilter:(GEOPDCaptionedPhotoFilter *)arg1 ;
-(void)setTransitInfoSnippetFilter:(GEOPDTransitInfoSnippetFilter *)arg1 ;
-(void)setExternalActionFilter:(GEOPDExternalActionFilter *)arg1 ;
-(void)setResultSnippetFilter:(GEOPDResultSnippetFilter *)arg1 ;
-(void)setAddressObjectFilter:(GEOPDAddressObjectFilter *)arg1 ;
-(void)setSimpleRestaurantMenuTextFilter:(GEOPDSimpleRestaurantMenuTextFilter *)arg1 ;
-(void)setRestaurantReservationLinkFilter:(GEOPDRestaurantReservationLinkFilter *)arg1 ;
-(void)setSpatialLookupFilter:(GEOPDSpatialLookupFilter *)arg1 ;
-(void)setTipFilter:(GEOPDTipFilter *)arg1 ;
-(void)setPlacecardUrlFilter:(GEOPDPlacecardURLFilter *)arg1 ;
-(void)setAssociatedAppFilter:(GEOPDAssociatedAppFilter *)arg1 ;
-(void)setMessageLinkFilter:(GEOPDMessageLinkFilter *)arg1 ;
-(void)setQuickLinkFilter:(GEOPDQuickLinkFilter *)arg1 ;
-(void)setRapFilter:(GEOPDRapFilter *)arg1 ;
-(void)setLocationEventFilter:(GEOPDLocationEventFilter *)arg1 ;
-(void)setVenueInfoFilter:(GEOPDVenueInfoFilter *)arg1 ;
-(void)setContainedPlaceFilter:(GEOPDContainedPlaceFilter *)arg1 ;
-(void)setWifiFingerprintFilter:(GEOPDWifiFingerprintFilter *)arg1 ;
-(void)setIconFilter:(GEOPDIconFilter *)arg1 ;
-(void)setPriceDescriptionFilter:(GEOPDPriceDescriptionFilter *)arg1 ;
-(void)setBrowseCategoriesFilter:(GEOPDBrowseCategoriesFilter *)arg1 ;
-(void)setAnnotatedItemListFilter:(GEOPDAnnotatedItemListFilter *)arg1 ;
-(void)setPoiEventFilter:(GEOPDPoiEventFilter *)arg1 ;
-(void)setPlacecardLayoutConfigurationFilter:(GEOPDPlacecardLayoutConfigurationFilter *)arg1 ;
-(void)setTransitVehiclePositionFilter:(GEOPDVehiclePositionFilter *)arg1 ;
-(void)setLinkedServiceFilter:(GEOPDLinkedServiceFilter *)arg1 ;
-(void)setBusinessHoursFilter:(GEOPDBusinessHoursFilter *)arg1 ;
-(void)setPlaceCollectionFilter:(GEOPDPlaceCollectionFilter *)arg1 ;
-(void)setWalletCategoryInformationFilter:(GEOPDWalletCategoryInformationFilter *)arg1 ;
-(BOOL)hasEntityFilter;
-(BOOL)hasPlaceInfoFilter;
-(BOOL)hasAccessInfoFilter;
-(BOOL)hasBoundsFilter;
-(BOOL)hasAddressFilter;
-(BOOL)hasRatingFilter;
-(BOOL)hasReviewFilter;
-(BOOL)hasPhotoFilter;
-(BOOL)hasHoursFilter;
-(BOOL)hasTransitInfoFilter;
-(BOOL)hasEtaFilter;
-(BOOL)hasFlyoverFilter;
-(BOOL)hasRawAttributeFilter;
-(BOOL)hasAmenitiesFilter;
-(BOOL)hasStyleAttributesFilter;
-(BOOL)hasTransitIncidentFilter;
-(BOOL)hasTextBlockFilter;
-(BOOL)hasFactoidFilter;
-(BOOL)hasTransitAttributionFilter;
-(BOOL)hasBusinessClaimFilter;
-(BOOL)hasCaptionedPhotoFilter;
-(BOOL)hasTransitInfoSnippetFilter;
-(BOOL)hasExternalActionFilter;
-(BOOL)hasResultSnippetFilter;
-(BOOL)hasAddressObjectFilter;
-(BOOL)hasSimpleRestaurantMenuTextFilter;
-(BOOL)hasRestaurantReservationLinkFilter;
-(BOOL)hasSpatialLookupFilter;
-(BOOL)hasTipFilter;
-(BOOL)hasPlacecardUrlFilter;
-(BOOL)hasAssociatedAppFilter;
-(BOOL)hasMessageLinkFilter;
-(BOOL)hasQuickLinkFilter;
-(BOOL)hasRapFilter;
-(BOOL)hasLocationEventFilter;
-(BOOL)hasVenueInfoFilter;
-(BOOL)hasContainedPlaceFilter;
-(BOOL)hasWifiFingerprintFilter;
-(BOOL)hasIconFilter;
-(BOOL)hasPriceDescriptionFilter;
-(BOOL)hasBrowseCategoriesFilter;
-(BOOL)hasAnnotatedItemListFilter;
-(BOOL)hasPoiEventFilter;
-(BOOL)hasPlacecardLayoutConfigurationFilter;
-(BOOL)hasWalletCategoryInformationFilter;
-(BOOL)hasTransitVehiclePositionFilter;
-(BOOL)hasLinkedServiceFilter;
-(BOOL)hasBusinessHoursFilter;
-(BOOL)hasPlaceCollectionFilter;
-(GEOPDEntityFilter *)entityFilter;
-(GEOPDPlaceInfoFilter *)placeInfoFilter;
-(GEOPDRoadAccessInfoFilter *)accessInfoFilter;
-(GEOPDBoundsFilter *)boundsFilter;
-(GEOPDAddressFilter *)addressFilter;
-(GEOPDRatingFilter *)ratingFilter;
-(GEOPDReviewFilter *)reviewFilter;
-(GEOPDPhotoFilter *)photoFilter;
-(GEOPDHoursFilter *)hoursFilter;
-(GEOPDTransitInfoFilter *)transitInfoFilter;
-(GEOPDETAFilter *)etaFilter;
-(GEOPDFlyoverFilter *)flyoverFilter;
-(GEOPDRawAttributeFilter *)rawAttributeFilter;
-(GEOPDAmenitiesFilter *)amenitiesFilter;
-(GEOPDStyleAttributesFilter *)styleAttributesFilter;
-(GEOPDTransitIncidentFilter *)transitIncidentFilter;
-(GEOPDTextBlockFilter *)textBlockFilter;
-(GEOPDFactoidFilter *)factoidFilter;
-(GEOPDTransitAttributionFilter *)transitAttributionFilter;
-(GEOPDBusinessClaimFilter *)businessClaimFilter;
-(GEOPDCaptionedPhotoFilter *)captionedPhotoFilter;
-(GEOPDTransitInfoSnippetFilter *)transitInfoSnippetFilter;
-(GEOPDExternalActionFilter *)externalActionFilter;
-(GEOPDResultSnippetFilter *)resultSnippetFilter;
-(GEOPDAddressObjectFilter *)addressObjectFilter;
-(GEOPDSimpleRestaurantMenuTextFilter *)simpleRestaurantMenuTextFilter;
-(GEOPDRestaurantReservationLinkFilter *)restaurantReservationLinkFilter;
-(GEOPDSpatialLookupFilter *)spatialLookupFilter;
-(GEOPDTipFilter *)tipFilter;
-(GEOPDPlacecardURLFilter *)placecardUrlFilter;
-(GEOPDAssociatedAppFilter *)associatedAppFilter;
-(GEOPDMessageLinkFilter *)messageLinkFilter;
-(GEOPDQuickLinkFilter *)quickLinkFilter;
-(GEOPDRapFilter *)rapFilter;
-(GEOPDLocationEventFilter *)locationEventFilter;
-(GEOPDVenueInfoFilter *)venueInfoFilter;
-(GEOPDContainedPlaceFilter *)containedPlaceFilter;
-(GEOPDWifiFingerprintFilter *)wifiFingerprintFilter;
-(GEOPDIconFilter *)iconFilter;
-(GEOPDPriceDescriptionFilter *)priceDescriptionFilter;
-(GEOPDBrowseCategoriesFilter *)browseCategoriesFilter;
-(GEOPDAnnotatedItemListFilter *)annotatedItemListFilter;
-(GEOPDPoiEventFilter *)poiEventFilter;
-(GEOPDPlacecardLayoutConfigurationFilter *)placecardLayoutConfigurationFilter;
-(GEOPDWalletCategoryInformationFilter *)walletCategoryInformationFilter;
-(GEOPDVehiclePositionFilter *)transitVehiclePositionFilter;
-(GEOPDLinkedServiceFilter *)linkedServiceFilter;
-(GEOPDBusinessHoursFilter *)businessHoursFilter;
-(GEOPDPlaceCollectionFilter *)placeCollectionFilter;
-(id)initEntityFilterWithSpokenNames;
-(id)initPhotoFilterWithTraits:(id)arg1 ;
-(id)initCaptionedPhotoFilterWithTraits:(id)arg1 ;
-(id)initAnnotatedItemListFilterWithTraits:(id)arg1 ;
-(id)initRestaurantReservationLinkFilterWithTraits:(id)arg1 ;
-(id)initResultSnippetFilterWithTraits:(id)arg1 ;
-(id)initReviewUserPhotoFilterWithTraits:(id)arg1 ;
-(id)initTipUserPhotoFilterWithTraits:(id)arg1 ;
-(id)initTransitScheduleFilterWithTraits:(id)arg1 ;
-(id)initAddressObjectFilterWithLibraryVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

