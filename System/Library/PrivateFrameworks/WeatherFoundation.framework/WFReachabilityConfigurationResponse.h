/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse : WFResponse <NSSecureCoding> {

	NSURL* _reachabilityHostURL;

}

@property (nonatomic,copy) NSURL * reachabilityHostURL;                      //@synthesize reachabilityHostURL=_reachabilityHostURL - In the implementation block
@property (nonatomic,readonly) NWPathEvaluator * pathEvaluator; 
+(BOOL)supportsSecureCoding;
-(NWPathEvaluator *)pathEvaluator;
-(void)setReachabilityHostURL:(NSURL *)arg1 ;
-(NSURL *)reachabilityHostURL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
