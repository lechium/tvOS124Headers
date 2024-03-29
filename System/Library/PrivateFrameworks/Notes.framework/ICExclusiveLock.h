/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {

	int _fd;
	NSString* _name;
	NSString* _cachePath;
	NSString* _fullPath;

}
-(BOOL)tryLock;
-(id)initWithName:(id)arg1 cachePath:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)name;
-(void)setName:(id)arg1 ;
-(void)lock;
-(void)unlock;
@end

