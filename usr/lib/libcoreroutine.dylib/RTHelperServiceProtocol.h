/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTHelperServiceProtocol
@required
-(void)fetchMapItemFromHandle:(id)arg1 handler:(/*^block*/id)arg2;
-(void)fetchMapItemsFromLocation:(id)arg1 handler:(/*^block*/id)arg2;
-(void)fetchMapItemsFromLocations:(id)arg1 accessPoints:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 handler:(/*^block*/id)arg5;
-(void)fetchMapItemsFromAddressDictionary:(id)arg1 handler:(/*^block*/id)arg2;
-(void)fetchMapItemsFromNaturalLanguageQuery:(id)arg1 location:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchMapItemsFromAddressString:(id)arg1 handler:(/*^block*/id)arg2;
-(void)createMapItemWithIdentifier:(id)arg1 geoMapItemStorage:(id)arg2 source:(unsigned long long)arg3 creationDate:(id)arg4 handler:(/*^block*/id)arg5;
-(void)calculateETAFromOrigin:(id)arg1 toDestination:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchMapsURLFromGeoMapItemHandle:(id)arg1 handler:(/*^block*/id)arg2;

@end

