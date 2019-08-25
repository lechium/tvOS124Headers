/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_resolver;
@class NWEndpoint, NWParameters, NSObject, NSSet, NSArray;

@interface NWResolver : NSObject {

	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NSObject*<OS_nw_resolver> _internalResolver;
	long long _internalStatus;
	NSSet* _internalResolvedEndpoints;
	NSArray* _internalResolvedEndpointArray;

}

@property (readonly) NSObject*<OS_nw_resolver> internalResolver;              //@synthesize internalResolver=_internalResolver - In the implementation block
@property (assign) long long internalStatus;                                  //@synthesize internalStatus=_internalStatus - In the implementation block
@property (retain) NSSet * internalResolvedEndpoints;                         //@synthesize internalResolvedEndpoints=_internalResolvedEndpoints - In the implementation block
@property (retain) NSArray * internalResolvedEndpointArray;                   //@synthesize internalResolvedEndpointArray=_internalResolvedEndpointArray - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (readonly) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSSet * resolvedEndpoints; 
@property (nonatomic,readonly) NSArray * resolvedEndpointArray; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSSet *)resolvedEndpoints;
-(NSArray *)resolvedEndpointArray;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(void)setUpdateHandler;
-(id)copyResolvedEndpoints;
-(id)copyResolvedEndpointArray;
-(NSObject*<OS_nw_resolver>)internalResolver;
-(long long)internalStatus;
-(void)setInternalStatus:(long long)arg1 ;
-(NSSet *)internalResolvedEndpoints;
-(void)setInternalResolvedEndpoints:(NSSet *)arg1 ;
-(NSArray *)internalResolvedEndpointArray;
-(void)setInternalResolvedEndpointArray:(NSArray *)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(long long)status;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
@end
