/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTileDecoder.h>

@class NSString;

@interface GEOVectorTileDecoder : NSObject <GEOTileDecoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canDecodeTile:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2 ;
-(id)decodeTile:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
@end

