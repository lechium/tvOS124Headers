/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueIdentifier.h>
@class NSArray;


@protocol GEOVenueIdentifier <NSObject>
@property (getter=_hasVenueID,nonatomic,readonly) BOOL hasVenueID; 
@property (nonatomic,readonly) unsigned long long venueID; 
@property (getter=_hasBusinessID,nonatomic,readonly) BOOL hasBusinessID; 
@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) NSArray * componentIdentifiers; 
@required
-(NSArray *)componentIdentifiers;
-(unsigned long long)venueID;
-(unsigned long long)businessID;
-(id)placeDataVenueIdentifier;
-(id)placeDataVenueIdentifierForVenue;
-(BOOL)_hasVenueID;
-(BOOL)_hasBusinessID;

@end


@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier> {

	BOOL _hasVenueID;
	unsigned long long _venueID;
	BOOL _hasBusinessID;
	unsigned long long _businessID;
	NSArray* _componentIdentifiers;
	NSArray* _originalIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_hasVenueID,nonatomic,readonly) BOOL hasVenueID;                    //@synthesize hasVenueID=_hasVenueID - In the implementation block
@property (nonatomic,readonly) unsigned long long venueID;                            //@synthesize venueID=_venueID - In the implementation block
@property (getter=_hasBusinessID,nonatomic,readonly) BOOL hasBusinessID;              //@synthesize hasBusinessID=_hasBusinessID - In the implementation block
@property (nonatomic,readonly) unsigned long long businessID;                         //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) NSArray * componentIdentifiers;                        //@synthesize componentIdentifiers=_componentIdentifiers - In the implementation block
+(unsigned long long)venueIdFromVenueIdentifiers:(id)arg1 ;
+(unsigned long long)businessIDFromVenueIdentifiers:(id)arg1 ;
+(id)componentIdentifiersFromVenueIdentifiers:(id)arg1 ;
-(id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2 ;
-(NSArray *)componentIdentifiers;
-(unsigned long long)venueID;
-(unsigned long long)businessID;
-(id)initWithVenueIdentifiers:(id)arg1 ;
-(id)initWithVenueID:(unsigned long long)arg1 ;
-(id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2 componentIdentifiers:(id)arg3 ;
-(id)placeDataVenueIdentifier;
-(id)placeDataVenueIdentifierForVenue;
-(BOOL)_hasVenueID;
-(BOOL)_hasBusinessID;
-(id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2 ;
@end

