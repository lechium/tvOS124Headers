/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPPort.h>

@interface TSgPTPMachPort : TSgPTPPort
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
-(int)portType;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(void)dealloc;
@end

