/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSDateComponentsFormatter;

@interface AVDurationTimeFormatter : NSFormatter {

	NSDateComponentsFormatter* _longerFormatter;
	NSDateComponentsFormatter* _shorterFormatter;

}

@property (readonly) NSDateComponentsFormatter * longerFormatter;               //@synthesize longerFormatter=_longerFormatter - In the implementation block
@property (readonly) NSDateComponentsFormatter * shorterFormatter;              //@synthesize shorterFormatter=_shorterFormatter - In the implementation block
-(id)stringForTimeInterval:(double)arg1 ;
-(NSDateComponentsFormatter *)longerFormatter;
-(NSDateComponentsFormatter *)shorterFormatter;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
@end
