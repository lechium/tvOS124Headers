/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _TVScreenSaverRequest : NSObject {

	/*^block*/id _responseBlock;
	NSDictionary* _options;

}

@property (nonatomic,copy) id responseBlock;                      //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(void)setResponseBlock:(id)arg1 ;
-(id)responseBlock;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

