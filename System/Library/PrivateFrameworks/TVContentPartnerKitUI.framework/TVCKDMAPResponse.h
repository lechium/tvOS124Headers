/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface TVCKDMAPResponse : NSObject {

	NSData* _responseBody;
	unsigned _httpStatusCode;
	NSString* _contentType;

}
-(id)contentType;
-(id)initWithResponseBody:(id)arg1 httpStatusCode:(unsigned)arg2 contentType:(id)arg3 ;
-(id)responseBody;
-(unsigned)httpStatusCode;
-(id)init;
@end
