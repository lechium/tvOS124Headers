/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSEncodingDetectionPlaceholder : NSObject {

	unsigned long long nsEncoding;
	unsigned cfEncoding;
	NSString* string;
	char* bytes;
	unsigned long long bytesLength;
	char* bytesStart;

}

@property (readonly) unsigned long long nsEncoding; 
@property (readonly) unsigned cfEncoding; 
@property (readonly) NSString * string; 
@property (readonly) char* bytes; 
@property (readonly) unsigned long long bytesLength; 
+(id)placeholderForDetector:(id)arg1 ;
-(unsigned long long)nsEncoding;
-(unsigned)cfEncoding;
-(unsigned long long)bytesLength;
-(void)dealloc;
-(NSString *)string;
-(id)debugDescription;
-(char*)bytes;
@end

