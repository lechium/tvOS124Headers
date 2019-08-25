/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface GEONetworkDataReader : NSObject {

	NSMutableData* _data;
	unsigned long long _dataLength;
	const void* _bytes;
	unsigned long long _bookmarkOffset;
	unsigned long long _offset;

}
-(BOOL)readUnsignedShort:(unsigned short*)arg1 ;
-(id)allData;
-(void)appendNetworkData:(id)arg1 ;
-(id)readString;
-(BOOL)readUnsignedInt:(unsigned*)arg1 ;
-(id)readData:(unsigned)arg1 ;
-(void)markOffset;
-(void)seekToMarkedOffset;
-(BOOL)hasUnreadData;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

