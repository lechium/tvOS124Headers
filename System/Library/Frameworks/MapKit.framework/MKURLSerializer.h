/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKURLSerializer : NSObject
+(id)stringForMapType:(unsigned long long)arg1 ;
+(id)stringForDirectionsType:(unsigned long long)arg1 ;
-(id)urlForOpeningMapItems:(id)arg1 options:(id)arg2 ;
-(id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4 ;
-(id)mapItemsFromUrl:(id)arg1 options:(id*)arg2 ;
@end

