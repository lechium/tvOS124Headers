/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKDirectoryRecord : NSObject {

	NSString* _displayName;
	NSString* _preferredAddress;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * preferredAddress;              //@synthesize preferredAddress=_preferredAddress - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)preferredAddress;
-(void)setPreferredAddress:(NSString *)arg1 ;
-(id)description;
-(NSString *)displayName;
@end

