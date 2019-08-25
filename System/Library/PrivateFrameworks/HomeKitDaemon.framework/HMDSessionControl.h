/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMDSessionControl : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	unsigned long long _controlCommand;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) unsigned long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionID;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)controlCommand;
-(id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
