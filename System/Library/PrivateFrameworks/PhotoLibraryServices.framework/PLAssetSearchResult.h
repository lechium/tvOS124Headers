/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLSearchResult.h>

@class NSDate, NSArray;

@interface PLAssetSearchResult : PLSearchResult {

	NSDate* _sortDate;

}

@property (nonatomic,readonly) NSArray * assetUUIDs; 
@property (nonatomic,readonly) NSDate * sortDate;                 //@synthesize sortDate=_sortDate - In the implementation block
-(id)keyAssetUUID;
-(NSDate *)sortDate;
-(NSArray *)assetUUIDs;
-(unsigned long long)assetCount;
-(unsigned long long)type;
@end

