/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface CoreUtilsNSSubrangeData : NSData {

	NSData* _data;
	NSRange _range;

}
-(BOOL)_isCompact;
-(id)initWithData:(id)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 ;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end

