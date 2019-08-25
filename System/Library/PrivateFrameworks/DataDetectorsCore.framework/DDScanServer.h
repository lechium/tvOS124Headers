/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DDScanServer : NSObject {

	long long _options;
	double _timeout;

}

@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) double timeout;                 //@synthesize timeout=_timeout - In the implementation block
+(void)appendWatchOSLinksToString:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)scanString:(id)arg1 ;
-(void)scanString:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(id)init;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
@end
