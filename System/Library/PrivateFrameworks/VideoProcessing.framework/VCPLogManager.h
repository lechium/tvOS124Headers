/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPLogManager : NSObject {

	int _logLevel;

}

@property (readonly) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedLogManager;
-(int)logLevel;
-(id)init;
@end

