/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@interface CKException : NSException
-(int)errorCode;
-(id)initWithCode:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithName:(id)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 ;
-(id)initWithName:(id)arg1 format:(id)arg2 ;
-(id)error;
@end

