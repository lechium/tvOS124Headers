/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSInlineData : NSData {

	unsigned short _length;

}
-(BOOL)_isCompact;
-(BOOL)_providesConcreteBacking;
-(id)_createDispatchData;
-(unsigned long long)length;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end
