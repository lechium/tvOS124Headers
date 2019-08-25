/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapTransitStop <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long hallID; 
@required
-(unsigned long long)hallID;
-(id)findHall:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findLinksIn:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findLinksOut:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end

