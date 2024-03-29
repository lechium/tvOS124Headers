/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NWInterface, NSString;

@interface NEPathControllerNetworkAgent : NENetworkAgent {

	BOOL _weakAdvisory;
	BOOL _noAdvisoryTimer;
	/*^block*/id _internalAssertHandler;
	/*^block*/id _internalUnassertHandler;
	NWInterface* _advisoryInterface;
	NSString* _advisoryAgentDomain;
	NSString* _advisoryAgentType;
	NWInterface* _predictedInterface;

}

@property (copy) id internalAssertHandler;                        //@synthesize internalAssertHandler=_internalAssertHandler - In the implementation block
@property (copy) id internalUnassertHandler;                      //@synthesize internalUnassertHandler=_internalUnassertHandler - In the implementation block
@property (retain) NWInterface * advisoryInterface;               //@synthesize advisoryInterface=_advisoryInterface - In the implementation block
@property (retain) NSString * advisoryAgentDomain;                //@synthesize advisoryAgentDomain=_advisoryAgentDomain - In the implementation block
@property (retain) NSString * advisoryAgentType;                  //@synthesize advisoryAgentType=_advisoryAgentType - In the implementation block
@property (retain) NWInterface * predictedInterface;              //@synthesize predictedInterface=_predictedInterface - In the implementation block
@property (assign) BOOL weakAdvisory;                             //@synthesize weakAdvisory=_weakAdvisory - In the implementation block
@property (assign) BOOL noAdvisoryTimer;                          //@synthesize noAdvisoryTimer=_noAdvisoryTimer - In the implementation block
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(void)setAdvisoryInterface:(NWInterface *)arg1 ;
-(void)setPredictedInterface:(NWInterface *)arg1 ;
-(void)setWeakAdvisory:(BOOL)arg1 ;
-(void)setNoAdvisoryTimer:(BOOL)arg1 ;
-(void)setAdvisoryAgentDomain:(NSString *)arg1 ;
-(void)setAdvisoryAgentType:(NSString *)arg1 ;
-(NWInterface *)advisoryInterface;
-(NWInterface *)predictedInterface;
-(BOOL)weakAdvisory;
-(BOOL)noAdvisoryTimer;
-(NSString *)advisoryAgentDomain;
-(NSString *)advisoryAgentType;
-(id)internalAssertHandler;
-(id)internalUnassertHandler;
-(void)setInternalAssertHandler:(id)arg1 ;
-(void)setInternalUnassertHandler:(id)arg1 ;
-(void)setAssertHandler:(/*^block*/id)arg1 ;
-(void)setUnassertHandler:(/*^block*/id)arg1 ;
-(id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2 ;
-(id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3 ;
-(id)copyAgentData;
-(BOOL)assertAgentWithOptions:(id)arg1 ;
-(void)unassertAgentWithOptions:(id)arg1 ;
@end

