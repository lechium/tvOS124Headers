/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OSLogEventStreamPosition : NSObject <NSSecureCoding> {

	unsigned char _source[16];
	unsigned char _uuid[16];
	unsigned long long _ct;

}

@property (readonly) const char* sourceUUID; 
@property (readonly) const char* UUID; 
@property (readonly) unsigned long long continuousTime; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)continuousTime;
-(const char*)sourceUUID;
-(id)initWithSource:(const char*)arg1 bootUUID:(const char*)arg2 time:(unsigned long long)arg3 ;
-(const char*)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

