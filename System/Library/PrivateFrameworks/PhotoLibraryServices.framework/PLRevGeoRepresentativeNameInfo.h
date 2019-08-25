/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableOrderedSet, NSNumber;

@interface PLRevGeoRepresentativeNameInfo : NSObject {

	BOOL _allEntriesAtHome;
	BOOL _allEntriesMatchHomeForOrderType;
	BOOL _addCountyIfNeeded;
	NSString* _name;
	unsigned long long _type;
	unsigned long long _matchingCount;
	NSMutableOrderedSet* _geoPlaces;
	NSMutableOrderedSet* _remainingGeoPlaces;

}

@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long matchingCount;                        //@synthesize matchingCount=_matchingCount - In the implementation block
@property (assign,nonatomic) BOOL allEntriesAtHome;                                   //@synthesize allEntriesAtHome=_allEntriesAtHome - In the implementation block
@property (assign,nonatomic) BOOL allEntriesMatchHomeForOrderType;                    //@synthesize allEntriesMatchHomeForOrderType=_allEntriesMatchHomeForOrderType - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * geoPlaces;                       //@synthesize geoPlaces=_geoPlaces - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * remainingGeoPlaces;              //@synthesize remainingGeoPlaces=_remainingGeoPlaces - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (assign,nonatomic) BOOL addCountyIfNeeded;                                  //@synthesize addCountyIfNeeded=_addCountyIfNeeded - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * minimumArea; 
-(void)setMatchingCount:(unsigned long long)arg1 ;
-(void)setAllEntriesAtHome:(BOOL)arg1 ;
-(void)setAllEntriesMatchHomeForOrderType:(BOOL)arg1 ;
-(NSMutableOrderedSet *)geoPlaces;
-(void)addGeoPlaces:(id)arg1 ;
-(unsigned long long)matchingCount;
-(BOOL)allEntriesAtHome;
-(BOOL)allEntriesMatchHomeForOrderType;
-(id)_typeKeyForOrderType:(unsigned long long)arg1 countryCode:(id)arg2 ;
-(void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned long long)arg3 countryCode:(id)arg4 ;
-(BOOL)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned long long)arg2 ;
-(BOOL)_currentLanguageSupportsModifiersForOrderType:(unsigned long long)arg1 ;
-(id)_resourceKeysForOrderType:(unsigned long long)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateWithAddedNameInfo:(id)arg1 ;
-(void)addGeoPlace:(id)arg1 ;
-(void)clearGeoPlaces;
-(void)prepareRemainingGeoPlaces;
-(void)removeGeoPlacesFromRemaining:(id)arg1 ;
-(NSNumber *)minimumArea;
-(NSMutableOrderedSet *)remainingGeoPlaces;
-(BOOL)addCountyIfNeeded;
-(void)setAddCountyIfNeeded:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)localizedName;
@end

