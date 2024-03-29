/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {

	unsigned short _alignment;
	unsigned _dataSize;
	unsigned long long _dataType;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setStructType:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9 ;
-(unsigned long long)threadgroupMemoryAlignment;
-(unsigned long long)threadgroupMemoryDataSize;
-(unsigned long long)threadgroupMemoryDataType;
-(id)threadgroupMemoryStructType;
@end

