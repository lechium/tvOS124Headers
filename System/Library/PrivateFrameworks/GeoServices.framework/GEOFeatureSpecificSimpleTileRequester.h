/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireSimpleTileRequester.h>

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireSimpleTileRequester
+(unsigned char)tileProviderIdentifier;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1 ;
-(unsigned char)_authTypeForTileKey:(const GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const GEOTileKey*)arg1 muid:(unsigned long long*)arg2 ;
@end

