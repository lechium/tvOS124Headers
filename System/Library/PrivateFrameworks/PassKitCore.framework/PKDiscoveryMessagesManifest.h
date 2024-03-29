/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject {

	long long _version;
	NSArray* _engagementMessages;

}

@property (nonatomic,readonly) long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * engagementMessages;              //@synthesize engagementMessages=_engagementMessages - In the implementation block
-(NSArray *)engagementMessages;
-(long long)version;
-(id)initWithDictionary:(id)arg1 ;
@end

