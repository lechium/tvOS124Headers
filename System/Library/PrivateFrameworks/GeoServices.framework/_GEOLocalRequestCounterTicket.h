/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEORequestCounterTicket.h>

@class NSString, GEORequestCounterPersistence;

@interface _GEOLocalRequestCounterTicket : NSObject <GEORequestCounterTicket> {

	unsigned char _type;
	NSString* _appId;
	long long _requestId;
	GEORequestCounterPersistence* _persistence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 persistence:(id)arg3 ;
-(void)requestCompletedWithResult:(unsigned char)arg1 mode:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4 ;
@end

