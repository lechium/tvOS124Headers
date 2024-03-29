/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDChildPlace, GEOMapItemIdentifier, NSString;

@interface GEOMapItemChildPlace : NSObject {

	GEOPDChildPlace* _childPlace;
	GEOMapItemIdentifier* _identifier;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
-(id)initWithChildPlace:(id)arg1 ;
-(GEOMapItemIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
@end

