/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitConnectionInfo.h>

@class NSString, NSArray, NSURL, GEOPDTransitConnection;

@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo> {

	GEOPDTransitConnection* _connection;
	int _providerID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSURL * urlToOpen; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) int providerID; 
-(unsigned long long)muid;
-(int)providerID;
-(NSArray *)labelItems;
-(NSURL *)urlToOpen;
-(id)initWithConnection:(id)arg1 providerID:(int)arg2 ;
-(NSString *)name;
@end

