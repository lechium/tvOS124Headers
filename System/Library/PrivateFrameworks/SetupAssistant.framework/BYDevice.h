/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYDevice : NSObject {

	BOOL _hasHomeButton;
	long long _type;
	long long _size;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long size;                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeButton;              //@synthesize hasHomeButton=_hasHomeButton - In the implementation block
+(id)currentDevice;
-(BOOL)hasHomeButton;
-(long long)size;
-(id)init;
-(long long)type;
@end

