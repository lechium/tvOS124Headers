/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBReader.h>

@interface GEOPlaceDataDBReader : GEODBReader {

	sqlite3_stmtRef _sqlMUIDForPhoneNumber;
	sqlite3_stmtRef _sqlAllComponents;
	sqlite3_stmtRef _sqlAllPhoneNumbers;
	sqlite3_stmtRef _sqlAllComponentsPerPlaceData;
	sqlite3_stmtRef _sqlAllComponentsForPlaceData;

}
-(void)_closeDB;
-(void)_openDB;
-(void)_openDBIfNotAlreadyOpen;
-(id)_placeDataForIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)allCacheEntries;
-(id)componentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(id)initWithPath:(id)arg1 ;
@end

