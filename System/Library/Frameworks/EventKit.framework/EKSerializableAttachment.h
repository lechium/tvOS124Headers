/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class NSURL;

@interface EKSerializableAttachment : EKSerializableObject {

	NSURL* _urlOnDisk;

}

@property (nonatomic,retain) NSURL * urlOnDisk;              //@synthesize urlOnDisk=_urlOnDisk - In the implementation block
+(id)classesForKey;
-(id)createAttachment;
-(NSURL *)urlOnDisk;
-(void)setUrlOnDisk:(NSURL *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
@end

