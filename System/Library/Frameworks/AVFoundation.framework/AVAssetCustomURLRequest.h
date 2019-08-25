/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVAssetCustomURLRequest : NSObject {

	unsigned long long _requestID;
	CFDictionaryRef _customURLRequest;
	CFDictionaryRef _customURLResponse;

}

@property (nonatomic,readonly) unsigned long long requestID;              //@synthesize requestID=_requestID - In the implementation block
+(id)requestWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(id)initWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(CFDictionaryRef)customURLRequest;
-(void)setCustomURLRequest:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)customURLResponse;
-(void)setCustomURLResponse:(CFDictionaryRef)arg1 ;
-(unsigned long long)requestID;
-(id)init;
-(void)dealloc;
@end

