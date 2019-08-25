/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {

	NSData* _agentData;

}

@property (retain) NSData * agentData;              //@synthesize agentData=_agentData - In the implementation block
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(void)setAgentData:(NSData *)arg1 ;
-(NSData *)agentData;
-(id)initWithProxyConfiguration:(id)arg1 ;
-(id)copyAgentData;
-(id)agentDescription;
@end
