/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSOutputStream, NSError;

@interface SSGzipOutputStream : NSOutputStream {

	NSOutputStream* _backingStream;
	z_stream_s* _stream;
	unsigned long long _streamContentLength;
	NSError* _streamError;
	char* _streamOutBuffer;
	unsigned long long _streamOutBufferSize;

}
-(unsigned long long)streamStatus;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
-(BOOL)_initializeOutputStream;
-(void)_setStreamError:(int)arg1 context:(id)arg2 ;
-(long long)_consumeStreamOutput:(BOOL)arg1 ;
-(unsigned long long)streamContentLength;
-(id)initToMemory;
-(void)dealloc;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
@end

