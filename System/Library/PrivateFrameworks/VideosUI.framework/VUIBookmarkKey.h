/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VUIBookmarkKey : NSObject {

	NSString* _identifier;
	long long _keyType;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long keyType;                  //@synthesize keyType=_keyType - In the implementation block
-(long long)keyType;
-(id)init;
-(NSString *)identifier;
-(id)description;
-(id)initWithIdentifier:(id)arg1 keyType:(long long)arg2 ;
@end

