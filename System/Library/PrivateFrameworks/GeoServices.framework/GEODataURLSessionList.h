/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEODataURLSessionList : NSObject {

	NSMutableArray* _urlSessions;
	NSMutableArray* _lastUsedDates;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)urlSessionForRequest:(id)arg1 ;
-(void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(BOOL)arg2 ;
-(void)addSession:(id)arg1 ;
-(id)urlSessionForIdentifier:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
@end

