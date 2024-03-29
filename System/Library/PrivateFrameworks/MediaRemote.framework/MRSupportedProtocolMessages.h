/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding> {

	unsigned long long _lastSupportedMessageType;

}

@property (nonatomic,readonly) unsigned long long lastSupportedMessageType;              //@synthesize lastSupportedMessageType=_lastSupportedMessageType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithLastSupportedMessageType:(unsigned long long)arg1 ;
-(unsigned long long)lastSupportedMessageType;
-(BOOL)isSupported:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

