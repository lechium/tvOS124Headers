/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSData;

@interface GEOPNRCCTrieReader : NSObject {

	CFBurstTrieRef _trie;
	NSData* _ccFile;

}
-(id)initWithFile:(id)arg1 ;
-(id)lookupCCForPhNumber:(id)arg1 ;
-(void)dealloc;
@end

