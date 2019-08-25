/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKMediaEntityCache.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TVHKMediaEntityShowsCache : TVHKMediaEntityCache <NSCopying> {

	NSArray* _DAAPShows;

}

@property (nonatomic,copy) NSArray * DAAPShows;                   //@synthesize DAAPShows=_DAAPShows - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shows; 
-(void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2 ;
-(NSArray *)DAAPShows;
-(void)setDAAPShows:(NSArray *)arg1 ;
-(id)showForIdentifier:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(NSArray *)shows;
@end

