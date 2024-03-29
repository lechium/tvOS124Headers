/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDResolvedItem, NSString;

@interface GEOResolvedItem : NSObject {

	GEOPDResolvedItem* _resolvedItem;

}

@property (nonatomic,readonly) BOOL hasResultIndex; 
@property (nonatomic,readonly) unsigned long long resultIndex; 
@property (nonatomic,readonly) NSString * extractedTerm; 
@property (nonatomic,readonly) int itemType; 
-(NSString *)extractedTerm;
-(unsigned long long)resultIndex;
-(BOOL)hasResultIndex;
-(id)initWithResolvedItem:(id)arg1 ;
-(id)initWithAutocompleteResolvedItem:(id)arg1 ;
-(int)itemType;
@end

