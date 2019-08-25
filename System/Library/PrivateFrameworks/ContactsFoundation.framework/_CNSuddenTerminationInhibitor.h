/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNInhibitor.h>

@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor {

	NSProcessInfo* _processInfo;

}

@property (nonatomic,retain) NSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
-(id)initWithProcessInfo:(id)arg1 ;
-(void)setProcessInfo:(NSProcessInfo *)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
-(NSProcessInfo *)processInfo;
@end
