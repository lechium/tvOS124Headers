/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUBufferedInputStream.h>

@class NSData, NSString;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {

	NSData* mData;
	const char* mStart;
	const char* mCurrent;
	const char* mEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canSeek;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
-(id)initWithData:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initWithData:(id)arg1 ;
@end
