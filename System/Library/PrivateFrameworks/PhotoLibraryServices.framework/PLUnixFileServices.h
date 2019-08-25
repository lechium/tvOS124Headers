/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLUnixFileServices.h>

@protocol PLUnixFileServices <NSObject>
@required
-(char*)realpath:(const char*)arg1 :(char*)arg2;
-(int)errnoValue;

@end


@class NSString;

@interface PLUnixFileServices : NSObject <PLUnixFileServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUnixFileServices;
-(char*)realpath:(const char*)arg1 :(char*)arg2 ;
-(int)errnoValue;
@end
