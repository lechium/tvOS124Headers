/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSEncodingDetectionPlaceholder;

@interface NSEncodingDetectionBuffer : NSObject {

	unsigned long long _nsEncoding;
	unsigned _cfEncoding;
	NSEncodingDetectionPlaceholder* _placeholder;
	char* _bytes;
	BOOL _bytesAllocated;
	unsigned long long _bytesIndex;
	unsigned long long _bytesLength;

}
-(BOOL)_growBufferIfNeededToAccomodateByteCount:(unsigned long long)arg1 ;
-(id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned)arg2 stackBuffer:(char*)arg3 bufferLength:(unsigned long long)arg4 placeholder:(id)arg5 ;
-(void)appendByte:(unsigned char)arg1 ;
-(void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 ;
-(void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 ;
-(void)appendUTF16Char:(unsigned short)arg1 ;
-(void)appendUTF32Char:(unsigned)arg1 ;
-(void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4 ;
-(void)appendPlaceholder;
-(void)appendBytes:(const char*)arg1 count:(unsigned long long)arg2 ;
-(id)stringWithLossySubsitutionString:(id)arg1 ;
-(void)dealloc;
@end

