/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSString, NSData;

@interface _PLLazyPreheatData : NSData {

	NSString* _path;
	NSData* _data;

}
+(id)dataWithContentsOfFile:(id)arg1 ;
-(void)_loadData;
-(unsigned long long)length;
-(void)dealloc;
-(const void*)bytes;
-(id)initWithContentsOfFile:(id)arg1 ;
@end

