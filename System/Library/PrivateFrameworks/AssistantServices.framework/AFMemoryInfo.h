/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding> {

	int _numberOfRegions;
	int _pageSizeInBytes;
	unsigned long long _virtualMemorySizeInBytes;
	unsigned long long _residentMemorySizeInBytes;
	unsigned long long _peakResidentMemorySizeInBytes;
	unsigned long long _physicalMemoryFootprintInBytes;

}

@property (nonatomic,readonly) unsigned long long virtualMemorySizeInBytes;                    //@synthesize virtualMemorySizeInBytes=_virtualMemorySizeInBytes - In the implementation block
@property (nonatomic,readonly) int numberOfRegions;                                            //@synthesize numberOfRegions=_numberOfRegions - In the implementation block
@property (nonatomic,readonly) int pageSizeInBytes;                                            //@synthesize pageSizeInBytes=_pageSizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long residentMemorySizeInBytes;                   //@synthesize residentMemorySizeInBytes=_residentMemorySizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long peakResidentMemorySizeInBytes;               //@synthesize peakResidentMemorySizeInBytes=_peakResidentMemorySizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalMemoryFootprintInBytes;              //@synthesize physicalMemoryFootprintInBytes=_physicalMemoryFootprintInBytes - In the implementation block
+(id)newWithBuilder:(/*^block*/id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6 ;
-(unsigned long long)virtualMemorySizeInBytes;
-(int)numberOfRegions;
-(int)pageSizeInBytes;
-(unsigned long long)residentMemorySizeInBytes;
-(unsigned long long)peakResidentMemorySizeInBytes;
-(unsigned long long)physicalMemoryFootprintInBytes;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

