/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSError;

@interface AXSimpleMessage : NSObject {

	NSDictionary* _payload;
	NSError* _error;

}

@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(id)messageWithPayload:(id)arg1 ;
-(id)description;
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

